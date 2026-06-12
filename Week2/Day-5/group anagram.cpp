#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;

    for (string &s : strs) {
        vector<int> cnt(26, 0);

        for (char c : s) {
            cnt[c - 'a']++;
        }

        string key = "";
        for (int x : cnt) {
            key += to_string(x) + "#";
        }

        mp[key].push_back(s);
    }

    vector<vector<string>> ans;

    for (auto &p : mp) {
        ans.push_back(p.second);
    }

    return ans;
}

int main(){
    vector<string>str = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>>ans= groupAnagrams(str);
    for(int i=0;i<ans.size();i++){
        for(int j =0; j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}