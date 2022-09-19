#include<iostream>
using namespace std;
int main(){
    int ar[]={7,8,3,2,1};        
    int len = sizeof(ar)/sizeof(ar[0]);
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-i-1;j++){
            if(ar[j]>ar[j+1]){
                int temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
    for(int i=0;i<len;i++){
        cout<<ar[i];
    }   
    return 0;
}