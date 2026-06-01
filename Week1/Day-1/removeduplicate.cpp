#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int n= nums.size();
    set<int>s;
    for(int i =0 ; i<n ; i++){
        s.insert(nums[i]);
    }
    int i = 0;
    for (int num : s){
        nums[i]= num;
        i++;
    }
    return s.size();
}

int main(){
    vector<int>nums = {0,0,1,1,1,2,2,3,3,4};
    int ans = removeDuplicates(nums);
    cout<<ans<<endl;
    return 0;
}
