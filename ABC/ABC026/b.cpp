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
    long long n;
    cin>>n;
    VI v;
    for(long long i=1;i*i<=n;i++){
        if(n % i == 0){
            v.push_back(i);
            if(i != n/i){
                if(n == n/i)
                    continue;
                v.push_back(n/i);
            }
        }
        sort(v.begin(),v.end());
    }
    long long sum =0;
    for(int i=0;i<v.size();i++){
        sum += v[i];
    }
    if(sum == n)
        cout<<"Perfect"<<endl;
    else if(sum < n)
        cout<<"Deficient"<<endl;
    else
        cout<<"Abundant"<<endl;
    // cout<<sum<<endl;
    // cout<<endl;
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }

    return 0;
}
