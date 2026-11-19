//Given a positive integer n, return the smallest positive
// integer that is a multiple of both 2 and n.
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 == 0)
        cout << n;
    else
        cout << n * 2;

    return 0;
}

// Time Complexity: O(1)
// Space Complexity: O(1)