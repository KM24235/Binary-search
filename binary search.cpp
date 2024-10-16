#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid; // Return the index of the target
        }
        // If target is greater, ignore left half
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore right half
        else {
            right = mid - 1;
        }
    }

    // Target was not found
    return -1;
}

int main() {
    std::vector<int> arr = { 4,,7,8,9,792 };
    int target = 5;

    int result = binarySearch(arr, target);

    if (result != -1) {
        std::cout << "Element found at index: " << result << std::endl;
    }
    else {
        std::cout << "Element not found." << std::endl;
    }

    return 0;
}
