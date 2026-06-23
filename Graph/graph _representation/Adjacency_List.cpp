#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the number of node:- ";
    cin>>n;
    cout<<"enter the number of edge:- ";
    cin>>m;
    vector<vector<int>>ans(n+1);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        ans[u].push_back(v);
        ans[v].push_back(u);
    }
    for(int i=1;i<=n;i++){
        cout<<i<<" -> ";
        for(int x: ans[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;

}


