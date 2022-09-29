#include<iostream>
using namespace std;

void merge(int arr[],int l,int mid,int r){
    int b[r+1];

    int i = l;
    int j = mid+1;
    int k = l;

    while(i<=mid && j<=r){
        if(arr[i]<arr[j]){
            b[k] = arr[i];
            i++;
        }else{
            b[k] = arr[j];
            j++;
        }
        k++;
    }

    if(i>mid){
        while(j<=r){
            b[k++] = arr[j++];
        }
    }else{
        while(i<=mid){
            b[k++] = arr[i++];
        }
    }

    for(k=l;k<=r;k++){
        arr[k] = b[k];
    }
}

void mergeSort(int arr[],int l, int h){
    if(l<h){
        int mid = (l+h)/2;

        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,h);

        merge(arr,l,mid,h);
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

    mergeSort(arr,0,n-1);

    cout<<"After sorting"<<endl;

    printArr(arr,n);

    return 0;
}