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

int n;
VI w(101),v(101);
int W;
int dp[100][10000];

int rec(int i,int j){
    int res;
    if(dp[i][j] != -1){
        return dp[i][j];
    }

    if(i==n){
        res=0;
    }
    else if(j<w[i]){
        res = rec(i+1,j);
    }
    else{
        res = max(rec(i+1,j),rec(i+1,j-w[i])+v[i]);
    }
    return dp[i][j] = res;
}

int main(){
	ios::sync_with_stdio(false);
    cin>>n;
    rep(i,n){
        cin>>w[i];
        cin>>v[i];
    }
    cin>>W;
    for(int i=0;i<n+1;i++){
        for(int j=0;j<W+1;j++){
            dp[i][j]=-1;
        }
    }
    cout<<rec(0,W)<<endl;
    return 0;
}
