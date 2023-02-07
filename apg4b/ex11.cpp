    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
      int N, A, B;
      string C;
      cin >> N >> A;
     
      // ここにプログラムを追記
      for (int i = 0; i < N; i++)
      {
            cin >> C >> B;
            if(C == "+"){
                A += B;
            }else if(C == "-"){
                A -= B;
            }else if(C == "*"){
                A *= B;
            } else if (C == "/"){
                if(B == 0){
                    cout << "error" << endl;
                    break;
                }else{
                    A /= B;
                }
            }
            //出力(途中)
            cout << i + 1 << ":" << A << endl;

      }
      
    }