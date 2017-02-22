#include <bits/stdc++.h>



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
    long long x,p,t;
cin>>x;
p=x/11;
if(x<11){
    if(x<=6){
        cout<<1<<endl;
        return 0;
    }
    else{
        cout<<2<<endl;
        return 0;
    }
}
if(x%11==0){
cout<<p*2<<endl;
}
else if(x%11<=6){cout<<p*2+1<<endl;}
else
cout<<p*2+2<<endl;

    return 0;
}
