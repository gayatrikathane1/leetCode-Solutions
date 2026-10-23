#include <iostream>
#include <vector>
using namespace std;

int main() {
vector<int> nums = {4, 1, 2, 1, 2};

int ans = 0;

for (int i = 0; i < nums.size(); i++) {
    ans = ans ^ nums[i];
}

cout << "Single Number: " << ans;

return 0;

}