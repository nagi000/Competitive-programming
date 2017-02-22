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

int main(){
	ios::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    VI x(m),y(m),red(n+1,0),ball(n+1,1);
    rep(i,m){
        cin>>x[i]>>y[i];
    }
    red[1]=1;
    rep(i,m){
        if(red[x[i]]==1 && ball[x[i]]>1){
            red[y[i]]=1;
        }
        else if(red[x[i]]==1 && ball[x[i]] == 1){
            red[x[i]]=0;
            red[y[i]]=1;
        }
        ball[x[i]]--;
        ball[y[i]]++;
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(red[i]==1)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
