#include <iostream>
#include <vector>
using namespace std;

int main() {
    std::vector<int> arr;
    int n;

    // Input loop to populate the vector
    while (cin >> n) {
        arr.push_back(n);
    }

    // Output loop to print the elements of the vector
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
