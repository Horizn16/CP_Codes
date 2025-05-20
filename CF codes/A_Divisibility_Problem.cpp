#include <bits/stdc++.h>

using namespace std;
// using vi = vector<int>;

void solve() {
    long long int a,b,c;
    cin>>a>>b;
    c=(b-(a%b))%b; // The %b is to be added at the end so that if the a%b ==0 then the stuff as whole has to be0
    cout<<c<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    long long int t;// use them if the test cases are more than 1, else remove the while
    cin >> t;
    while (t--) solve();
}