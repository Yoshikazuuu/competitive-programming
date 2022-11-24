#include <bits/stdc++.h>
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair

int counter = 0;

void solve() {
    int m, up = 0, down = 0;
    int temp = -1;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        if (x > temp) up++;
        else if (x < temp) down++; 
        temp = x;
    }
    cout << "Case " << ++counter << ": " << up-1 << ' ' << down << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while (n--) {
        solve();
    }

    return 0;
}