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
    cin>>n;
    VI t(n+1);
    cin>>m;
    VI p(m+1),x(m+1);
    for(int i=1;i<=m;i++){
        int a,b;
        cin>>a>>b;
        p[i]=a;
        x[i]=b;
    }
    int diff,idx;
    for(int i=1;i<=m;i++){
        int buf;
        buf = x[i] - t[p[i]];
        if(diff > buf){
            diff = buf;
            idx = p[i];
        }
    }
    t[idx] = diff;
    int sum;

    sum = accumulate(t.begin(),t.end(),0);
    cout<<sum<<endl;

    return 0;
}
