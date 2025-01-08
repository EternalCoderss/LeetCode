//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
    {
        // code here
        
        int dx1[8]={-1,-1,-1,0,0,1,1,1};
        int dy1[8]={-1,1,0,-1,1,-1,1,0};
        int dx2[16]={-2,-2,-2,-2,-2,-1,-1,0,0,1,1,2,2,2,2,2};
        int dy2[16]={-2,-1,0,1,2,-2,2,-2,2,-2,2,-2,-1,0,1,2};
        
        vector<int>ans;
        for(int i=0;i<q;i++){
            vector<int>v=queries[i];
            int sum=0;
            if(v[0]==1){
                for(int i=0;i<8;i++){
                    int nx=dx1[i]+v[1];
                    int ny=dy1[i]+v[2];
                    if(nx>=0 and nx<n and ny>=0 and ny<m)sum+=mat[nx][ny];
                }
            }else{
                for(int i=0;i<16;i++){
                    int nx=dx2[i]+v[1];
                    int ny=dy2[i]+v[2];
                    if(nx>=0 and nx<n and ny>=0 and ny<m)sum+=mat[nx][ny];
                }
            }
            ans.push_back(sum);
        }
        
        return ans;

    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, q, ty, i, j;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++)
            for(int j = 0;j < m;j++)
                cin>>mat[i][j];
        cin>>q;
        vector<int> queries[q];
        for(int k = 0;k < q;k++){
            cin>>ty>>i>>j;
            queries[k].push_back(ty);
            queries[k].push_back(i);
            queries[k].push_back(j);
        }
        
        Solution ob;
        vector<int> ans = ob.matrixSum(n, m, mat, q, queries);
        for(int u: ans)
            cout<<u<<"\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends