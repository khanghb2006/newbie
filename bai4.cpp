#include<bits/stdc++.h>

using namespace std;

const int mxN = 2e5 + 5;

int n;
int ans;
int a[mxN];
long long m;

bool ok(int height) {
    long long sum = 0;
    for (int i = 1; i <= n; i++) 
        if(a[i] > height) sum += (a[i] - height);
    
    return (sum >= m);
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    long long lo = 0,hi = 20;
    while(lo <= hi) {
        int mid = (lo + hi) >> 1;
        if(ok(mid)) {
            lo = mid + 1;
            ans = mid;
        }
        else hi = mid - 1;
    }
    // cout << ok(0);
    cout << ans;
}
