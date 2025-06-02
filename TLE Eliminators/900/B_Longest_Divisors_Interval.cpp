#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    unsigned long long n ;
    cin >> n ;
    // int res=0;
    // int temp=0;
    // for ( int i=1; i < 40; i++){
    //     if ( n % i ==0){
    //         temp++;
    //         res=max(res,temp);
    //     }else{
    //         temp=0;
    //     }
    // }
    // cout<<res<<"\n"; // This ignores that higher numbers can also be present
    int x=1;
    while(true){
        x++;// This will increment till x no longer difices
        if (n%x){
            break;
        }
    }
    cout<<x-1<<"\n";
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