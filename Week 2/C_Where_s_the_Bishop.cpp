#include <bits/stdc++.h>
#define fo(i, s, n) for (int i = s; i < n; i++)
#define ffo(i, s, n) for (int i = s; i <= n; i++)
#define ll long long int
using namespace std;
bool is_posibol(int row, int col)
{
    return (row >= 0 && row < 8 && col >= 0 && col < 8);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char ch[8][8];
        fo(i, 0, 8)
        {
            fo(j, 0, 8)
            {
                cin >> ch[i][j];
            }
        }

        fo(i, 0, 8)
        {
            fo(j, 0, 8)
            {
                if (ch[i][j] == '#')
                {
                    if (is_posibol(i - 1, j - 1) && ch[i - 1][j - 1] == '#')
                    {
                        if (is_posibol(i + 1, j - 1) && ch[i + 1][j - 1] == '#')
                        {
                            if (is_posibol(i - 1, j + 1) && ch[i - 1][j + 1] == '#')
                            {
                                if (is_posibol(i + 1, j + 1) && ch[i + 1][j + 1] == '#')
                                {
                                    cout<<i+1<<" "<<j+1<<endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}