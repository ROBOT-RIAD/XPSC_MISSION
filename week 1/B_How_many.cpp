#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int S, T;
    cin >> S >> T;
    int count = 0;
    for (int a = 0; a <= S; a++)
    {
        for (int b = 0; a + b <= S; b++)
        {
            for (int c = 0; a + b + c <= S; c++)
            {
                if (a * b * c <= T)
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}