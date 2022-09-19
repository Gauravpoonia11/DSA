#include<iostream>
using namespace std;
int main(){
    int ar[]={7,8,5,6,3,2,1};        
    int len = sizeof(ar)/sizeof(ar[0]);
    for(int i=1;i<len;i++){
        int current = ar[i];
        int j = i-1;
        while(j>=0 &&  current < ar[j]){
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=current;
    }
    for(int i=0;i<len;i++){
        cout<<ar[i];
    }   
    return 0;
}