#include <bits/stdc++.h>
using namespace std;

void sinh_tiep(vector<int>& idx) 
{
    int n = idx.size();
    int i = n - 2;

    while (i >= 0 && idx[i] >= idx[i + 1]) 
        i--;

    if (i < 0) 
    {
        sort(idx.begin(), idx.end());
    }
     else 
    {
        int j = n - 1;
        while (idx[j] <= idx[i])
        {
            j--;
        }
        swap(idx[i], idx[j]);
        reverse(idx.begin() + i + 1, idx.end());
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> perm(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> perm[i];
    }
    sinh_tiep(perm);
    for (int x : perm) 
    {
        cout << x << " ";
    }
}
