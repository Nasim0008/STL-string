// lexicographically reverse sorting of multiple string

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.rbegin(),v.rend());// reverse sorting
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<< endl;
    }
}

