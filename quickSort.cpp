#include<iostream>
using namespace std;

int partition(int arr[],int l, int h){

    int i = l;
    int j = h;

    int pivot = arr[l];

    while(i<j){
        while(arr[i]<=pivot && i<j) i++;

        while(arr[j]>pivot && i<=j) j--;

        if(i<j){
            swap(arr[i],arr[j]);
        }

    }

    swap(arr[l],arr[j]);

    return j;
}

void quickSort(int arr[],int l, int h){
    if(l<h){
        int pivot = partition(arr,l,h);

        quickSort(arr,l,pivot-1);
        quickSort(arr,pivot+1,h);
    }
}

void printArr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){

    int arr[] = {5,6,1,4,17,11};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Before Sorting"<<endl;

    printArr(arr,n);

    quickSort(arr,0,n-1);

    cout<<"After sorting"<<endl;

    printArr(arr,n);

    return 0;
}