#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime(int n) {
    if (n == 1) return false;
    
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, ans;
    cin >> n;

    if (isPrime(n)) {
        ans = 1;
    }
    else if (n % 2 == 0) {
        ans = 2;
    }
    else if (n % 2 == 1) {
        if (isPrime(n-2)) {
            ans = 2;
        }
        else {
            ans = 3;
        }
    }

    cout << ans << '\n';
    
    return 0;
}