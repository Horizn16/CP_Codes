#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n ;
    string s ;
    cin >> s ;
    // Here the 0 and 1 could be applied both ways, but not 00 or 11, use two pointers
    int i=0;
    int j=s.size()-1;
    int res=0;
    while (i<j){
        if (s[i]==s[j]) break;
        else{
            res++;
            i++;
            j--;
        }
    }
    cout<<n-2*res<<"\n";
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