// January 10, 2019
//

/*
Tested using brute-force
*/


#include <bits/stdc++.h>

using namespace std;


const int INF = (int) 1e9;

struct point {
    int x, y;

    bool operator < (const point &other) const {
        if (y == other.y) return x < other.x;
        return y < other.y;
    }
};

bool cmp_x(const point &a, const point &b) {
    return a.x < b.x;
}

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
    sort(stars.begin(), stars.end(), cmp_x);
    int best = INF;
    set<point> s;
    for (int i = 0; i < N; i++) {
        int d = (int) ceil(sqrt(best));
        while (s.size() != 0 && (*s.begin()).x < stars[i].x - d) {
            s.erase(s.begin());
        }
        auto it = s.lower_bound({-1, stars[i].y - best});
        while (it != s.end() && (*it).y <= stars[i].y + d) {
            best = min(best, dist_squared(stars[i], *it));
            it++;
        }
        s.insert(stars[i]);
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
