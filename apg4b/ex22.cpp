#include <bits/stdc++.h>
using namespace std;

int main(){
    // input N
    int N;
    cin >> N;
    // input array
    vector<pair<int,int>> sort_pair;
    for(int i=0;i<N;i++){
        pair<int,int> p;
        cin >> p.second >> p.first;
        sort_pair.push_back(p);
    }
    //sort
    sort(sort_pair.begin(),sort_pair.end());

    //output array
    for(auto out : sort_pair){
        int a, b;
        tie(a,b) = out;
        cout << b << " " << a << endl;
}
}