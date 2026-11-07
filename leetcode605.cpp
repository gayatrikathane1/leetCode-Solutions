#include <iostream>
#include <vector>
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {

    int size = flowerbed.size();

    for (int i = 0; i < size; i++) {

        if (flowerbed[i] == 0) {

            if ((i == 0 || flowerbed[i - 1] == 0) &&
                (i == size - 1 || flowerbed[i + 1] == 0)) {

                flowerbed[i] = 1;
                n--;
            }
        }
    }

    return n <= 0;
}

int main() {

    vector<int> flowerbed = {1, 0, 0, 0, 1};
    int n = 1;

    if (canPlaceFlowers(flowerbed, n)) {
        cout << "true";
    }
    else {
        cout << "false";
    }

    return 0;
}