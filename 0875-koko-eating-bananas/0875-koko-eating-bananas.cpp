class Solution {
public:
    int findMax(vector<int>& piles) {
        int maxi = INT_MIN;

        for (int i = 0; i < piles.size(); i++) {
            maxi = max(piles[i], maxi);
        }
        return maxi;
    }
    long long calculateToHour(vector<int>& piles, int mid) {
        long long hour=0;

        for (int i = 0; i < piles.size(); i++) {
            hour += ceil((double)(piles[i]) / (double)(mid));
        }
        return hour;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1;
        int end = findMax(piles);
int ans=0;
        while (start <= end) {
            int mid =start +(end-start)/ 2;
            long long hour = calculateToHour(piles,mid);
          
            if (hour<=h) {
                ans=mid;
                end = mid-1;
            } else {
                start = mid + 1;
            }
        }
        return start;
    }
};