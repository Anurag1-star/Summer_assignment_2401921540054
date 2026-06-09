#include<bits/stdc++.h>
using namespace std;
bool allzero(vector<int>&v){
    for(int i=0; i<v.size();i++){
        if(v[i]==0){
            continue;
        }
        else{
            return false;
            break;
        }
    }
    return true;
}
bool checkInclusion(string s1, string s2) {
    int m = s1.size();
    int n = s2.size();
    if(m>n) return false;
    vector<int>v1(26,0);
    for(int i =0; i<s1.size();i++){
        v1[s1[i]-'a'] += 1;
    }

    for(int i =0; i<s1.size();i++){
            v1[s2[i]-'a'] -= 1; 
    }
    int i = 0;
    int j = s1.size()-1;
    while(j<n){
        if(allzero(v1)) return true;
        else{
            j++;
            if(j < n){
            v1[s2[j]-'a']--;
            v1[s2[i]-'a']++;
            i++;
            }            
        }
    }
    return false;
}
int main(){
    string s= "ab";
    string s1 = "eidbaooo";
    cout<<checkInclusion(s,s1)<<endl;
}
