#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &ans, int n)
{
    if (n == 0)
        return;
    ans.push_back(n);
    solve(ans, n - 1);
}
vector<int> printNos(int x)
{
    vector<int> ans;
    solve(ans, x);
    return ans;
}
int main()
{
    int x = 5;
    cout << "The numbers from " << x << " are: ";
    for (auto i : printNos(x))
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}