#include <bits/stdc++.h>
using namespace std;
int sumOfAllDivisors(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        count += (n / i) * i;
    }
    return count;
}
int main()
{
    cout << sumOfAllDivisors(5);
}