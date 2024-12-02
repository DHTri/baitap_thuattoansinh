#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, k;
int x[100];
bool finaL = false;

void init()
{
    for(int i =1;i<=k;i++)
        x[i] = i;
}

void sinh()
{
    int i = k;
    while(i >= 1 && x[i] == n - k + i)
        i--;
    if(i == 0)
        finaL = true;
    else
    {
        x[i] ++ ;
        for(int j = i+1 ; j <= k;j++)
            x[j] = x[j-1] + 1;
    }
}

int main()
{
    cin>>n>>k;
    init();
    while(!finaL)
    {
        for(int i =1;i<=k;i++)
            cout<<x[i];
        cout<<endl;
        sinh();
    }
}
