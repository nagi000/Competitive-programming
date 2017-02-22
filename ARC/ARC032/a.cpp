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
    int n;
    cin>>n;
    long long  s;
    for(int i=1;i<=n;i++){
        s+=i;
    }
    VI v(s+1),c(s+1);
    for(long long i=2;i<=s;i++){
        v[i]=i;
    }
    for(long long i=0;i<=s;i++){
        c[i] = 0;
    }
    for(long long i=2;i<=s;i++){
        if(v[i] != 0)
            c[i] = 1;
        for(long long j=i+i;j<=s;j+=i){
            v[j] = 0;
        }
    }

    // cout<<s<<endl;
    if(c[s] == 1)
        cout<<"WANWAN"<<endl;
    else
        cout<<"BOWWOW"<<endl;
    // for(int i=0;i<=1000;i++){
    //     cout<<c[i]<<" ";
    // }
    return 0;
}
