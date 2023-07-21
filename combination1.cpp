#include<bits/stdc++.h>
using namespace std;

// To find a certain ⁿCᵣ ex ³C₂, we find all combinations i.e. ⁿCᵣ's through backtracking and only print where r=2
void combination(int curr, int ri, int& r, string ans, int& n)
{
    if(curr > n)
    {
        if(ri == r)
            cout << ans << endl;
        return;
    }

    combination(curr + 1, ri + 1, r, ans + to_string(curr), n); // include curr
    combination(curr + 1, ri, r, ans + '0', n); // exclude curr
}

int main(){
    int r = 2, n = 3;
    combination(1, 0, r, "", n);
}
