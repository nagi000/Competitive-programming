#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int cnt=0;
        int y,m,d;
        int my=1,mm=1,md=1,small=19,big=20;
        int a=19*5+20*5;
        int b=20*10;
        cin>>y>>m>>d;
        if(m==1 && d==1){
            for(int j=y;j<1000;j++){
                if(j%3==0)
                    cnt+=b;
                else
                    cnt+=a;
            }
        }
        else{
            for(int j=y;j<999;j++){
                if(j%3==0){
                    cnt+=b;
                }
                else
                    cnt+=a;
            }
            if(d <= md){
                int c=mm-m;
                if(c<0)
                
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
