#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    int n;
    for(int j=0;j<t;j++)
    {
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        stack<ll>s;
        map<ll,ll>m;
        s.push(a[0]);
        for(int i=1;i<n;i++)
        {
            while(!s.empty() && a[i]>s.top())
            {
                m[s.top()]=a[i];
                s.pop();
            }
            s.push(a[i]);
        }
        while(!s.empty())
        {
            m[s.top()]=-1;
            s.pop();
        }
        for(int i=0;i<n;i++)
        {
            cout<<m[a[i]]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}