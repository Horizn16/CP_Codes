#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n ;
    cin >> n ;
    string s;
    cin>>s;
    // Code here
    int cnt=1;// These are made to 1 , since the edge case of all differnt causes having no same sign continuously, this can be set to 1. And since on comparison of 2 numbers lead to 
    int res=1;
    for (int i=1; i < n; i++){
        if (s[i]==s[i-1]){
            cnt++;
            res=max(res,cnt);
        }else{
            cnt=1;
        }
    }
    cout<<res+1<<"\n";// The one is added since minimize it, so repitions can be done, the total continuous 
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