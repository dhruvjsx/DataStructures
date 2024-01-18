// Optimized technique to find prime number for given range. mark vector[0 ] and 1 position with false and  all other with true . start from two and makr all mulitple of two with zero exectpt  two. similary follow this at the end all the primem number will be true.

// To optimize this techniuqe  we were mulitplying j=i*2 which can be replaced with j=i*i; because earlyar we were marking mulitple of two muliple time as false 

// Run the Outer Loop for root n time as all the number will be marked as false from first root n multiple


#include<iostream>
using namespace std;
#include<bits/stdc++.h>
vector<bool> sieve(int n){
  vector <bool>ans(n,true);
ans[0]=ans[1]=false;
  for(int i=2; i<sqrt(n); i++){
      if(ans[i]==true){
        // int j=i*2;
        int j= i*i;
        while(j<n){
          ans[j]=false;
          j=j+i;
        }
      }
  }
      return ans;
}

int main(){
  int n=25;
  
  vector<bool>Sieve=sieve(n);
for(int i=0; i<n; i++){
  if(Sieve[i]==true){
    cout<<i<<" ";
  }
}
  
}