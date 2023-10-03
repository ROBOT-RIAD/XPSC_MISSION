#include <cmath>
#include <cstdio>
#include <vector>
#include<string>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int sub = a - b;
    double ans = (100.0 * sub) / a;
    cout << fixed << setprecision(2) << ans << endl;
    return 0;
}