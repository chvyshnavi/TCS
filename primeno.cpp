/*#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    if(n<=1){
        cout<<"not prime";
        return 0;
    }
    for (int i=2;i*i<=n;i++){
if(n%i==0){
    count++;
    break;
}
    }
    if (count==0)
        cout<<"Prime";
    else
        cout<<"Not prime";
    
    return 0;

}*/





#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    if(n<=1){
        cout<<" NOT prime";
        return 0;
    }
    for(int i=2;i*i<=n;i++){
if(n%i==0){
    count++;
    break;
}
    }
if(count==0)
cout<<"prime";
else
cout<<"Not prime";
return 0;
}
