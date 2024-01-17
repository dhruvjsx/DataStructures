// Method 1:
// 1) Usw map and store frequency for both array and store first value of map into  a _VECTOR_TCC

// Method 2:
// 1)Use a set to store unique values of both array in single set then transfer this value to vector and print _VECTOR_TCC

// Method 3:(for sorted arrays)
// 1)Use two pointer place one pointere in arr1 and another pointer on arr2.Check for the sortest element from both pointer. and place them onto new vector. Also make sure the value is not already present in vector


#include<bits/stdc++.h>
using namespace std;
// void findUnion(int arr1[],int arr2[],int n,int m){
// set < int > s;
//   vector < int > Union;
//   for (int i = 0; i < n; i++)
//     s.insert(arr1[i]);
//   for (int i = 0; i < m; i++)
//     s.insert(arr2[i]);
//   for (auto & it: s)
//     Union.push_back(it);
//   for(auto dh: Union){
//     cout<<dh<<" ";
//   }
// }

void optimizedFindUnion(int arr1[],int arr2[],int n,int m){
set < int > s;
  vector < int > Union;
  int i=0,j=0;
 while(i<n &&  j<m){

    if(arr1[i]<=arr2[j]){
        if(Union.size()==0||Union.back()!=arr1[i])
            Union.push_back(arr1[i]);
        i++;
    }else{
            if(Union.size()==0||Union.back()!=arr2[j]){
            Union.push_back(arr2[j]);
        } 
            j++;
        
    }


 }

 while(i<n){
    if(Union.back()!=arr1[i])
    Union.push_back(arr1[i]);
    i++;
 }
 while(j<m){
    if(Union.back()!=arr2[j])
    Union.push_back(arr2[j]);
    j++;
 }

for (auto & val: Union)
    cout << val << " ";


}
int main(){
    int arr1[]={1,3,5,7};
    int arr2[]={2,4,6};
int n=sizeof(arr1)/sizeof(arr1[0]);
int m=sizeof(arr2)/sizeof(arr2[0]);
    optimizedFindUnion(arr1,arr2,n,m);
}