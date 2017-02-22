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
    int n,ele,elemax;
    string s;
    VS S;
    VI I;
    string ans1;
    int ans2;
    bool judge=false;
    bool judge2=false;
    bool judge3=false;
    while(1){
        cin >> n;
        if(n==0){
            return 0;
        }
        for(int i=n-1;i>=0;i--){
            cin >> s;
            for(int j=0;j<S.size();j++){
                if(S[j]==s){
                    judge=true;
                    ele=j;
                }
            }
            if(!judge){
                S.PB(s);
                I.PB(1);
            }
            else{
                I[ele]++;
                judge=false;
            }
            if(n==1){
                ans1=S[0];
                ans2=1;
                judge2=true;
                continue;
            }
            if(!judge2){
                if(n/2>i){
                    if(S.size()==1){
                        ans1=S[0];
                        ans2=I[0];
                        judge2=true;
                        continue;
                    }
                    int max=-1;
                    for(int j=0;j<I.size();j++){
                        if(max<I[j]){
                            elemax=j;
                            max=I[j];
                        }
                    }
                    for(int j=0;j<I.size();j++){
                        if(elemax!=j){
                            if(I[elemax]==I[j] && i==0){
                                judge3=true;
                                continue;
                            }
                            if(I[elemax]>I[j]+i){
                                ans1=S[elemax];
                                ans2=n-i;
                                judge2=true;
                                continue;
                                //cout << S[ele] << " " << n-i << endl;
                            }
                        }
                    }
                }
            }
        }
        if(judge3){
            cout << "TIE" << endl;
        }
        else{
            if(judge2){
                cout << ans1 << " " << ans2 << endl;
            }
            else{
                cout << "TIE" << endl;
            }
        }
        elemax=0;
        S.clear();
        I.clear();
        judge=false;
        judge2=false;
        judge3=false;
    }
    /*for(int i=0;i<I.size();i++){
        cout << I[i] << endl;
    }*/
    return 0;
}
