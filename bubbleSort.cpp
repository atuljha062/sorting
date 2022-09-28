#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        bool swapped = false;
        for(int j=1;j<n-i;j++){
            if(arr[j]<arr[j-1]){
                swapped = true;
                swap(arr[j],arr[j-1]);
            }
        }
        if(!swapped){
            break;
        }
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

    bubbleSort(arr,n);

    cout<<"After sorting"<<endl;

    printArr(arr,n);

    return 0;
}