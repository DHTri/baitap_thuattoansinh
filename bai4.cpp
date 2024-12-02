#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
char x[100];
bool finaL = false;

void init()
{
    for(int i =1;i<=n;i++)
        x[i] = 'B';
}

void sinh()
{
    int i = n;
    while(i >= 1 && x[i] == 'A')
    {
        x[i] = 'B';
        i--;
    }
    if(i == 0)
        finaL = true;
    else
        x[i] = 'A';
}

int main()
{
    cin>>n;
    init();
    while(!finaL)
    {
        for(int i =1;i<=n;i++)
            cout<<x[i];
        cout<<endl;
        sinh();
    }
}
