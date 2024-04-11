#include <iostream>
using namespace std;
int countDigits(int n)
{
    int num = n;
    int count = 0;
    while (num)
    {
        int rem = num % 10;
        if (rem == 0)
        {
            num /= 10;
            continue;
        }
        if (((n % rem) == 0))
            count++;
        num /= 10;
    }
    return count;
}
int main()
{
    int num = 660;
    cout << countDigits(num);
    return 0;
}