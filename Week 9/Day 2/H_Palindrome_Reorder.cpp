#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    int oddCount = 0;
    char oddChar = 0;

    for (auto it : freq) {
        if (it.second % 2 == 1) {
            oddCount++;
            oddChar = it.first;
        }
    }

    if (oddCount > 1) {
        cout << "NO SOLUTION" << '\n';
        return 0;
    }

    string firstHalf = "";
    string secondHalf = "";
    string ans = "";

    for (auto it : freq) {
        for (int i = 0; i < it.second / 2; i++) {
            firstHalf.push_back(it.first);
        }
    }
    
    secondHalf = firstHalf;
    reverse(secondHalf.begin(), secondHalf.end());

    ans += firstHalf;
    if (oddCount > 0) {
        ans += oddChar;
    }
    ans += secondHalf;

    cout << ans << '\n';

    return 0;
}