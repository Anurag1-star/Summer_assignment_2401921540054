#include<bits/stdc++.h>
using namespace std;


    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            if(tokens[i]=="+"){
                int second = st.top();
                st.pop();
                int first = st.top();
                st.pop();
                cout<<first+second<<endl;
                st.push(first+second);
            }
            else if(tokens[i]=="-"){
                int second = st.top();
                st.pop();
                int first = st.top();
                st.pop();
                st.push(first-second);
            }
             else if(tokens[i]=="*"){
                int second = st.top();
                st.pop();
                int first = st.top();
                st.pop();
                st.push(first*second);
            }
             else if(tokens[i]=="/"){
                int second = st.top();
                st.pop();
                int first = st.top();
                st.pop();
                st.push(first/second);
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }

int main(){
    vector<string> tokens = {"2","1","+","3","*"};
    cout<<evalRPN(tokens);
}