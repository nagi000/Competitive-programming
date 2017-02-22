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

bool binarySerch(int x,VI v,int n){
    int left,right,mid;
    left=0;
    right = n;
    while(left<right){
        mid = (right+left)/2;
        if(v[mid] == x)return true;
        else if(v[mid] < x)left = mid+1;
        else right = mid;
    }
    return false;
}

int main(){
    int m,n;
    cin>>n>>m;
    VI v(n);
    bool flag=false;
    rep(i,n){
        cin>>v[i];
    }

    sort(v.begin(),v.end());
    for(int a=0;a<n;a++){
        for(int b=0;b<n;b++){
            for(int c=0;c<n;c++){
                if(binarySerch(m-v[a]-v[b]-v[c],v,n)){
                    flag=true;
                }
            }
        }
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
