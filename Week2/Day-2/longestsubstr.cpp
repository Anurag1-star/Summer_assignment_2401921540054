#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string str) {
    unordered_set<char> s;
    int n = str.size();
    int i = 0, j = 0;
    int maxlen = 0;

    while (j < n) {
        if (s.find(str[j]) != s.end()) {
            s.erase(str[i]); 
            i++;             
        } else {
            s.insert(str[j]);
            maxlen = max(maxlen, j - i + 1); 
            j++;
        }
    }
    return maxlen;
}
int main(){
    string s = "abcabcbb";
    int ans = lengthOfLongestSubstring(s);
    cout<<ans<<endl;

}