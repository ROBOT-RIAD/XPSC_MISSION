#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> minOperationsToDivisibleByPowerOfTwo(int n, string binaryStr) {
    vector<int> operations(n, -1);
    int rightmostOne = binaryStr.rfind('1');
    
    if (rightmostOne == string::npos) {
        return operations;
    }
    
    int operationCount = 0;
    
    for (int i = rightmostOne; i >= 0; i--) {
        if (binaryStr[i] == '1') {
            operations[operationCount] = operationCount;
            operationCount++;
        }
    }
    
    return operations;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string binaryStr;
        cin >> binaryStr;
        
        vector<int> operations = minOperationsToDivisibleByPowerOfTwo(n, binaryStr);
        
        for (int i = 0; i < n; i++) {
            cout << operations[i] << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}
