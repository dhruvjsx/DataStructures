class Solution {
public:
int findDays(vector<int>& weights, int mid){
   int days = 1; //First day.
    int load = 0;
    int n = weights.size(); //size of array.
    for (int i = 0; i < n; i++) {
        if (load + weights[i] > mid) {
            days += 1; //move to next day
            load = weights[i]; //load the weight.
        }
        else {
            //load the weight on the same day.
            load += weights[i];
        }
    }
    return days;
}

    int shipWithinDays(vector<int>& weights, int days) {
        int start=INT_MIN,end=0;
        int n=weights.size();
        for(int i=0;i<n; i++){
            end+=weights[i];
            start=max(start,weights[i]);
        }

        while(start<=end){
            int mid=start+(end-start)/2;
        int numberOfDays = findDays(weights, mid);

            if(numberOfDays<=days){
                    end=mid-1;
            }else{
                    start=mid+1;
            }
        }
        return start;
    }
};