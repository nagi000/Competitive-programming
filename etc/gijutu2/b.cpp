#include <bits/stdc++.h>

#define MP make_pair
#define PB push_back
#define ALL(x)  (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define RANGEBOX(x,y,maxX,maxY) (0 <= (x) && 0 <= (y) && (x) < (maxX) && (y) < (maxY))
#define RANGE(x, l, r) ((l) <= (x) && (x) <= (r))
#define rep(i, N)  for (int i = 0; i < (int)(N); i++)
#define rrep(i, N) for (int i = N - 1; i >= 0; i--)
#define REP(i, init, N)  for (int i = (init); i < (int)(N); i++)
#define RREP(i, N, last) for (int i = (init - 1); i >= last; i--)
#define PB push_back

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef vector<VI > VVi;
typedef vector<string> VS;
typedef vector<LL> VLL;
typedef pair<int,int> PII;

const int    INF  = 0x3f3f3f3f;
const LL     INFL = 0x3f3f3f3f3f3f3f3fLL;
const double DINF = 0x3f3f3f3f;

int dp[501][501] = {};
int n,m;
VI v(500),t(500);
int rec(int i,int j){
    int res;
    if(i == n){
        res = 0;
    }
    else if(dp[i][j] != 0){
        return dp[i][j];
    }
    else if(j<t[i]){
        res = rec(i+1,j);
    }
    else{
        res = max(rec(i+1,j),rec(i+1,j-t[i])+v[i]);
    }
    return dp[i][j] = res;
}

int main(){
	ios::sync_with_stdio(false);
    cin>>n>>m;

    rep(i,n){
        cin>>v[i]>>t[i];
    }
    cout<<rec(0,m);

    return 0;
}
