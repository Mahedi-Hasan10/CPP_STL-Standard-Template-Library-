/*
     Author : Mahedi-Hasan10
*/
#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v)
{
    cout << "Size = " << v.size() << "\n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        v.push_back(in);
    }
    print(v);
    return 0;
}