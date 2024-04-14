#include <bits/stdc++.h>
using namespace std;
long long sumFirstN(long long n)
{
    long long sum = ((n * (n - 1)) / 2);
    return sum;
}
int main()
{
    cout << sumFirstN(437);
}