// January 10, 2019
//

/*

*/


#include <bits/stdc++.h>

using namespace std;


const int INF = (int) 1e9;

struct point {
    int x, y;
};

int dist_squared(const point &a, const point &b) {
    return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
}

int N;
vector<point> stars;

void run() {
    cin >> N;
    stars.resize(N);
    for (int i = 0; i < N; i++) {
        point &s = stars[i];
        cin >> s.x >> s.y;
    }
    int best = INF;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            best = min(best, dist_squared(stars[i], stars[j]));
        }
    }
    cout << best << '\n';
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


    int TC = 2;
    while (TC--) {
        run();
    }


    return 0;
}
