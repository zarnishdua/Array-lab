
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int smallest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    int second_smallest;
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] > smallest) {
            if (found == false || arr[i] < second_smallest) {
                second_smallest = arr[i];
                found = true;
            }
        }
    }

    if (found == true) {
        cout << "Second smallest element: " << second_smallest;
    } else {
        cout << "Second smallest element does not exist.";
    }

    return 0;
}


