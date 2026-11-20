//Given two integers, num and t. A number x is achievable if it can become equal to num after applying the following operation at most t times:

#include <iostream>
using namespace std;

int main() {
    int num, t;
    cin >> num >> t;

    int ans = num + 2 * t;

    cout << ans;

    return 0;
}
//Time Complexity: O(1)
//Space Complexity: O(1)