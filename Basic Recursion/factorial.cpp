#include <bits/stdc++.h>
using namespace std;
long long fact(long long n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}
vector<long long> factorialNumbers(long long n)
{
    vector<long long> ans;
    for (long long i = 1; i <= n; i++)
    {
        long long num = fact(i);
        if (num > n)
            break;
        ans.push_back(num);
    }
    return ans;
}
int main()
{
    vector<long long> ans = factorialNumbers(50);
    cout << "The numbers are : ";
    for (auto x : ans)
        cout << x << " ";
    cout << endl;
    return 0;
}