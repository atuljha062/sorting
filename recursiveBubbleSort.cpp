#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    if(n==1){
        return;
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    bubbleSort(arr,n-1);
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

    bubbleSort(arr,n);

    cout<<"After sorting"<<endl;

    printArr(arr,n);

    return 0;
}