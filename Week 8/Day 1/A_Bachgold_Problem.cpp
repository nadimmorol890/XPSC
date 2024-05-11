
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int k;
    vector<int> primes;

    if (n % 2 == 0) {
        k = n / 2;
        for (int i = 0; i < k; ++i) {
            primes.push_back(2);
        }
    } else {
        k = (n - 1) / 2;
        primes.push_back(3);
        for (int i = 0; i < k - 1; ++i) {
            primes.push_back(2);
        }
    }

    cout << k << '\n';

    sort(primes.begin(), primes.end());
    
    for (int ans : primes) {
        cout << ans << " ";
    }
    cout << '\n';
    
    return 0;
}
