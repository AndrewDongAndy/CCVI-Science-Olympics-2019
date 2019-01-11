// January 10, 2019
//

/*
Tested using brute-force

THIS SOLUTION IS STILL WRONG THOUGH

NEED TO ERASE BASED ON X-COORDINATE, BUT SET IS SORTED
ACCORDING TO Y-COORDINATE
*/


#include <bits/stdc++.h>

using namespace std;


const int INF = (int) 1e9;

struct point {
    int x, y;
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
    set< pair<int, int> > s;
    for (int i = 0; i < N; i++) {
        int d = (int) sqrt(best);
        while (s.size() != 0 && stars[(*s.begin()).second].x < stars[i].x - d) {
            s.erase(s.begin());
        }
        auto it = s.lower_bound({stars[i].y - best, -1});
        while (it != s.end() && (*it).first <= stars[i].y + d) {
            best = min(best, dist_squared(stars[i], stars[(*it).second]));
            it++;
        }
        s.insert({stars[i].y, i});
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
