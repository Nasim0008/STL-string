// multiple test case input of string

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main()
{
    optimize();
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        char c;
        cin>>c;
        getline(cin,s);
        s=c+s;
        cout<<s<<endl;
    }
}
