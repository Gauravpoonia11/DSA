#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int> a1{1,2,3};
    vector<int> a2{3,2,1,4,7};
    int l1=sizeof(a1)/sizeof(a1[0]);
    int l2=sizeof(a2)/sizeof(a2[0]);
    int i=0,j=0;
    vector<int> b(l2); 
    while(i<l1 && i<l2){
        if(l1<l2){
            for(int n=0;n<l2;n++){
                if(a1[i]==a2[n]){
                   b[j]=a1[i];
                   j++;
                }
            }    
        }
        else{
            for(int n=0;n<l1;n++){
               if(a1[i]==a2[n]){
                  b[j]=a1[i];
                  j++;
               }  
            }
       }
        i++;
    }
    sort(b.begin(),b.end());
    int l3=sizeof(b)/sizeof(b[0]);
    //j = 0;
    //for (int i=0; i < l3; i++){
      //  if (b[i] != b[i+1]){
        //    b[j++] = b[i]; 
        //}    
    //} 
    //b[j++] = b[l3-1];   
    for(int i=0;i<l3;i++){
        cout<<b[i];
    }
    return 0;
}