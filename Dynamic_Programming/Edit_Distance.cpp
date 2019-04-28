#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin >> s1;
    int lone=s1.length();
    cin >> s2;
    int ltwo=s2.length();
    int d[lone+1][ltwo+1];
    memset(d,0,sizeof(d));
    for(int i=1;i<=lone;++i)
    {
        for(int j=1;j<=ltwo;++j)
        {
            if(s1[i-1]==s2[j-1])
                d[i][j]=d[i-1][j-1];
            else
            {
                d[i][j]=min(min(d[i][j-1]+1,d[i-1][j]+1),d[i-1][j-1]+1);
            }
            cout << d[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Min Distance: " << d[lone][ltwo] << endl;
}
