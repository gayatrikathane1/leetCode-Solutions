
#include <iostream>
#include <vector>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++) {
        int count = 0;

        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] < nums[i]) {
                count++;
            }
        }

        ans.push_back(count);
    }

    return ans;
}

int main() {
    vector<int> nums = {8, 1, 2, 2, 3};

    vector<int> ans = smallerNumbersThanCurrent(nums);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}
