#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n ;
    cin >>n;
    string s;
    cin >> s;

    bool f =true;
    int res =0;
    for (int i=0; i<n; i++){
        if (s[i]=='.')res++;
        if (i>0 && i<n-1){
            if (s[i-1]=='.' && s[i]=='.' && s[i+1]=='.'){
                cout<<2<<"\n";
                f=false;
                break;
            }
        }
    }
    if (f){
        cout<<res<<"\n";
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
