#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int minChesttime(int x, int y, int k) {
    int dis_x = abs(y);
    int dis_y = abs(x);

    int minTime = dis_x;
    int r_Time = k - minTime;

    if (r_Time >= dis_y) {
        return k;
    } else {
        int timeToReachChest = dis_y - r_Time;
        return minTime + timeToReachChest;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, k;
        cin >> x >> y >> k;
        int ans = minChesttime(x, y, k);
        cout << ans-10<< endl;
    }
    return 0;
}
