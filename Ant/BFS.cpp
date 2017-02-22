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

int N,M;
int sx=0,sy=0;
int gx,gy;

int d[100][100];
char maze[100][100];

int dx[4]={-1,0,1,0},dy[4]={0,-1,0,1};

int bfs(){
    PII p;
    VI v;
    queue<PII > que;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>maze[i][j];
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            d[i][j] = INF;
        }
    }
    cin>>sx>>sy;
    cin>>gx>>gy;

    que.push(PII(sx,sy));
    d[sx][sy]=0;
    while(que.size()){
        PII pi = que.front();
        que.pop();
        if(pi.first == gx && pi.second == gy)
            break;
        for(int i=0;i<4;i++){
            int nx = pi.first+dx[i],ny = pi.second+dy[i];
            if(0<=nx && nx<M && 0<=ny && ny<N && maze[nx][ny] != '#' && d[nx][ny] == INF){
                que.push(PII(nx,ny));
                d[nx][ny] = d[pi.first][pi.second]+1;
            }
        }
    }
    cout<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cout<<d[i][j]<<endl;
        }
        cout<<endl;
    }
    return d[gx][gy];
}
int main(){
    cin>>N>>M;
    int res=bfs();
    if(res == INF){
        cout<<"到達不可能"<<endl;
        return 0;
    }
    cout<<"ゴールしました"<<endl;
    cout<<res<<endl;
    return 0;
}
