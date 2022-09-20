#include<iostream>
using namespace std;
int partition(int ar[],int low,int high){
    int pivot=ar[high];
    int i=low-1;

    for(int j=low;j<high;j++){
        if(ar[j]<pivot){
            i++;
            //swap
            int temp=ar[i];
            ar[i]=ar[j];
            ar[j]=temp;
        }
    }
    //swap with pivot
    i++;
    int temp=ar[i];
    ar[i]=ar[high];
    ar[high]=temp;
    return i;
}

void quicksort(int ar[],int low,int high){
    if(low<high){
        int pidx=partition(ar,low,high);

        quicksort(ar,low,pidx-1);
        quicksort(ar,pidx+1,high);
    }
}

int main(){
    int ar[]={6,3,9,5,2,8};
    int n=sizeof(ar)/sizeof(ar[0]);

    quicksort(ar,0,n-1);
    for(int i=0;i<n;i++){
        cout<<ar[i];
    }
    return 0;
}