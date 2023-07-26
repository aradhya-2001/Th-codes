#include<bits/stdc++.h>
using namespace std;

// To find a certain ⁿCᵣ ex ³C₂, we find all combinations i.e. ⁿCᵣ's through backtracking and only print where r=2
void comb(int curr, int ri, int& r, string ans, int& n)
{
    if(curr > n)
    {
        if(ri == r)
            cout << ans << endl;
        return;
    }

    comb(curr + 1, ri + 1, r, ans + to_string(curr), n); // include curr
    comb(curr + 1, ri, r, ans + '0', n); // exclude curr
}

int main(){
    int r = 2, n = 3;
    comb(1, 0, r, "", n);
}
