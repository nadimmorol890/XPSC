#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int freq[26] = {0};

    for (char c : s) {
        freq[c - 'a']++;
    }

    bool flag = true;
    char ans;

    for (int i = 0; i < 26; i++) {
        if(freq[i] == 0) {
            flag = false;
            ans = ('a' + i);
            break;
        }
    }

    if (flag) {
        cout << "None" << '\n';
    }
    else {
        cout << ans << '\n';
    }
    
    return 0;
}