#include <iostream>
using namespace std;

int main(){
    double y=0.0;
    int c=0,r=1,w=1,R=1,x=0;
    while(1){
        cin >> r >> w >> c >> R;
        while(1){
            if(r == 0 && w == 0 && c == 0.0 && R==0){
                return 0;
            }
        //n = (r+x*rd)/(w+y);
            //y = (double)((r+R*x-c*w)/c);
            y = (double)((r+R*x)/c-w);
            if(y < 0){
                x++;
            }else{
                cout << x << endl;
                x = 0;
                break;
            }
        }
    }
    return 0;
}
