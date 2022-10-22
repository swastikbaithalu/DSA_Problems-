#include<iostream>
using namespace std;

int main() {
    int c=0, i,k;
    cout<<"Enter K"<<endl;
    cin>>k;
    int arr[] = {52,32,65,12,54,56,23,151,24,6,0};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Array of elements : \n";
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    //Algo largest
    int counter = 1;
    while (counter<=k) {
    for( i=0;i<size-1;i++)
    {
         if (arr[i] > arr[i+1])
       {
           int temp=arr[i];
           arr[i]=arr[i+1];
           arr[i+1]=temp;
       }
    }
    counter++;
    }
    cout <<"Kth Largest Element"<<arr[size-k]<<endl;
    //Algo Smallest
    counter = 1;
    while (counter<=k) {
    for( i=0;i<size-1;i++)
    {
         if (arr[i] <arr[i+1])
       {
           int temp=arr[i];
           arr[i]=arr[i+1];
           arr[i+1]=temp;
       }
    }
    counter++;
    }
    cout <<"Kth Smallest Element"<<arr[size-k]<<endl;
    cout << endl; 
    return 0;
}
