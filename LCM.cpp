#include <iostream>
using namespace std;
int main(){
    int a,b,c,max;
    cin>>a>>b>>c;
    if(a>b && a>c)
    max=a;
    else if(b>a && b>c)
    max=b;
    else 
    max=c;
    while(true){
        if(max%a==0 && max%b==0 && max%c==0){
            cout<<"LCM ="<<max;
            break;
        }
        max++;
    }
    return 0;

}