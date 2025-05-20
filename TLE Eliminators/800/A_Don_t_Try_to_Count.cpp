#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int m,n;
    cin>>m>>n;
    string x,s;
    cin>>x>>s;

    bool flag=false;// This needs 5 operations to be checked, so starting from the 0th operation, if it satisifies from the start, it is needed to check from 0th till 5, till it gets to 2^5, for more proof, see the proof in the folder.
    for (int ops=0;ops<6;ops++){
        if(x.find(s)!= string::npos){
            cout<<ops<<"\n";
            flag=true;
            break;
        }
        x.append(x);
    }
    if (!flag)cout<<-1<<"\n";
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

