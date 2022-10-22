#include <iostream>
using namespace std;
void minchange(int a[],int n){
    while(n){
        for(int i=0;i<n;i++){
            if(a[i]<=n && a[i+1]>n){
                cout<<a[i]<<' ';
                n=n-a[i];
                break;
            }

    }
}
}

int main()
{
   int a[]={1,2,5,10,20,50,100,200,500,2000};
   int n;
   cin>>n;
   minchange(a,n);
    return 0;
}
