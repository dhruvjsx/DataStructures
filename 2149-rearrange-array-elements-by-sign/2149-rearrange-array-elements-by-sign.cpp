class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
int posIndex=0;
int negIndex=1;
        for(int num=0; num<nums.size(); num++){
            if(nums[num]>0){
                ans[posIndex]=nums[num];
                posIndex+=2;
            }else{
                ans[negIndex]=nums[num];
                negIndex+=2;
            }
        }
        return ans;
    }
};