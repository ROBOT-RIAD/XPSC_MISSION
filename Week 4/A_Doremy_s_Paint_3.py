#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr = {1, 1,2};

    // Sort the array to ensure permutations are generated in lexicographically increasing order
    std::sort(arr.begin(), arr.end());

    do {
        // Process the current permutation
        for (int i = 0; i < arr.size(); i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    } while (std::next_permutation(arr.begin(), arr.end()));

    return 0;
}
