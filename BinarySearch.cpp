#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int k;
    cin >> k;
    vector<int> p{2, 4, 6, 1, 5, 8, 9, 0, 3, 12, 34, 23, 54, 65};
    sort(p.begin(), p.end());
    int s = 0;
    int ans;
    int e = p.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (p[mid] == k)
        {
            ans = mid;
            s = mid + 1;
        }
        if (p[mid] < k)
        {
            e = mid - 1;
        }
        if (p[mid] > k)
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    cout << ans;

    return 0;
}
