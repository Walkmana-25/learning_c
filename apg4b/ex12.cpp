#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  char t;
  int add = 0, minus = 0;

  // ここにプログラムを追記
  for (int i = 0; i < S.size(); i++)
  {
    t = S.at(i);
    if(t == '1'){
        continue;}
    else if(t == '+'){
        add++;}
    else if (t == '-'){
        minus++;}
  }
  cout << 1 + add - minus << endl;
  
}
