#include <iostream>
using namespace std;

int main() {
    int arr[6] = {2, 4, 2, 6, 2, 8};
    int target = 2;
    int count = 0;

    for (int i = 0; i < 6; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    cout << "Frequency of " << target << " = " << count;

    return 0;
}