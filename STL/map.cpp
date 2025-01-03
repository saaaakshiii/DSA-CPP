#include <iostream>
#include <map>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int, string> m; // key of int data type with string value
    m[1] = "Sakshi";
    m[2] = "Singh";
    m[13] = "Gautam";

    m.insert({5, "Bheem"});

    cout << "Before erase: " << endl;

    for (auto i : m)
    {
        cout << i.first << " "           // key will be printed by using .first operation
             << i.second << " " << endl; // value will be printed by using .second operation
    }

    // m.erase(5);

    // cout<<"\nAfter erase: "<<endl;
    
    // for (auto i : m)
    // {
    //     cout << i.first << " "           // key will be printed by using .first operation
    //          << i.second << " " << endl; // value will be printed by using .second operation
    // }

    auto it=m.find(5);
    cout<<endl;

    for(auto i=it; i!=m.end(); i++)
    {
        cout<<(*i).first<<" ";// evrything after 5 including it will be printed
    }

    return 0;
}