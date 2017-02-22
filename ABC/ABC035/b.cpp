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
    string s;
    int t;
    cin>>s;
    cin>>t;
    int ans;
    int x=0,y=0,cnt=0;
    rep(i,s.size()){
        if(s[i] == 'L'){
            x--;
        }
        else if(s[i] == 'R'){
            x++;
        }
        else if(s[i] == 'U'){
            y++;
        }
        else if(s[i] == 'D'){
            y--;
        }
        else
            cnt++;
    }
    x=abs(x);
    y=abs(y);
    if(t==1){
        ans=abs(x)+abs(y)+cnt;
    }
    else{
        if(abs(x)+abs(y)-cnt<0){
            ans=abs(abs(x)+abs(y)-cnt)%2;
        }
        else{
            ans=abs(x)+abs(y)-cnt;
        }
    }
    cout<<ans<<endl;

    return 0;
}
