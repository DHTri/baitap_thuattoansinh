#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
int x[100];
bool finaL = false;

void init()
{
    for(int i = n;i>=1;i++)
        x[i] = i;
}

void sinh()
{
    int i = n;
    while(i >= 1 && x[i] > x[i+1])
    {
        i--;
    }
    if(i == 0)
        finaL = true;
    else
    {
        int j = n;
        while(x[i] > x[j])
            j--;
        swap(x[i] , x[j]);
        reverse(x+i+1 , x+n+1);
    }
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
