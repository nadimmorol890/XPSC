#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll getNumber(ll y, ll x) {
    ll maxVal = max(y, x);
    ll diagonalValue = maxVal * maxVal - maxVal + 1;
    
    if (maxVal % 2 == 0) {
        if (x > y) {
            return diagonalValue - (x - y);
        } 
        else {
            return diagonalValue + (y - x);
        }
    } 
    else {
        if (x > y) {
            return diagonalValue + (x - y);
        } 
        else {
            return diagonalValue - (y - x);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll y, x;
        cin >> y >> x;

        cout << getNumber(y, x) << '\n';
    }
    
    return 0;
}