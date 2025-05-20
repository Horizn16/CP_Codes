#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int a ,b ,c;
    cin >> a >> b >>c;
    if ( c%2 ==0){
        // Anna has her turn to pick the button, if they have the same button, se will not be able to win.
        if (a> b) cout<<"First"<<"\n";
        else cout<< "Second"<< "\n";
    }else{  
        // Katie has the turn to pick the button
        if (b>a) cout<<"Second"<<"\n";
        else cout<< "First" <<"\n";
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