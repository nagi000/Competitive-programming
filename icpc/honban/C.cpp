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
        int m,n;
        vector<int> v;
        int cnt=0;
        bool flag2=false;
        cin>>m>>n;
        int buf=m;
        //cout<<m<<" "<<n<<endl;
        int j,ans;
        if(m==0 && n==0)
            return 0;

        while(v.size()<n){
            flag2=false;
            if(cnt==0){
                v.push_back(m);
                cnt++;
            }
            buf++;
            if(v.size() >= n)
                break;
            for(int z=0;z<v.size();z++){
                if((buf % v[z])==0){
                    flag2 = true;
                    break;
                }
                else{
                }
            }
            //cout<<flag2<<endl
            if(!flag2){
                v.push_back(buf);
            }
        }
        bool flag=true;
        m++;
        while(flag){
            while(1){
                flag=false;
                for(j=0;j<v.size();j++){
                    if(m%v[j]==0){
                        flag=true;
                        //cout<<v[j]<<endl;
                    }
                }
                if(!flag){
                    ans=m;
                    break;
                }
                m++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;

}
