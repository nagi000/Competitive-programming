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
    int K;
    cin>>s>>K;
    int i=0;
    while(i<s.size()){
        if(s[i] == 'a')
            i++;
        else{
            if('z'-s[i]<K){
                K=K-('z'-s[i]+1);
                s[i]='a';
                // if(s[i] == 'z'){
                //     s[i] = 'a';
                //     K--;
                //     i++;
                // }
                // else{
                //     s[i]=(char)(s[i]+1);
                //     K--;
                // }

            }
            else{
                i++;
            }
        }
    }
    i=0;
    K=K%26;
    while(i<K){
        if(s[i] == 'z'){
            s[i] = 'a';
            i++;
        }
        else{
            s[s.size()-1]=(char)(s[s.size()-1]+1);
            i++;
        }
    }
    cout<<s<<endl;

    return 0;
}
