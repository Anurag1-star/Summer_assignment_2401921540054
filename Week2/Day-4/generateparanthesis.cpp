#include<bits/stdc++.h>
using namespace std;

void generate(vector<string>&ans,string str,int open , int close,int len){
    if(close == len){
        ans.push_back(str);
        return;
        }
        if(open<len) generate(ans,str+'(',open+1,close,len);
        if(close<open) generate(ans,str+')',open,close+1,len);   
}
vector<string> generateParenthesis(int n) {
    vector<string>ans;
    generate(ans,"",0,0,n);
    return ans;
}

int main(){
    int n = 3;
    vector<string>ans = generateParenthesis(n);
    
}
