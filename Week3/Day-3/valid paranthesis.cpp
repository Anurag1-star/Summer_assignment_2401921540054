#include<bits/stdc++.h>
using namespace std;
bool isValid(string str) {
    stack<char> st;
    for (char c : str) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            if (st.empty()) return false;
            char top = st.top();
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}


int main(){
    string str = "()[]{}";
    cout<<isValid(str)<<endl;
}