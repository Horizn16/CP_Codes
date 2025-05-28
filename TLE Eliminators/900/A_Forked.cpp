#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int a, b ;
    cin >> a >> b ;
    int x_k, y_k, x_q, y_q;
    cin>> x_k >> y_k;
    cin>> x_q >>y_q;
    
    vector<pair<int,int>> dirs;
    dirs = {{a,b},{a,-b},{-a,b},{-a,-b},{b,a},{b,-a},{-b,a},{-b,-a}};

    set<pair<int, int>> st1, st2;
    for (auto i: dirs){
        int x= x_k+i.first;
        int y= y_k +i.second;
        st1.insert({x,y});

        x= x_q+i.first;
        y= y_q +i.second;
        st2.insert({x,y});
        }
    int res=0;
    for (auto i: st1){
        if (st2.find(i)!=st2.end()){
            res++;
        }
    }
    cout<<res<<"\n";
    
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