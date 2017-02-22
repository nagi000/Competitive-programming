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
    string s,t;
    cin>>s>>t;
    int i=0;
    bool result=true;
    while(i<s.size()){
        if(s[i] == t[i] || (s[i] == '@' && t[i] == '@')){
            i++;
            continue;
        }
        else if(s[i] == '@'){
            if(t[i] == 'a' || t[i] == 't' || t[i] == 'c' || t[i] == 'o' || t[i] == 'd' || t[i] == 'e' || t[i] == 'r'){
                i++;
                continue;
            }
            result=false;
            break;
        }
        else if(t[i] == '@'){
            if(s[i] == 'a' || s[i] == 's' || s[i] == 'c' || s[i] == 'o' || s[i] == 'd' || s[i] == 'e' || s[i] == 'r'){
                i++;
                continue;
            }
            result=false;
            break;
        }
        else{
            result=false;
            break;
        }
    }
    if(result)
        cout<<"You can win"<<endl;
    else
        cout<<"You will lose"<<endl;
    return 0;
}
