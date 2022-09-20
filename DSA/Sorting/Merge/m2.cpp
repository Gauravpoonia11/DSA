#include<iostream>
using namespace std;
void merge(int a[],int mid,int l,int h,int len){
    int i,j,k;
    int b[len];
    i=l,j=mid+1,k=l;
    while(i<mid && j<h){
        if(a[i]<a[j]){
            b[k]=a[i];
            k++;i++;
        }else{
            b[k]=a[j];
            k++;j++;
        }
    }
    while(i<mid){
        b[k]=a[i];
        k++;i++;
    }
    while(j<h){
        b[k]=a[j];
        k++;j++;
    }
    for(int i=0;i<len;i++){
        a[i]=b[i];
    }
}
int main(){
    int a[]={7,15,2,8,10};
    int len=sizeof(a)/sizeof(a[0]);
    int l=0,h=len-1;
    int mid=l+(h-l)/2;
    merge(a,mid,l,h,len);
    for(int i=0;i<len;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}