#include<iostream>

using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        if(min != i){
            swap(arr[i],arr[min]);
        }
    }
}

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[] = {5,6,1,4,17,11};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Before sorting: "<<endl;

    printArr(arr,n);
    
    selectionSort(arr,n);

    cout<<endl<<"After Sorting: "<<endl;

    printArr(arr,n);

    return 0;
}