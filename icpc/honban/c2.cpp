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

const int N=500001;
const int MAX=7500111;
int main(){
    while(1){
        VI p;//素数リスト
        //bool f[100];
        vector<bool> f(MAX);
        int m,n;
        cin>>m>>n;
        if(m==0 &&n==0)
            break;

        for(int i=m;i<N;i++){
            f[i] = false;
        }
        for(int i=m;i<N;i++){
            if(f[i])continue;

            for(int j = i*2;j<N;j +=i){
                if(!f[j])
                    f[j] = true;
            }
        }
        // p.push_back(m);
        for(int i=m;i<N;i++){
            if(!f[i])p.push_back(i);
        }

        int a=m;
        // while(p.size() != n+1){
        //     if(!f[i])p.push_back(i);
        //     i++;
        // }
        // cout<<"test"<<endl;
        // return 0;
        // for(int i=0;i<p.size()+1;i++){
        //     cout<<p[i]<<endl;
        // }
        cout<<p[n]<<endl;
    }
    return 0;
}
