#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    map<int, int> mp; //[key,value]
    // mp.insert({10,20});
    // cout<<mp[10]<<endl;

    mp[10] = 20;
    mp[2] = 12;
    mp[10] = 15; // updated value e dekhabe
    mp[8] = 22;

    // cout<<mp[10]<<endl;
    // cout<<mp[2]<<endl;

    // for(auto [key,value]:mp)
    // {
    //     cout<<key<<"->"<<value<<endl;
    // }

    // mp.erase(8);
    auto it = mp.find(10);
    if (it != mp.end())
    {
        mp.erase(it);
    }

    for (auto it : mp)
    {
        int key = it.first;
        int value = it.second;
        cout << key << "->" << value << endl;
    }

    // auto it=mp.find(10);
    // // cout<<it->second<<endl;
    // if(it==mp.end())
    // cout<<"key not found"<<endl;
    // else
    // cout<<it->second<<endl;

    // auto kk = mp.lower_bound(6); //equal or greater key er value
    // cout<<kk->second<<" "<<endl;

    auto kk = mp.upper_bound(1); // strictly boro key er value
    cout << kk->second << " " << endl;

    return 0;
}