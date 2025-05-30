#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n ,k;
    cin >> n >> k ;
    string s;
    cin>> s;
    // If k < odd freq -1, then cannot make palindrome
    // If k> no . of odd freq, then convert all odds to even , then the remaining even, if k-odds is even, no issue, if odd, then it is represented as 2*x+1, so no issue again, can have atleast 1 odd
    map <char,int> mp;
    for (auto ch:s){
        mp[ch]++;
    }
    int odds=0;
    for (auto i: mp){
        if ((i.second)&1)
            odds++;
    }
    if (k<odds-1) cout<< "NO"<<"\n";
    else cout<<"YES"<<"\n";
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
