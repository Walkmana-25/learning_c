#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> tall(3);
  cin >> tall.at(0) >> tall.at(1) >> tall.at(2);
  sort(tall.begin(), tall.end());
  cout << tall.at(2) - tall.at(0) << endl;
}
