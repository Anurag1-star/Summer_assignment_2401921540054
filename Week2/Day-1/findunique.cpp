#include<bits/stdc++.h>
using namespace std;
int firstUniqChar(string s) {
    unordered_map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    for(int i=0;i<s.size();i++){
        if(mp.find(s[i])!=mp.end()){
            if(mp[s[i]]==1){
                return i;
            }
        }
    }
    return -1;
}

int main(){
    string s = "leetcode";
    int idx = firstUniqChar(s);
    cout<<idx<<endl;
    return 0;
}