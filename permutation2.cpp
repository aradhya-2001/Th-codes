#include <bits/stdc++.h>
using namespace std;

// To find ⁿPᵣ, we doing ⁿCᵣ*r! i.e. 1st we are doing selection then arrangements. So in addition to selecting and not selecting curr (like combination1), we are also selecting the other nos.
void perm(int curr, int ri, string ans, int &r, int &n, vector<bool> vis)
{
    if (curr > n)
    {
        if (ri == r) cout << ans << endl;
        
        return;
    }

    perm(curr + 1, ri, ans + '0', r, n, vis); // curr is not selected

    for (int i = 0; i < r; i++) // selects curr and other nos
    {
        if (vis[i] == 0)
        {
            vis[i] = 1;
            perm(curr + 1, ri + 1, ans + to_string(i + 1), r, n, vis);
            vis[i] = 0;
        }
    }
}

int main()
{
    int n = 3;
    int r = 2;
    vector<bool> vis(n, 0);
    perm(1, 0, "", r, n, vis);
}