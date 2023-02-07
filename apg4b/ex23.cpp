#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input N
    int N;
    cin >> N;

    map<int, int> map, map_reverse;
    int max = 0;
    int input = 0;
    for (int i = 0; i < N; ++i)
    {
        cin >> input;
        map[input] += 1;
        if (map.at(input) > max)
            {
                max = map.at(input);
            }
    }
    // mapを入れ替える
    for (auto i : map)
    {
        map_reverse[i.second] = i.first;
    }
    // output
    cout << map_reverse.at(max) << " " << max << endl;
}
