#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int buyprice = INT_MAX;
    int max_profit = 0;
    for(int i =0 ; i<prices.size();i++){
        if(prices[i]>buyprice){
            int profit = prices[i] - buyprice;
            max_profit = max(profit,max_profit);
        }
        else{
            buyprice = prices[i];
        }
    }
    return max_profit;
}
int main(){
    vector<int>prices = {7,1,5,3,6,4};
    int profit = maxProfit(prices);
    cout<<profit<<endl;
    return 0;
}