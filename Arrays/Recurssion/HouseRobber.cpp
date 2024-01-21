#include<bits/stdc++.h>
using namespace std;
int recurssion(vector<int>&nums, int index){
    if(index>=nums.size()){
        return 0;
    }

    int option1=nums[index]+recurssion(nums,index+2);
    int option2=0+recurssion(nums,index+1);

    int res=max(option1,option2);
    return res;
}


    int rob(vector<int>& nums) {
        int index=0;
       return recurssion(nums,index);

        
    }

int main(){
    vector<int>nums={1,2,3,1};
   cout<< rob(nums);

}