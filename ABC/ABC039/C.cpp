#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    string col= "WBWBWWBWBWBW";
    string  oto = "DoReMiFaSoLaSi";
    col+=col;
    oto+=oto;
    string S;
    cin>>S;

    int n=col.size();
    int i=0;
    for(int i=0;i<n;i++){
        int ans,cnt;
        cnt=i;
        for(int j=0;j<n;j++){
            if(S[cnt]==col[j]){
                cout<<S[cnt];
                cnt++;
                continue;
            }
            else
                break;
        }
        if(cnt>=S.size()){
            cout<<oto[2*i]<<oto[2*i+1]<<endl;
            return 0;
        }
    }
    return 0;
}
