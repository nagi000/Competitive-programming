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

int dx[] = {-1,0,1,0},dy[] = {0,1,0,-1};

int main(){
	ios::sync_with_stdio(false);
    int r,c;
    cin>>r>>c;
    int sy,sx,gy,gx;
    cin>>sy>>sx;
    cin>>gy>>gx;
    PII pi;
    queue<PII > que;
    char m[50+1][50+1];
    int d[50+1][50+1];
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            d[i][j] = INF;
        }
    }
    d[sy][sx] = 0;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cin>>m[i][j];
        }
    }
    que.push(MP(sy,sx));
    while(1){
        pi = que.front();
        que.pop();
        if(pi.first == gy && pi.second == gx)
            break;
        for(int i=0;i<4;i++){
            int ny,nx;
            ny=pi.first+dy[i];
            nx=pi.second+dx[i];
            if(1<=ny && ny<=r && 1<=nx && nx<=c && d[ny][nx] == INF && m[ny][nx] != '#'){
                que.push(MP(ny,nx));
                d[ny][nx] = d[pi.first][pi.second] + 1;
            }
        }
    }

    cout<<d[gy][gx]<<endl;

    return 0;
}
