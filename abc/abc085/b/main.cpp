#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, ans = 0;
  vector<int> d(110);
  cin >> N;
  for (int i = 0; i < N; i++)
    cin >> d.at(i);

  vector<int> num(110, 0);
  for (int i = 0; i < N; i++)
  {
    num.at(d.at(i))++;
  }

  for (int i = 1; i <= 100; i++)
  {
    if (num.at(i) >= 1)
      ans++;
  }

  cout << ans << endl;
}
