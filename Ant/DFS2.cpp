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
char field[100][100];
static int cnt=0;
void dfs(int y,int x){
    field[y][x] = '.';

    for(int dx=-1;dx<=1;dx++){
        for(int dy=-1;dy<=1;dy++){
            int nx = x+dx;
            int ny = y+dy;
            if(0<=nx && nx<M && 0<=ny && ny<N && field[ny][nx] == 'W')
                dfs(ny,nx);
        }
    }
}

int main(){

    cin>>N>>M;
    int res=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>field[i][j];
        }
    }
    field[0][2] = 'W';
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cout<<field[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(field[i][j] == 'W'){
                cout<<"test"<<endl;
                dfs(i,j);
                res++;
            }
        }
    }
    cout<<N<<" "<<M<<endl;
    cout<<res<<endl;
    return 0;
}
