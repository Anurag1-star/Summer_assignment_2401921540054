#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int idx = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            swap(nums[i],nums[idx++]);
        }
    }
}
int main(){
    vector<int>nums = {0,1,0,3,12};
    moveZeroes(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<endl;
    }
}