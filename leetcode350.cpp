#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    unordered_map<int, int> mp;
    vector<int> ans;

    for (int num : nums1) {
        mp[num]++;
    }

    for (int num : nums2) {
        if (mp[num] > 0) {
            ans.push_back(num);
            mp[num]--;
        }
    }

    for (int num : ans) {
        cout << num << " ";
    }

    return 0;
}