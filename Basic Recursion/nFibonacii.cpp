#include <bits/stdc++.h>
using namespace std;
vector<int> generateFibonacciNumbers(int n)
{
    vector<int> ans(n);
    ans[0] = 0;
    ans[1] = 1;
    for (int i = 2; i < n; i++)
    {
        ans[i] = ans[i - 1] + ans[i - 2];
    }
    return ans;
}
int main()
{
    vector<int> ans = generateFibonacciNumbers(4);
    for (auto i : ans)
    {
        cout << i << " ";
    }
}