#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long k, n, w;
    cin >> k >> n >> w;
    long long sum = 0;

    for (long i = 0; i <= w; i++)
    {
        sum += i * k;
    }
        sum = sum - n;
    if (sum <= 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << sum << endl;
    }
    return 0;
}