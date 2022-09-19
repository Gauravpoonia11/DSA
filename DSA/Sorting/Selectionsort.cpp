#include<iostream>
using namespace std;
int main(){
    int ar[]={7,8,5,3,2,1};        
    int len = sizeof(ar)/sizeof(ar[0]);
    for(int i=0;i<len-1;i++){
        int s=i;
        for(int j=i+1;j<len;j++){
            if(ar[s]>ar[j]){
                s=j;
            }
        }
        int temp=ar[s];
        ar[s]=ar[i];
        ar[i]=temp;
    }
    for(int i=0;i<len;i++){
        cout<<ar[i];
    }  
    return 0;
}