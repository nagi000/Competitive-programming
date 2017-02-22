#include <iostream>
#include <string>

using namespace std;

int main(){
    int i;
    string S;
    cin>>S;
    while(i<S.size()){
        if(S[i] == 'c' && S[i+1] == 'h')
            i+=2;
        else if(S[i] == 'o')
            i++;
        else if(S[i] == 'k'){
            i++;
        }
        else if(S[i] == 'u'){
            i++;
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
