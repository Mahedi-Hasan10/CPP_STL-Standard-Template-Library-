/*
     Author : Mahedi-Hasan10
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // pair<int, string> p;
    // p = {01, "Mahedi Hasan\n"};
    // cout << p.first << " " << p.second;

    // lets make a array of pairs

    pair<string, int> p_array[5];

    p_array[0] = {"mahedi", 20};
    p_array[1] = {"imran", 22};
    p_array[2] = {"sojib", 21};
    p_array[3] = {"redwan", 23};
    p_array[4] = {"jesan", 24};

    for (int i = 0; i < 5; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << "\n";
    }

    return 0;
}