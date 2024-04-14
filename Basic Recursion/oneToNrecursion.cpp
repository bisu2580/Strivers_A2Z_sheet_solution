#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &ans, int n)
{
    if (n == 0)
        return;
    solve(ans, n - 1);
    ans.push_back(n);
}
vector<int> printNos(int x)
{
    vector<int> ans;
    solve(ans, x);
    return ans;
}
int main()
{
    vector<int> ans = printNos(5);
    for (auto i : ans)
        cout << i << " ";
    return 0;
}