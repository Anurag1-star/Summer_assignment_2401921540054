#include<bits/stdc++.h>
using namespace std;
 int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int maxwater = INT_MIN;
        while(i<j){
            int w = j-i;
            int ht = min(height[i],height[j]);
            int currwater = w * ht;
            maxwater = max(maxwater,currwater);
            if(height[i]>height[j]){
                j--;
            }
            else i++;
        }
        return maxwater;
    }

int main(){
    vector<int>height = {1,8,6,2,5,4,8,3,7};
    int ans = maxArea(height);
    cout<<ans<<endl;
}
