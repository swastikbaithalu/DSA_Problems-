#include<iostream>
using namespace std;

int peak(int arr[5],int first ,int size){
    for(int i=first;i<size;i++){
           if (i==first && arr[i+1]<arr[first])
            cout<<arr[first]<<endl;
        else if(i==size-1 && arr[i]>arr[i-1])
            cout<<arr[size]<<endl;
        else if (i<size-1 && arr[i]>arr[i-1]&& arr[i]> arr[i+1])
            cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[]={7,6,14,200,175};
    int size=sizeof(arr)/sizeof(int);
    cout<<"peak numbers are :"<<endl;
    peak(arr,0,size/2);
    peak(arr,(size/2)+1,size);
    
    return 0;
}