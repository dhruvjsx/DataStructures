#include<bits/stdc++.h>
using namespace std;
int movezeros(int arr[],int size,int k){
int  j=-1;

for(int i=0; i<size; i++){
if(arr[i]==0){
  j=i;
  break;
}
}

if(j==-1){
  cout<<"no zero elemenet";
  return 0;
}

for(int i=j+1; i<size; i++){
if(arr[i]!=0){
  swap(arr[i],arr[j]);
  j++;
}

}
for(int i=0; i<size; i++){
  cout<<arr[i]<<" ";
}

}

int main(){

int arr[]={1,0,0,5,6,7};
int size=sizeof(arr)/sizeof(arr[0]);
int k=2;
movezeros(arr,size,k);
}