#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, K, M, total = 0, min_score;
  vector<int> A(110);
  cin >> N >> K >> M;
  for (int i = 0; i < N - 1; i++)
    cin >> A.at(i);

  for (int i = 0; i < N - 1; i++)
    total += A.at(i);

  min_score = N * M - total;

  if (min_score > K)
    cout << -1 << endl;
  else if (min_score < 0)
    cout << 0 << endl;
  else
    cout << min_score << endl;
}
