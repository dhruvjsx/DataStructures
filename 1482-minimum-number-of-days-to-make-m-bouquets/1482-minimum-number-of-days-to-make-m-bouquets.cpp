class Solution {
public:
    int possible(vector<int>& bloomDay, int day, int m, int k) {
        int count = 0, noOfB = 0;
        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= day) {
                count++;
            } else {
                noOfB += (count / k);
                count = 0;
            }
        }
            noOfB += (count / k);

            return noOfB >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
long long val = m * 1ll * k * 1ll;
        int mini = INT_MAX, maxi = INT_MIN;
        for (int i = 0; i < bloomDay.size(); i++) {
            mini = min(mini, bloomDay[i]);
            maxi = max(maxi, bloomDay[i]);
        }
        if (val > bloomDay.size()) return -1;

        int start = mini;
        int end = maxi;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (possible(bloomDay, mid, m, k)) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return start;
    }
};