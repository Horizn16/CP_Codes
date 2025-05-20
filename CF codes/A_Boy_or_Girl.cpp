#include <bits/stdc++.h>

using namespace std;
// using vi = vector<int>;

void solve() {
    std::string s ;
    cin>>s;
    std::set<char> charset;
    
    for (char i : s){
        charset.insert(i);
    }

    if (charset.size()%2==0){
        cout<<"CHAT WITH HER!"<<"\n";
    }
    else{
        cout<<"IGNORE HIM!"<<"\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // long long int t;// use them if the test cases are more than 1, else remove the while
    // cin >> t;
    // while (t--) 
    solve();
}