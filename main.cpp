#include <iostream>
using namespace std;
void permuta(int n, int v[], int k);
int main()
{
  int n;
  cin >> n;
  int* v = new int[n];
  for (int i = 0; i < n; i++)
    cin >> v[i];
  permuta(n, v, 2);
  for (int i = 0; i < n; i++)
    cout << v[i] << ' ';
  return 0;
}
void permuta(int n, int v[], int k)
{
  int p[n];
  for (int i = 0; i < n; i++)
  {
    int poz = i - k;
    if (poz < 0)
      poz += n;
    p[i] = v[poz];
  }
  for (int i = 0; i < n; i++)
    v[i] = p[i];
}
