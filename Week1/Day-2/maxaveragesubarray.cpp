#include<bits/stdc++.h>
using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
        int i = 0, j = 0;
        int n = nums.size();
        int currsum = 0;
        for(j = 0; j < k; j++){
            currsum += nums[j];
        }
        int maxsum = currsum;
        while(j < n){
            currsum = currsum + nums[j++] - nums[i++];
            maxsum = max(maxsum, currsum);
        }
        return (double)maxsum / k;
    }

int main(){
    vector<int>nums = {1,12,-5,-6,50,3};
    int k = 4;
    double ans = findMaxAverage(nums,k);
    cout<<ans<<endl;
    return 0;
}