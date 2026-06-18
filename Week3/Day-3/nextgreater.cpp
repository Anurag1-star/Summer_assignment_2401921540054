#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    int n = nums2.size();
    vector<int>ans;
    unordered_map<int,int>mp;
    stack<int>st;
    mp[nums2[n-1]] = -1;
    st.push(nums2[n-1]);
    for(int i = nums2.size()-2; i>=0;i--){
        while( st.size()!=0 && st.top()<=nums2[i]){
            st.pop();
        }
        if(st.empty()) mp[nums2[i]] = -1;
        else mp[nums2[i]] = st.top();
        st.push(nums2[i]);
    }
    for(int i= 0 ;i <nums1.size();i++){
        if(mp.find(nums1[i])!=mp.end()){
            ans.push_back(mp[nums1[i]]);
        }
    }
    return ans;
}

    int main(){
        vector<int>nums1 = {4,1,2};
        vector<int>nums2 = {1,3,4,2};
        vector<int>ans = nextGreaterElement(nums1,nums2);
        for(int el:ans){
            cout<<el<<" ";
        }
    }