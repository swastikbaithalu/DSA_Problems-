#include<bits/stdc++.h>
using namespace std;
int fibbonaci(int n){
    int fib[n+1];
    fib[0]=0;
    fib[1]=1;
    for (int i=2;i<n+1;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    return fib[n];
}
int main(){
    int n;
    cin>>n;
    cout<<fibbonaci(n);
    return 0;
}