#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s = "0000";
    string s1 = to_string(n);
    int j = s.length() - s1.length();
    s.replace(j, s1.length(), s1); 

    cout << s << endl;

    return 0;
}
