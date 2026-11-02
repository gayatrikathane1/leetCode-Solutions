#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
    stack<int> st;
    int n = heights.size();
    int maxi = 0;

    for (int i = 0; i <= n; i++) {
        int h = (i == n) ? 0 : heights[i];

        while (!st.empty() && heights[st.top()] > h) {
            int height = heights[st.top()];
            st.pop();

            int width;
            if (st.empty()) {
                width = i;
            } else {
                width = i - st.top() - 1;
            }

            maxi = max(maxi, height * width);
        }

        if (i < n) {
            st.push(i);
        }
    }

    return maxi;
}

int main() {
    vector<int> heights = {2, 1, 5, 6, 2, 3};

    cout << largestRectangleArea(heights);

    return 0;
}