class Solution {
public:

vector<int> twoPtrApproach(vector<int>& arr, int k, int x) {
    int low=0, high=arr.size()-1;
    vector<int>ans;
        while(high-low>=k){
            if(x-arr[low]>arr[high]-x){
                low++;
            }
            else{
                high--;
            }

        }
    for(int i=low; i<=high;i++){
        ans.push_back(arr[i]);
    }
    return ans;
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        return twoPtrApproach(arr,k,x);
    }
};