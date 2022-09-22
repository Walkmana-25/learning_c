#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }

  // ここにプログラムを追記
  // (ここで"試合結果の表"の2次元配列を宣言)
  vector<vector<char>> result(N,vector<char>(N));
  //ループ処理
  int win = 0, lose = 0;
  for (int i = 0; i < M; i++)
  {
    win = A.at(i) - 1;
    lose = B.at(i) - 1;

    result.at(win).at(lose) = 'o';
    result.at(lose).at(win) = 'x';
  }
  //output
  char output;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
        output = result.at(i).at(j);
        if (output == 'x' || output == 'o')
            cout << output;
        else
            cout << '-';

        //空白処理
        if(j == N - 1){
            break;
        } else{
            cout << " ";//空白を出力
        }
    }
    cout << endl;
    
  }
  
}
