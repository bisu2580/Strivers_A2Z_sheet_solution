#include <bits/stdc++.h>
using namespace std;
int countDigits(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n /= 10;
    }
    return count;
}
bool checkArmstrong(int n)
{
    int digitCount = countDigits(n);
    int sum_digits = 0;
    int num = n;
    while (num)
    {
        int rem = num % 10;
        int power = pow(rem, digitCount);
        sum_digits += power;
        num /= 10;
    }
    return sum_digits == n;
}
int main()
{
    cout << checkArmstrong(1641);
}