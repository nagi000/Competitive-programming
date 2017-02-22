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
    int n;
    cin>>n;
    VI a(n);
    VLL v(n+1);
    rep(i,n){
        cin>>a[i];
    }
    int cnt=1;
    long long ans=0;
    v[0] = 0;
    int j=1;
    for(int i=1;i<n+1;i++){
        v[i] = v[i-1] + j;
        j++;
    }
    if(n==1){
        cout<<v[1]<<endl;
        return 0;
    }
    rep(i,n){
        if(a[i]<a[i+1]){
            cnt++;
        }
        else{
            ans+=v[cnt];
            cnt=1;
        }
        if(i==(n-2)){
            ans+=v[cnt];
            break;
        }
    }
    cout<<ans<<endl;

    return 0;
}
