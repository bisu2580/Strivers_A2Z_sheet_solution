#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    bool flag = true;
    if (n == 1 || n == 0)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}
int main()
{
    cout << isPrime(4);
}