#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, t;
    cin >> a >> b >> t;

    int biscuit = 0;
    int time = a;

    while (time <= (t + 0.5)) {
        time += a;
        biscuit += b;
    }

    cout << biscuit << '\n';

    return 0;
}