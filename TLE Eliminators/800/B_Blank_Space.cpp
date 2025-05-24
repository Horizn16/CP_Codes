#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int res = 0, temp = 0;// res is the max len and temp is the zero counts
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            temp++;
            res = max(res, temp);
        } else {
            temp = 0;
        }
    }
    cout << res << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    long long int t; // use them if the test cases are more than 1, else remove the while
    cin >> t;
    while (t--) solve();
}