#include<bits/stdc++.h>
using namespace std;

/* Suppose there are n boxes and r itmes.You are required to place the items in those boxes and print all such configurations possible.
Items are numbered from 1 to r.Number of boxes can be greater number of items, hence some of the boxes may remain empty. */
void perm(int* boxes, int curr, int& r, int& n)
{
    if(curr > r) // total n! 
    {
        for(int i = 0; i < n; i++)
            cout << boxes[i] << " ";
        
        cout << endl;
        return;
    }
    
    for(int i = 0; i < n; i++)
    {
        if(boxes[i] == 0)
        {
            boxes[i] = curr;
            perm(boxes, curr + 1, r, n);
            boxes[i] = 0; 
        }
    }
}

int main()
{
    int boxes[3] = {0,0,0};
    int r = 2;
    int n = 3;
    perm(boxes, 1, r, n);
}

/* O/P -> 1 2 0
          1 0 2
          2 1 0
          0 1 2
          2 0 1
          0 2 1 */

/* nPr = (n)(n-1)....(n-(r-1))(n-r)!  =  (n)(n-1)....(n-(r-1))
        ----------------------------
                   (n-r)!

Let n=3 and r=3.
1st there r 3 empty boxes so r=1 item will be put in any one of these. Then boxes left=3-1=2 (i.e. n-1).
r=2 item can be put in any of the 2 boxes. Then boxes left=2-1=1 (i.e. n-2).
for r=3 item there is only 1 box left => for r'th item boxes left= n-(r-1).
Therefore, no of choises = 3.2.1 = (n).(n-1)(n-(r-1)) 
In code, total no of times cout (or last level) is reached -> n! */
