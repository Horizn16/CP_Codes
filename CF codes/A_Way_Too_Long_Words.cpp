#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    std::string n;
    cin >> n;
    if (n.length()<=10){
        cout<<n<<"\n";
    }
    else{
        cout<<n[0]<<n.length()-2<<n[n.length()-1]<<"\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long int t;// use them if the test cases are more than 1, else remove the while
    cin >> t;
    while (t--) solve();
}