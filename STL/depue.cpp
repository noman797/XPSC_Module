#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);
    int n; cin>>n;
    deque<int>dq;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        dq.push_back(x);
    }

    // sort(dq.begin(),dq.end());

    dq.push_front(10);
    dq.push_front(10);

    dq.pop_front();
    sort(dq.begin(),dq.end());
    for(auto val:dq)
    {
        cout<<val<<" ";
    }

    cout<<endl;

    return 0;
}