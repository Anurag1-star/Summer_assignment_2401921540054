#include<bits/stdc++.h>
using namespace std;
vector<int> sortedSquares(vector<int>& nums) {
    int i = 0;
    int j = nums.size()-1;
    int k = nums.size()-1;
    vector<int>ans(k+1);
    while(i<=j){
        if(nums[i]*nums[i]>=nums[j]*nums[j]){
            ans[k--] = nums[i]*nums[i];
            i++;
        }
        else{
            ans[k--] = nums[j]*nums[j];
            j--;
        }
    }
    return ans;
}

int main(){
    vector<int>nums = {-4,-1,0,3,10};
    vector<int>ans = sortedSquares(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
