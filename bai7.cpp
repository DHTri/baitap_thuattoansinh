#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    string s;cin>>s;
    sort(s.begin() , s.end());
    next_permutation(s.begin() , s.end());
    cout<<s;
}
