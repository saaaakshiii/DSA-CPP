// User function template for C++

// arr : given array arr
// st : segment tree of the given array arr
// n :  size of arr array
// qs and qe : index range to find Min and Max value between these indexes.
// PII :  return pair denoting min,max respectively.
// index : given index to update with new_val

// Function to update a value in input array and segment tree.
#include<bits/stdc++.h>
using namespace std;

#define PII pair<int, int>
#define INF 1e9

int getMid(int s, int e){
    return s+(e-s)/2;
}

PII getMinMaxUtil(PII *st, int ss, int se, int qs, int qe, int si){
    if(qs<=ss && qe>=se)
        return st[si];
        
    if(se<qs ||ss>qe)
        return {INF, -INF};
    
    int mid=getMid(ss, se);
    PII left=getMinMaxUtil(st, ss, mid, qs, qe, 2*si+1);
    PII right=getMinMaxUtil(st, mid+1, se, qs, qe, 2*si+2);
    
    return {min(left.first, right.first), max(left.second, right.second)};
}
PII getMinMax(PII *st, int *arr, int n, int qs, int qe) {
    if(qs<0 ||qe>n-1||qs>qe)
        return{-1,-1};
    return getMinMaxUtil(st, 0, n-1, qs, qe, 0);
}

// Function to return minimum and maximum of elements in range from index
// qs (quey start) to qe (query end).

void updateValueUtil(int *arr, PII *st, int ss, int se, int idx, int new_val, int si){
    if(idx<ss ||idx>se)
        return;
    
    if(ss==se){
        arr[idx]=new_val;
        st[si]={new_val, new_val};
        return;
    }
    int mid=getMid(ss, se);
    updateValueUtil(arr, st, ss, mid, idx, new_val, 2*si+1);
    updateValueUtil(arr, st, mid+1, se, idx, new_val, 2*si+2);
    
    st[si].first=min(st[2*si+1].first, st[2*si+2].first);
    st[si].second=max(st[2*si+1].second, st[2*si+2].second);
}
void updateValue(int *arr, PII *st, int n, int index, int new_val) {
    if(index<0 || index>n-1)
        return;
    updateValueUtil(arr, st, 0, n-1, index, new_val, 0);
}