#include<bits/stdc++.h>
class Solution {
public:
    int findMax(vector<int>& piles) {
        int maxi = INT_MIN;
        int n = piles.size();
        for (int i = 0; i <n; i++) {
            maxi = max(maxi, piles[i]);
        }
        return maxi;
    }

    long long calculate_total_hours(vector<int>& piles, int k) {
        long long  totalh = 0;
        int n = piles.size();
        for (int i = 0; i < n; i++) {
            totalh += (long long )ceil((double)piles[i]/(double)k);
        }
        return totalh;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = findMax(piles);
        while (low <= high) {
            int mid = low + (high-low) / 2;
            long long totalh = calculate_total_hours(piles, mid);
            if (totalh <= h) {
                high = mid - 1;

            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
