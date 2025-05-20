#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n =10;
    // cin >> n;
    // This needs some math, and some stuff relating to the square-ring . Now the k is the number of rings , calculated form (n+1)/2 and the minimum ring is the min(i,j,n-1-i, n-1-j). and the score is just the r+1
    int res=0;
    for (int i = 0; i < n; i++) {
        for (int j=0 ; j<n ;j++){
            char ch;
            cin >> ch;
            if (ch=='X'){
                int r = min({i, j, n - 1 - i, n - 1 - j});
                res+=(r+1);
            }
        }
    }
    cout<<res<<"\n";
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
