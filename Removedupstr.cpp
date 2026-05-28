/*#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    string s;
    cin >> s;

    unordered_set<char> seen;
    string result = "";

    for(char ch : s)    //STRINGS
    {
        if(seen.find(ch) == seen.end())
        {
            seen.insert(ch);
            result += ch;
        }
    }

    cout << result;
}*/




# include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];

    }
    unordered_set<int>s;   //ARRAYS.
    for(int a:nums){
        s.insert(a);
    }
    for(int a:s)
    {
        cout<<a<<endl;

    }
}