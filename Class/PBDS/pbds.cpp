#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    pbds<int> p;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        p.insert(x);
    }

    int x = p.order_of_key(4); // x theke choto koita value ache
    cout << x << '\n';

    auto it = p.find_by_order(5); // x th index e kon value ache
    cout << *it << '\n';

    for (auto val : p) {
        cout << val << " ";
    }
    
    return 0;
}