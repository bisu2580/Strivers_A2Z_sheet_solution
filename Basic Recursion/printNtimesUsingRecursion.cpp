#include <bits/stdc++.h>
using namespace std;
void solve(vector<string> &ans, int n)
{
    if (n == 0)
        return;
    ans.push_back("Coding Ninjas ");
    solve(ans, n - 1);
}
vector<string> printNTimes(int n)
{
    vector<string> ans;
    solve(ans, n);
    return ans;
}
int main()
{
    vector<string> res = printNTimes(5);
    for (auto i : res)
        cout << i << endl;
    return 0;
}