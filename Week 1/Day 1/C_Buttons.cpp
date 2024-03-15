#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    int x1 = (a + (a-1));
    int x2 = (b + (b-1));
    int x3 = (a + b);

    int x = max(x1, x2);

    cout << max(x, x3) << '\n';

    return 0;
}