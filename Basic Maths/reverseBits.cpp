#include <bits/stdc++.h>
using namespace std;
long reverseBits(long n)
{
    string ans = "";
    long rev = 0;
    for (int i = 1; i <= 32; i++)
    {
        rev = rev << 1;
        if (n & 1)
            rev = rev | 1;
        n = n >> 1;
    }
    return rev;
}
int main()
{
    cout << reverseBits(12);
}