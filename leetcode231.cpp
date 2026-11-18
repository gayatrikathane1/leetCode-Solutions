//Given an integer n, return true if it is a power of two. Otherwise, return false.

//An integer n is a power of two, if there exists an integer x such that n == 2x.

 
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(n <= 0)
    {
        cout << "False";
        return 0;
    }

    while(n % 2 == 0)
    {
        n = n / 2;
    }

    if(n == 1)
        cout << "True";
    else
        cout << "False";

    return 0;
}
// Time Complexity: O(log n)
// Space Complexity: O(1)