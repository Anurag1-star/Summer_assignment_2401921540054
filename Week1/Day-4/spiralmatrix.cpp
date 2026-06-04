#include<bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;
    int n = matrix.size();
    int m = matrix[0].size();

    int minr = 0, minc = 0;
    int maxr = n - 1, maxc = m - 1;

    while (minr <= maxr && minc <= maxc) {
        for (int j = minc; j <= maxc; j++) {
            ans.push_back(matrix[minr][j]);
        }
        minr++;
        for (int i = minr; i <= maxr; i++) {
            ans.push_back(matrix[i][maxc]);
        }
        maxc--;
        if (minr <= maxr) {
            for (int j = maxc; j >= minc; j--) {
                ans.push_back(matrix[maxr][j]);
            }
            maxr--;
        }
        if (minc <= maxc) {
            for (int i = maxr; i >= minr; i--) {
                ans.push_back(matrix[i][minc]);
            }
            minc++;
        }
    }
    return ans;
}
int main(){
    vector<vector<int>>matrix ={{1,2,3},{4,5,6},{7,8,9}};
    vector<int>ans = spiralOrder(matrix);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}