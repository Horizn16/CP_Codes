#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n ;
    cin >> n ;
    
    vi arr(n-1);
    for (int i = 0; i < n-1; i++) {
        cin >> arr[i];
    }
    // I guess the total sum ==0, so this has to be the answer
    int res=0;
    for (int i = 0; i < n-1; i++) {
        res=res + arr[i];
    }
    cout<<-1*res<<"\n";
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