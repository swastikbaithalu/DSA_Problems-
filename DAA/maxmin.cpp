#include<iostream>
#include<math.h>
using namespace std;
int maxNo(int a[],int f,int l){
    if(l-f<=1)
        return max(a[f],a[l]);
    int mid=(f+l)/2;
    int max1=maxNo(a,f,mid);
    int max2=maxNo(a,mid,l);
    return max(max1,max2);

}
int minNo(int a[],int f,int l){
    if(l-f<=1)
        return min(a[f],a[l]);
    int mid= (f+l)/2;
    int min1=minNo(a,f,mid);
    int min2=minNo(a,mid,l);
    return (min(min1,min2));
}
int main(){
    int A[] = {7, 6, 14, 200, 175};
    int n = sizeof(A) / sizeof(int);
    int max=maxNo(A,0,n-1);
    int min=minNo(A,0,n-1);
    cout<<"MAX= "<<max<<endl;
    cout<<"MIN= "<<min<<endl;
}