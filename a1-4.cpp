#include <iostream>

using namespace std;

//write your code here

// Function to find the median
double findMedian(int arr1[], int size1, int arr2[], int size2)
{
    int i = 0, j = 0; // pointers for arr1 and arr2
    int merged_size = size1 + size2;
    int merged[merged_size]; // to store merged array
    int k = 0;

}

//merging arrays

while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
while (i < size1) {
        merged[k++] = arr1[i++];
    }
 while (j < size2) {
        merged[k++] = arr2[j++];
    }
// Find the median
    if (merged_size % 2 == 1) {
        return merged[merged_size / 2]; // Odd number of elements
    } else {
        int mid1 = merged_size / 2;
        int mid2 = mid1 - 1;
        return (merged[mid1] + merged[mid2]) / 2.0; // Even number of elements
    }
}

//



int main() {
    // You can use cout statements, but ensure that you submit after commenting them out, as the autograder will otherwise mistake it for your actual output
    // Everything else in the main function remains unchanged
    
    int size1;
    // cout << "Enter the size of the array1: ";
    cin >> size1;

    int arr[size1];
    // cout << "Enter " << size1 << " elements:" << endl;
    for (int i = 0; i < size1; ++i) {
        cin >> arr[i];
    }

    // cout << "The array elements are: ";
    // for (int i = 0; i < size1; ++i) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    int size2;
    // cout << "Enter the size of the array2: ";
    cin >> size2;

    int arr1[size2];
    // cout << "Enter " << size2 << " elements:" << endl;
    for (int i = 0; i < size2; ++i) {
        cin >> arr1[i];
    }

    // cout << "The array elements are: ";
    // for (int i = 0; i < size2; ++i) {
    //     cout << arr1[i] << " ";
    // }
    // cout << endl;
    
    cout << "Median = " << findMedian(arr, size1, arr1, size2) << endl; // do not comment this out
    
    return 0;
}
