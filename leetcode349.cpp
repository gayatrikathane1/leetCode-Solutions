
#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    set<int> s;

    for(int i = 0; i < nums1.size(); i++) {
        for(int j = 0; j < nums2.size(); j++) {
            if(nums1[i] == nums2[j]) {
                s.insert(nums1[i]);
            }
        }
    }

    for(int x : s) {
        cout << x << " ";
    }

    return 0;
}
