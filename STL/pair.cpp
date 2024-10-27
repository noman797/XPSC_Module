#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // // pair<string, int> student=make_pair("rahim",10);
    // pair<string, int> student={"rahim",10};
    // // cout<<student.first<<" "<<student.second<<endl;

    // student.first="bablu";
    // auto [name,roll]=student;
    // cout<<name<<" "<<roll<<endl;

 
    // int n;
    // cin>>n;
    // pair<string,int>student[n];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>student[i].first>>student[i].second;
    // }

    // for(int i=0;i<n;i++)
    // {
    //     cout<<student[i].first<<" "<<student[i].second<<endl;
    // }

    // for(auto [x,y]:student)
    // {
    //     cout<<x<<" "<<y<<endl;
    // }


    pair<string,pair<int,string>>p={"noman",{797,"017"}};
    string name=p.first;
    int roll=p.second.first;
    string phone=p.second.second;

    cout<<name<<" "<<roll<<" "<<phone<<endl;

    return 0;
}