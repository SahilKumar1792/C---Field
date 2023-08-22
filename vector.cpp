#include <iostream>
#include <vector>
using namespace std;

// Function to read elements into a vector
vector<int> readVector() {
    vector<int> arr;
    int n;

    cout << "Enter elements (enter any non-integer value to stop):" << endl;
    while (cin >> n) {
        arr.push_back(n);
    }

    return arr;
}

// Function to print the elements of a vector
void printVector(const vector<int>& arr) {
    cout << "Vector elements: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to write elements from one vector to another vector
vector<int> writeVector(const vector<int>& source) {
    vector<int> destination;

    for (int i = 0; i < source.size(); i++) {
        destination.push_back(source[i]);
    }

    return destination;
}

int main() {
    // Read elements into a vector
    vector<int> originalVector = readVector();

    // Print the original vector
    printVector(originalVector);

    // Write elements from the original vector to a new vector
    vector<int> copiedVector = writeVector(originalVector);

    // Print the copied vector
    printVector(copiedVector);

    return 0;
}
