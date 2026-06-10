#include<bits/stdc++.h>
using namespace std;

    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        int n = s.size();
        int m = p.size();

        if (m > n) return ans;

        vector<int> pCount(26, 0);
        vector<int> winCount(26, 0);

        for (char ch : p)
            pCount[ch - 'a']++;

        for (int i = 0; i < m; i++)
            winCount[s[i] - 'a']++;

        if (pCount == winCount)
            ans.push_back(0);

        for (int i = m; i < n; i++) {
            winCount[s[i] - 'a']++;          
            winCount[s[i - m] - 'a']--;      

            if (pCount == winCount)
                ans.push_back(i - m + 1);
        }

        return ans;
    }

int main(){
    string s = "cbaebabacd";
    string p = "abc";
    vector<int>ans = findAnagrams(s,p);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}