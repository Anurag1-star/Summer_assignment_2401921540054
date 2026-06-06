#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    string str1 = "";
    
    for (int i = 0; i < s.size(); i++) {
        if (isalnum(s[i])) {
            str1 +=tolower(s[i]);
        }
    }

    string str2 = str1;
    reverse(str2.begin(), str2.end());
    return str1 == str2;
}


int main(){
    string str = "A man, a plan, a canal: Panama";
    bool check = isPalindrome(str);
    cout<<check<<endl;
}