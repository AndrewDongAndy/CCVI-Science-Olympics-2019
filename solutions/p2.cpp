// January 10, 2019
//

/*

*/


#include <bits/stdc++.h>

using namespace std;


int N, K;
vector<int> a;

void run() {
    cin >> N >> K;
    a.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int m = 0, M = 0;
    for (int i = 0; i < K; i++) {
        if (a[i] < 0) {
            m += a[i];
        }
        if (a[N - 1 - i] > 0) {
            M += a[N - 1 - i];
        }
    }
    cout << m << ' ' << M << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("debug_output.txt", "w", stderr);
#endif


    int TC = 10;
    while (TC--) {
        run();
    }


    return 0;
}
