#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S;
  cin >> N >> S;
  vector<int> A(N), P(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < N; i++) {
    cin >> P.at(i);
  }

  // リンゴ・パイナップルをそれぞれ1つずつ購入するとき合計S円になるような買い方が何通りあるか
  // ここにプログラムを追記
  int count = 0, apple = 0, pineapple = 0;;
  //Loop
  for (int i = 0; i < N; i++)
  {
    apple = A.at(i);
    for (int j = 0; j < N; j++)
    {
        pineapple = P.at(j);
        if(S == pineapple + apple)
            count++;
    }
    
  }
  cout << count << endl;
  
}
