#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Orta eleman

        if (arr[mid] == target) {
            return mid; // Öğeyi buldu
        } else if (arr[mid] < target) {
            low = mid + 1; // Sağ yarıda ara
        } else {
            high = mid - 1; // Sol yarıda ara
        }
    }
    
    return -1; // Öğeyi bulamadı
}

int main() {
    std::vector<int> numbers = {1, 3, 5, 7, 9, 11};
    int target = 7;
    int result = binarySearch(numbers, target);

    if (result != -1) {
        std::cout << "Found at index: " << result << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }

    return 0;
}
