#include <bits/stdc++.h>
 
using namespace std;
using vi = vector<int>;
 
void solve() {
    int n, k;
    cin>>n>>k;
    vi arr(n);
    for (int i = 0; i < n; i++){
        cin>> arr[i];
    }
    bool flag=false;
    for (int i: arr){
        if (i ==k){
            cout<<"YES"<<"\n";
            flag=true;
            break;
        }
    }
    if (!flag) cout<<"NO"<<"\n";
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