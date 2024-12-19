//Function to find the 2nd highest number from an Array

#include <iostream>

using namespace std;

int findsecondhighest(int arr[], int n) {
    if (n < 2) {
        cout << "Array must contain at least two elements." << endl;
        return -1;
    }

    int highest = 0, secondhighest =0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > highest) {
            secondhighest = highest;
            highest = arr[i];
        }
        else if (arr[i] > secondhighest && arr[i] != highest) {
            secondhighest = arr[i];
        }
    }

    if (secondhighest == 0) {
        cout << "There is no second highest element." << endl;
        return -1;
    }

    return secondhighest;
}

int main() {
    int arr[] = {1, 3, 5, 4, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = findsecondhighest(arr, n);
    if (result != -1) {
        cout << "The second highest number is: " << result << endl;
    }
    return 0;
}
