#include <bits/stdc++.h>
using namespace std;
int n;

int init(string s) 
{
    int l = 0, r = s.size() - 1;
    while (l < r) 
    {
        if (s[l] != s[r]) 
            return 0;
        l++;
        r--;
    }
    return 1;
}

void sinh_nghich()
{
    int total = 1 << n; 
    for (int i = 0; i < total; i++) 
    {
        string res = bitset<15>(i).to_string(); 
        res = res.substr(15 - n); 
        if (init(res)) 
        {
            cout<<res<<endl;
        }
    }
}

int main() 
{
    cin >> n;
    sinh_nghich();
}
