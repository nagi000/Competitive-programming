#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int N,M;
    int X,Y;
    int t=0,big,ans=0;
    vector<int> A;
    vector<int> B;

    cin>>N>>M;
    cin>>X>>Y;
    for(int i=0;i<N;i++){
        int a;
        cin>>a;
        A.push_back(a);
    }
    for(int i=0;i<M;i++){
        int a;
        cin>>a;
        B.push_back(a);
    }

    if(A.size()>=B.size())
        big=A.size();
    else
        big=B.size();

    for(int i=0;i<big;i++){
        int j=0;
        while(1){
            if(A[i]<t){
                i++;
            }
            else
                break;
        }
        t = A[i];
        t+=X;
        for(j=0;j<B.size();j++){
            if(B[j] >= t){
                t=B[j];
                t+=Y;
                ans++;
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
