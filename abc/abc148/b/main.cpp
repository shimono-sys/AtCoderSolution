#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  string S, T, str;
  cin >> N >> S >> T;

  for (int i = 0; i < N; i++)
  {
    str += S.substr(i, 1) + T.substr(i, 1);
  }

  cout << str << endl;
}
