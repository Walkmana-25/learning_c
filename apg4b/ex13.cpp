#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> list(N);

  int input ;
  //入力
  for (int i = 0; i < N; i++)
  {
    cin >> list.at(i);
  }
  //平均値計算
  int sum = 0, average = 0;
  for (int i = 0; i < N; i++){
    sum += list.at(i);
  }
  average = abs(sum / N);

  //出力部分
  for (int i = 0; i < N; i++){
    cout << abs(list.at(i) - average) << endl;
  }
  
}
