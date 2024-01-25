class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int ,int>map;
        int majorityCondition=(nums.size()/3)+1;
        vector<int>ans;

    for(auto i: nums){
        map[i]++;

        if(map[i]==majorityCondition){
            ans.push_back(i);
        }
        if(ans.size()==2){
            break;
        }

    }
return ans;


    }
};