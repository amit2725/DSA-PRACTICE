#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m; // n node, m edge:-
    cout << "enter the total number of node";
    cin >> n;
    cout << "enter the number of edges";
    cin >> m;
   vector<vector<int>> ans(n + 1, vector<int>(n + 1, 0));
    cout << "enter the connected edge";
    for (int i = 0; i < m; i++)
    {
        int p, q;
        cin >> p >> q;
        ans[p][q] = 1;
        ans[q][p] = 1;
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {   
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
