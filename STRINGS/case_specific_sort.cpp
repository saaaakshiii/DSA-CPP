#include<bits/stdc++.h>

using namespace std;

string returnSort(string &str){
    vector<char> lower, upper;

    for(int i=0; i<str.length(); i++){
        if(islower(str[i]))
            lower.push_back(str[i]);
    }

    for(int i=0; i<str.length(); i++){
        if(isupper(str[i]))
            upper.push_back(str[i]);
    }

    sort(lower.begin(), lower.end());
    sort(upper.begin(), upper.end());

    string res=str;
    int upperIdx=0, lowerIdx=0;

    for(int i=0; i<str.length(); i++){
        if(islower(str[i])){
            res[i]=lower[lowerIdx++];
        }
        else if(isupper(str[i])){
            res[i]=upper[upperIdx++];
        }
    }

    return res;
}

int main(){
    string str="defRTSersUXI";

    cout<<"Case specific sorted string is: "<<returnSort(str);

    return 0;
}