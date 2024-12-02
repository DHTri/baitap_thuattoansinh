#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, x[100];
bool finaL = false;

void sinh()
{
    int i = n;
    while(i >= 1 && x[i] == 1)
    {
        x[i] = 0;
        i--;
    }
    if(i == 0)
        finaL = true;
    else
        x[i] = 1;
}

int main()
{
    cin>>n;
    sinh();
    for(int i =1;i<=n;i++)
        cout<<x[i];
}
