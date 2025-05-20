#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Here is the compile-time error: "undefined_variable" is not declared anywhere
        cout << undefined_variable << endl; // This will cause a compile-time error

        // You can also intentionally cause errors like missing return types, bad loops, etc.
        // For example, an incorrect type here would trigger a compile-time error:
        // vector<int> nums;
        // nums.push_back("text"); // Type mismatch, since it is an integer vector
    }

    return 0;
}
