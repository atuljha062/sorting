#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp = arr[i];

        int j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = temp;
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

    insertionSort(arr,n);

    cout<<"After sorting"<<endl;

    printArr(arr,n);

    return 0;
}