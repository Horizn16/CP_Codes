#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int x, k;
    cin >> x >> k;
    if ( x%k !=0){
        cout<<1<<"\n";
        cout<<x<<"\n";
    }else{
        // x is div by k, then x-1 will not be div by k
        cout<<2<<"\n";
        cout<<x-1<<" " <<1<<"\n";
    }
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