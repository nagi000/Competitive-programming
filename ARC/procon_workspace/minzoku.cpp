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
    int n,d,k;
    cin>>n>>d>>k;
    VI l(d+1),r(d+1);
    VI s(k+1),t(k+1),dir(k+1);

    for(int i = 1; i <= d; i++) {
        int a,b;
        cin>>a>>b;
        l[i] = a;
        r[i] = b;
    }
    for(int i = 1; i <= k; i++) {
        int a,b;
        cin>>a>>b;
        s[i] = a;
        t[i] = b;
        dir[i]=t[i]-s[i];
    }
    for(int i=1;i<=k;i++){
        for(int j=1;j<=d;j++){
            if(l[j]<=s[i] && s[i]<=r[j] && l[j]<=t[i] && t[i]<=r[j]){
                cout<<j<<endl;
                break;
            }
            else if(l[j]<=s[i] && s[i]<=r[j]){
                if(dir[i]>0)
                    s[i]=r[j];
                else
                    s[i] = l[j];
             }
        }
    }
    return 0;
}
