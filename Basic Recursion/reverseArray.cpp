#include <bits/stdc++.h>
using namespace std;
vector<int> reverseArray(int n, vector<int> &nums)
{
    int start = 0;
    int end = nums.size() - 1;
    while (start <= end)
    {
        swap(nums[start++], nums[end--]);
    }
    return nums;
}
int main()
{
    vector<int> res = {1, 2, 3, 4, 5};
    res = reverseArray(5, res);
    for (auto i : res)
    {
        cout << i << " ";
    }
}