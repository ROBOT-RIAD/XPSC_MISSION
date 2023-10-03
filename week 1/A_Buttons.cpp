#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int aans = a + (a - 1);
    int bans = b + (b - 1);
    int ab = a + b;
    int mx=INT_MIN;
    mx = max(max(aans, bans), ab); 
    cout << mx;
    return 0;
}
