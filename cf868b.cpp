/* 
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12
0, 0, 0, 0, 0, 1, 0, 0, 1, 0,  0,  1
0, 0, 1, 0, 0, 0, 0, 0, 0, 0,  1,  0
*/
#include<iostream>
using namespace std;
int main()
{
    int a, b, c, d, e, k, l1[12];
    cin >> a >> b >> c >> d >> e;
    for(int i = 0; i < 12; i++)
    {
        if((l1[i] == a) || (l1[i] == (b/5)) || (l1[i] == (c/5)))
        {
            l1[i] = 1;
        }
        if((l1[i] == d) || (l1[i] == e))
        {
            l1[i] = 2;
        }
        else
        {
            l1[i] = 0;
        }
    }
    for(int i = (d + 1); i <= 12; i++)
    {
        if(l1[i] == 1)
        {
            k = 1;
            break;           
        }
        if(l1[i] == 2)
        {
            cout << "YES";
            break;
        }
    }
    if(k == 1)
    {
        for(int i = (d - 1); i >= 12; i--)
        {
            if(l1[i] == 1)
            {
                cout << "NO";
                break;
            }
            if(l1[i] == 2)
            {
                cout << "YES";
                break;
            }
        }
    }
    return 0;
}