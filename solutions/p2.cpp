// January 10, 2019
//

/*

*/


#include <bits/stdc++.h>

using namespace std;


void run() {
    int N, K;
    cin >> N >> K;
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int m = 0, M = 0;
    for (int i = 0; i < K; i++) {
        m += a[i];
        M += a[N - 1 - i];
    }
    cout << m << ' ' << M << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("DATA21.txt", "r", stdin);


    int TC = 10;
    while (TC--) {
        run();
    }


    return 0;
}
