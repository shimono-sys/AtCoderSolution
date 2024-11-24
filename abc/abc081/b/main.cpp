#include <bits/stdc++.h>
using namespace std;

bool isAllEven(vector<int> A)
{
  for (int a : A)
  {
    if (a % 2 != 0)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A.at(i);
  }

  int count = 0;
  while (isAllEven(A))
  {
    for (int i = 0; i < A.size(); i++)
    {
      A.at(i) /= 2;
    }
    count++;
  }

  cout << count << endl;
}
