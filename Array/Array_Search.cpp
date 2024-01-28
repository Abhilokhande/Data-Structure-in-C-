#include<iostream>
using namespace std;

void linear(int arr[], int size) {
    int a;
    cout << "Enter the element to search:";
    cin >> a;
    for (int i = 0; i < size; i++) {
        if (arr[i] == a) {
            cout << "The element found at the position:" << i << endl;
            return;  // Add return statement to exit the function if element is found
        }
    }
    cout << "The element not found." << endl;
}

int binary(int arr[], int size) {
    int low, high, mid, element;
    cout << "Enter the element to search:";
    cin >> element;
    low = 0;
    high = size - 1;
    while (low <= high) {  // Fix the condition from low >= high to low <= high
        mid = (low + high) / 2;
        if (arr[mid] == element) {
            return mid;
        }
        if (arr[mid] > element) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    int arr[20] = {1, 2, 8, 55, 89, 65, 48, 52, 1, 48, 96, 58};
    int size = sizeof(arr) / sizeof(int);
    linear(arr, size);

    int arrr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13, 14};
    int sizee = sizeof(arrr) / sizeof(int);
    int x = binary(arrr, sizee);

    if (x != -1) {
        cout << "The element found at the position:" << x << endl;
    } else {
        cout << "The element not found." << endl;
    }

    return 0;
}
