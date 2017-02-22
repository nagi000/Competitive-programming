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

    while(1){
        int n;
        VS v(3);
        int anscnt=0;
        string anshu;
        VS itr;
        int cnt[]= {0,0,0};
        cin>>n;
        VS c(n);
        if(n==0)
            return 0;
        for(int i=0;i<n;i++){
            cin>>c[i];
        }
        for(int i=0;i<n;i++){
            itr = find(v.begin,v.end,c[i]);
            if(itr != v.end){
                cnt[itr]++;
                if(cnt[itr] > (n-i)/2){
                    anscnt = i;
                    anshu = v[itr];
                    break;
                }
            }
            else{
                v.push_back(c[i]);
            }
        }
    }

    return 0;
}
