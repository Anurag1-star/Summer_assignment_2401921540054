#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>>ans(r,vector<int>(c));
        vector<int>temp;
        if(n*m!=r*c) return mat;
        for(int i=0;i<n;i++){
            for(int j =0 ;j<m;j++){
                temp.push_back(mat[i][j]);
            }
        }
        int i = 0;
        for(int j = 0;j<r;j++){
            for(int k = 0; k<c;k++){
                ans[j][k] = temp[i++];
            }
        }
        return ans;
    }
int main(){
    vector<vector<int>>mat = {{1,2},{3,4}};
    int r = 1;
    int c = 4;
    vector<vector<int>>ans = matrixReshape(mat,r,c);
    for(int i=0;i<r;i++){
        for(int j = 0; j<c; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}