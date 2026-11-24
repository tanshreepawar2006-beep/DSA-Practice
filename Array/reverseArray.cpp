#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){
    int start=0;
    int end=size-1;

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[]={20 ,40, 54, 12, 34};
    int size=5;
    reverseArray(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}