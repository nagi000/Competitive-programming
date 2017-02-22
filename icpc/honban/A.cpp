#include <bits/stdc++.h>

#define MP make_pair
#define PB push_back
#define ALL(x) (x).begin(),(x).end()
#define REP(i,n) for(int i=0;i<(n);i++)
#define REP1(i,n) for(int i=1;i<(n);i++)
#define REP2(i,d,n) for(int i=(d);i<(n);i++)
#define RREP(i,n) for(int i=(n);i>=0;i--)

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef vector<VI > VVi;
typedef vector<string> VS;
typedef vector<LL> VLL;
typedef pair<int,int> PII;

int main(){
    while(1){
        int n,a,buf,ans=1000001;
        int i,j;
        vector<int> v;
        cin>>n;
        if(n==0){
            return 0;
        }
        for(int z=0;z<n;z++){
            cin>>a;
            v.push_back(a);
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(i!=j){
                buf=abs(v[i]-v[j]);
                if(buf < ans)
                    ans=buf;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
