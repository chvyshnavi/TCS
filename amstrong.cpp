#include <iostream>
using namespace std;
int main(){
    int n,rem,sum=0,temp;
    cin>>n;
    temp=n;
    while(n>0){
        rem=rem%10;
        sum=sum+(rem*rem*rem);
        n=n/10;


    }
    if(temp==sum)
        cout<<"Amstrong number";
        else
        cout<<"Not a amstrong number";
    
    return 0;
}