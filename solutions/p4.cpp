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

bool cmp_point(const point &a, const point &b) {
    return a.x < b.x;
}

bool cmp_set(const point &a, const point &b) {
    return a.y < b.y;
}

double dist(const point &a, const point &b) {
    return hypot(a.x - b.x, a.y - b.y);
}

int squared_dist(const point &a, const point &b) {
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
    sort(stars.begin(), stars.end(), cmp_point);
    double best = INF;
    set< pair<int, int> > s;
    for (int i = 0; i < N; i++) {
        while (s.size() != 0 && stars[(*s.begin()).second].x < stars[i].x - best) {
            s.erase(s.begin());
        }
        auto it = s.lower_bound({stars[i].y - best, -1});
        while (it != s.end() && (*it).first <= stars[i].y + best) {
            best = min(best, dist(stars[i], stars[(*it).second]));
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
