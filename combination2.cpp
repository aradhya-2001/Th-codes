#include<bits/stdc++.h>
using namespace std;

// here we are generating only those permutations where the bigger no always comes on right of smaller
void comb(int curr, int prev, int* boxes, int& r, int& n) // prev is last selected box 
{
    if(curr > r)
    {
        for(int i = 0; i < n; i++) cout << boxes[i];
        cout << endl;
        
        return;
    }

    for(int i = prev + 1; i < n; i++)
    {
        boxes[i] = curr; // as func is being called on bigger no i.e. curr+1, this bigger num is always placed after the prev num i.e. on prev+1
        comb(curr + 1, i, boxes, r, n); // since num is already placed at i sou for next func, prev is i.
        boxes[i] = 0;
    }
}

int main(){
    int r = 3;
    int n = 4;
    int boxes[n] = {0};
    comb(1, -1, boxes, r, n); 
}