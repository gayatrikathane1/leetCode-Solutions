//You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ 
//customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.

//A customer's wealth is the amount of money they have in all their bank accounts. 
//The richest customer is the customer that has the maximum wealth.


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<vector<int>> accounts = {
        {1, 2, 3},
        {3, 2, 1}
    };

    int maxWealth = 0;

    for(int i = 0; i < accounts.size(); i++) {
        int sum = 0;

        for(int j = 0; j < accounts[i].size(); j++) {
            sum += accounts[i][j];
        }

        maxWealth = max(maxWealth, sum);
    }

    cout << "Richest Customer Wealth: " << maxWealth;

    return 0;
}


//Time Complexity: O(m × n)
//Space Complexity: O(1)
 

