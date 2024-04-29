#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b;
    cin >> n >> a >> b;

    int max_piece = 0;

    for (int x = 1; x < n; x++) {
        int min_piece_a = a / x;
        int min_piece_b = b / (n-x);

        int min_piece = min(min_piece_a, min_piece_b);

        max_piece = max(max_piece ,min_piece);
    }

    cout << max_piece << '\n';
    
    return 0;
}