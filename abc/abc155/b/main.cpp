#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  vector<int> A(110);
  cin >> N;

  for (int i = 0; i < N; i++)
    cin >> A.at(i);

  bool can = true;
  for (int i : A)
  {
    if (i % 2 == 0)
    {
      if (i % 3 != 0 & i % 5 != 0)
      {
        can = false;
      }
    }
  }

  if (can)
    cout << "APPROVED" << endl;
  else
    cout << "DENIED" << endl;
}
