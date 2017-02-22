#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <typeinfo>

using namespace std;

int main(){
    vector<string> S;
    vector<vector<string> > SS;
    int a,b,c,d,cnt=0;
    string s,ans="",len="";
    cin >> s;
    cin >> a >> b >> c >> d;
    for(int i=0;i<s.length();i++){
        if(isalpha(s[i])){
            S.push_back("b");
            //cout << "b ";
        }else{
            if(s[i] == '/'){
                SS.push_back(S);
                S.clear();
                //cout << endl;
            }else{
                string x=s.substr(i,1);
                for(int j=0;j<atoi(x.c_str());j++){
                    S.push_back(".");
                    //cout << ". ";
                }
            }
        }
    }
    SS[a-1][b-1] = ".";
    SS[c-1][d-1] = "b";
    for(int i=0;i<SS.size();i++){
        for(int j=0;j<SS[i].size();j++){
            cout << SS[i][j] << " ";
        }
        cout << endl;
    }
    for(int i=0;SS[i].size();i++){
        for(int j=0;SS[i][j].size();j++){
            len+= SS[i][j];
        }
        len+="/";
    }
    cout << len << endl;
    for(int i=0;i<len.length();i++){
        if(len[i] == '.'){
            cnt++;
        }else{
            ans+=(char)cnt;
            cnt = 0;
            ans+= len[i];
        }
    }
    if(cnt>0)
        ans+=(char)cnt;
    cout << ans << endl;
}
