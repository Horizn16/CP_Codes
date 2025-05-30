#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
#define ll long long

bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }

void solve() {
    int n ;
    cin >> n ;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (even(n)){
        cout<<2<<"\n";
        cout<<1<<" "<<n<<"\n";
        cout<<1<<" "<<n<<"\n";
    }else{
        cout<<4<<"\n";// Even subsegment
        cout<<1<<" "<<n-1<<"\n";
        cout<<1<<" "<<n-1<<"\n";
        cout<<n-1<<" "<<n<<"\n";
        cout<<n-1<<" "<<n<<"\n";
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