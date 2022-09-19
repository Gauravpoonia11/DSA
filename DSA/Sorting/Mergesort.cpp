#include<iostream>
using namespace std;
void conquer(int ar[],int si,int mid,int ei){
    int merge[ei-si+1];
    
    int idx1=si;
    int idx2=mid+1;
    int x=0;

    while(idx1<=mid && idx2<=ei){
        if(ar[idx1]<=ar[idx2]){
            merge[x++]=ar[idx1++];
        }else{
            merge[x++]=ar[idx2++];
        }
    }

    while(idx1<=mid){
        merge[x++]=ar[idx1++];
    }

    while(idx2<=ei){
        merge[x++]=ar[idx2++];
    }
    int len = sizeof(merge)/sizeof(merge[0]);

    for(int i=0,j=si;i<len;i++,j++){
        ar[j]=merge[i];
    }
}

void divider(int ar[],int si,int ei){
    if(si>=ei){
        return; 
    }

    int mid=si+(ei-si)/2; // mid=(si+ei)/2
    divider(ar,si,mid);
    divider(ar,mid+1,ei);
    conquer(ar,si,mid,ei);
}

int main(){
    int ar[]={6,3,9,5,2,8};
    int n=sizeof(ar)/sizeof(ar[0]);
    divider(ar,0,n-1);
    for(int i=0;i<n;i++){
        cout<<ar[i];
    }
    return 0;
}