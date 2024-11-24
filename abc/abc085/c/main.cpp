#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, Y;
  cin >> N >> Y;

  int ans_i = -1, ans_j = -1, ans_k = -1;

  for (int i = 0; i <= N; i++)
  {
    for (int j = 0; j <= N - i; j++)
    {
      int k = N - i - j;
      if (10000 * i + 5000 * j + 1000 * k == Y)
      {
        ans_i = i;
        ans_j = j;
        ans_k = k;
      }
    }
  }

  cout << ans_i << " " << ans_j << " " << ans_k << endl;
}
