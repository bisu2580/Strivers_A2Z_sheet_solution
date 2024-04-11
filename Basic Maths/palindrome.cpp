#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int n)
{
    if (n < 0)
        return false;
    int num = n;
    int rev = 0;
    while (num)
    {
        int rem = num % 10;
        if (rev >= (INT_MAX / 10) || rev <= (INT_MIN / 10))
            return 0;
        rev = rev * 10 + rem;
        num /= 10;
    }
    return (rev == n);
}
int main()
{
    int n = 282828;
    cout << isPalindrome(n);
}