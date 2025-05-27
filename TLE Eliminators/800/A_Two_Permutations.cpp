#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n , a , b ;
    cin >> n >> a >> b;
    
    // If a+b>=n-1, then p and q will be same, since the matching will overlap, so this works if n=a=b
    if (a+b>=n-1){
        if (a==n && b==n){
            cout<<"Yes"<<"\n";
        }else{
            cout<<"No"<<"\n";
        }
    }else{
        cout<<"Yes"<<"\n";
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