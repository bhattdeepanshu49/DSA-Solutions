#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Calculate the middle index to avoid overflow.

        if (arr[mid] == target) {
            return mid; // Target found at index 'mid'.
        } else if (arr[mid] < target) {
            left = mid + 1; // Update the 'left' pointer to search the right half.
        } else {
            right = mid - 1; // Update the 'right' pointer to search the left half.
        }
    }

    return -1; // Target not found in the array.
}

int main() {
    std::vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15};
    int target = 7;

    int result = binarySearch(arr, target);

    if (result != -1) {
        std::cout << "Element " << target << " found at index " << result << std::endl;
    } else {
        std::cout << "Element " << target << " not found in the array." << std::endl;
    }

    return 0;
}
