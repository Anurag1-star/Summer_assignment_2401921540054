#include<bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& nums) {
        int maxsum = INT_MIN;
        int currsum = 0;
        for(int i=0;i<nums.size();i++){
            currsum += nums[i];
            maxsum = max(maxsum,currsum);
            if(currsum<0){
                currsum = 0;
            }
        }
        return maxsum;
    }
int main(){
    vector<int>nums = {-2,1,-3,4,-1,2,1,-5,4};
    int ans = maxSubArray(nums);
    cout<<ans<<endl;
    return 0;
}