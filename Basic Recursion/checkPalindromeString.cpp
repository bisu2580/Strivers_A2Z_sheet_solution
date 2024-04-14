#include <bits/stdc++.h>
using namespace std;
bool solve(int start, int end, string &st)
{
    if (start > end)
        return true;
    if (st[start] != st[end])
        return false;
    return solve(++start, --end, st);
}
bool isPalindrome(string &str)
{
    int start = 0;
    int end = str.size() - 1;
    return solve(start, end, str);
}
int main()
{
    string str = "abcdcba";
    cout << isPalindrome(str) << endl;
}