#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    long long n , k , x;
    cin >> n >> k >> x;
    
    // The x should lie between the first k nat numbers and the sum of last k numbers 
    long long low=(k*(k+1))/2;
    long long  high=(n*(n+1)/2)-((n-k)*(n-k+1)/2);
    if (x >= low && x<=high) cout <<"YES"<<"\n";
    else cout<<"NO"<<"\n";
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