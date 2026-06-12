#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    string ans = "";
    stringstream ss(s);
    string temp = "";
    while(ss>>temp){
        reverse(temp.begin(),temp.end());
        ans += temp+" ";
    }
    return ans.substr(0,ans.size()-1);
}

int main(){
    string str = "Let's take LeetCode contest";
    cout<<reverseWords(str)<<endl;
}