#include <cstdio>
#include <algorithm>
#define N 100010

using namespace std;

int a[N], dp[N], d[N];
int gcd(int x, int y) {
    if (y == 0) return x;
    else return(y, x % y);
}

int main() {
    int n;
    scanf("%d", &n);
    if (n == 1) {
        printf("%d\n", 1);
        return 0;
    }
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        int e = a[i];
        for (int j = 2; j * j <= a[i]; ++j) {
            if (e % j == 0) {
                dp[a[i]] = max(dp[a[i]], d[j]);
                while (e % j == 0) e /= j;
            }
        }
        if (e > 1) dp[a[i]] = max(dp[a[i]], d[e]);
        dp[a[i]]++;
        ans = max(ans, dp[a[i]]);
        e = a[i];
        for (int j = 2; j * j <= a[i]; ++j) {
            if (e % j == 0) {
                d[j] = dp[a[i]];
                while (e % j == 0) e /= j;
            }
        }
        if (e > 1) d[e] = dp[a[i]];
    }
    printf("%d\n", ans);
    return 0;
}