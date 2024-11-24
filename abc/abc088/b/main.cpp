#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, ans = 0;
  cin >> N;
  vector<int> card(N);

  for (int i = 0; i < N; i++)
    cin >> card.at(i);
  sort(card.rbegin(), card.rend());

  int alice_total = 0, bob_total = 0;
  for (int i = 0; i < N; i++)
  {
    if (i % 2 == 0)
      alice_total += card.at(i);
    else
      bob_total += card.at(i);
  }

  ans = alice_total - bob_total;

  cout << ans << endl;
}
