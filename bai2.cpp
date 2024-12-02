#include <bits/stdc++.h>
using namespace std;

void sinh(int n, int k, vector<int>& res) 
{
    int i = k - 1;
    while (i >= 0 && res[i] == n - k + i + 1) {
        i--;
    }

    if (i < 0) 
    {
        for (int j = 0; j < k; j++) 
        {
            res[j] = j + 1;
        }
    } 
    else 
    {
        res[i]++;
        for (int j = i + 1; j < k; j++) 
        {
            res[j] = res[i] + j - i;
        }
    }
}

int main() 
{
    int n, k;
    cin >> n >> k;
    vector<int> res(k);

    for (int i = 0; i < k; i++) 
    {
        cin >> res[i];
    }
    sinh(n, k, res);
    for (int x : res) 
    {
        cout << x << " ";
    }
}
