#include <iostream>
#include <string>

using namespace std;

int main(){
    int N,M;
    int a,b;
    int A[10][50];
    vector<vector<int>> v;
    cin>>N>>M;
    for(int i=0;i<M;i++){
        cin>>a>>b;
        A[a][i] = b;
    }
    for(int i=0;i<M;i++){
        cout<<<<endl;
    }
    return 0;

}
