#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
        string str = "";
        int n = strs.size();
        for(int j =0; j<strs[0].size();j++){
            for(int i =1;i<n-1;i++){
                if(strs[i][j]!=strs[i+1][j]){
                    return str;
                }
            }
            str += strs[0][j];
        }
        return str;
}
int main(){
    vector<string>v = {"flower","flow","flight"};
    string ans = longestCommonPrefix(v);
    cout<<ans<<endl;
}