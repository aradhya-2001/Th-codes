/* Ques- Leet 560

naive brute force is of Generating all sub arrays is like subsequence of string (copy 1) O(n^3).

Optimised brute force is below one O(n^2) :- */

#include<bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& arr, int k) 
{
    int n = arr.size(), ans = 0;   
    for(int i = 0; i < n; i++) 
    {
        int sum = arr[i]; 
        if(sum == k) ans++;
        
        for(int j = i + 1; j < n; j++) 
        {
            sum += arr[j]; 
            if(sum == k) ans++; 
        }   
    }
    return ans; 
}

// or :-

int subarraySum(vector<int>& arr, int k) 
{
    int n = arr.size(), ans = 0;   
    for(int i = 0; i < n; i++) 
    {
        int sum = 0; 
        for(int j = i ; j < n; j++) 
        {
            sum += arr[j]; 
            if(sum == k) ans++; 
        }   
    }
    return ans; 
}