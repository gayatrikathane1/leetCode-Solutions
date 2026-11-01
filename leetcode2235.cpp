#include <iostream>
using namespace std;

class Solution {
public:
    int sum(int num1, int num2) {
        int sum = num1 + num2;
        return sum;
    }
};

int main() {
    Solution obj;

    cout << obj.sum(10, 20);

    return 0;
}

