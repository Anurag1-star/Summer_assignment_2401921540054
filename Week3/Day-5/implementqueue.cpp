#include<bits/stdc++.h>
using namespace std;
class MyQueue {
public:
    stack<int>s1;
    stack<int>s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        while(!s1.empty()){
            int curr = s1.top();
            s2.push(curr);
            s1.pop();
        }
        int ans = s2.top();
        if(!s2.empty()) s2.pop();
        while(!s2.empty()){
            int curr = s2.top();
            s1.push(curr);
            s2.pop();
        }
        return ans;
    }
    
    int peek() {
        while(!s1.empty()){
            int curr = s1.top();
            s2.push(curr);
           
            s1.pop();
        }
        int ans = s2.top();
        while(!s2.empty()){
            int curr = s2.top();
            s1.push(curr);
            s2.pop();
        }
        return ans;
    }
    
    bool empty() {
        return s1.size()==0;
    }
};
