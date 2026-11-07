#include <iostream>

using namespace std;
int k, s;

void line(int n) {

  for (int i = 0; i < n; i++)
    cout << '*';
  cout << endl;

}

void emptyhalfline(int n) {
  cout << '*';
  for (int i = 0; i < n / 2 - 2; i++)
    cout << ' ';
  cout << '*' << '*';
  for (int i = 0; i < n / 2 - 2; i++)
    cout << ' ';
  cout << '*' << endl;
}

void crossonboth(int m) {
  cout << '*';
  for (int i = 0; i < m + 1; i++)
    cout << ' ';
  cout << '*';
  for (int i = 0; i < m + 1; i++)
    cout << ' ';
  cout << '*' << '*';
  for (int i = 0; i < m + 1; i++)
    cout << ' ';
  cout << '*';
  for (int i = 0; i < m + 1; i++)
    cout << ' ';
  cout << '*' << endl;
  cout << '*';
  for (int i = 0; i < m; i++)
    cout << ' ';
  cout << "***";
  for (int i = 0; i < m; i++)
    cout << ' ';
  cout << '*' << '*';
  for (int i = 0; i < m; i++)
    cout << ' ';
  cout << "***";
  for (int i = 0; i < m; i++)
    cout << ' ';
  cout << '*' << endl;
  cout << '*';
  for (int i = 0; i < m + 1; i++)
    cout << ' ';
  cout << '*';
  for (int i = 0; i < m + 1; i++)
    cout << ' ';
  cout << '*' << '*';
  for (int i = 0; i < m + 1; i++)
    cout << ' ';
  cout << '*';
  for (int i = 0; i < m + 1; i++)
    cout << ' ';
  cout << '*' << endl;

}

void crossonright(int m, int n) {
  cout << '*';
  for (int i = 0; i < n / 2 - 2; i++)
    cout << ' ';
  cout << '*' << '*';
  for (int i = 0; i < m + 1; i++)
    cout << ' ';
  cout << '*';
  for (int i = 0; i < m + 1; i++)
    cout << ' ';
  cout << '*' << endl;
  cout << '*';
  for (int i = 0; i < n / 2 - 2; i++)
    cout << ' ';
  cout << '*' << '*';
  for (int i = 0; i < m; i++)
    cout << ' ';
  cout << "***";
  for (int i = 0; i < m; i++) cout << ' ';
  cout << '*' << endl;
  cout << '*';
  for (int i = 0; i < n / 2 - 2; i++)
    cout << ' ';
  cout << '*' << '*';
  for (int i = 0; i < m + 1; i++)
    cout << ' ';
  cout << '*';
  for (int i = 0; i < m + 1; i++)
    cout << ' ';
  cout << '*' << endl;

}

void crossonleft(int m, int n) {
  cout << '*';
  for (int i = 0; i < m + 1; i++)
    cout << ' ';
  cout << '*';
  for (int i = 0; i < m + 1; i++)
    cout << ' ';
  cout << '*' << '*';
  for (int i = 0; i < n / 2 - 2; i++)
    cout << ' ';
  cout << '*' << endl;
  cout << '*';
  for (int i = 0; i < m; i++)
    cout << ' ';
  cout << "***";
  for (int i = 0; i < m; i++)
    cout << ' ';
  cout << '*' << '*';
  for (int i = 0; i < n / 2 - 2; i++)
    cout << ' ';
  cout << '*' << endl;
  cout << '*';
  for (int i = 0; i < m + 1; i++)
    cout << ' ';
  cout << '*';
  for (int i = 0; i < m + 1; i++)
    cout << ' ';
  cout << '*' << '*';
  for (int i = 0; i < n / 2 - 2; i++)
    cout << ' ';
  cout << '*' << endl;

}

int main() {
  cin >> k >> s;
  int n = 18;
  for (int i = 1; i < k; i++)
    n = n + 4;
  line(n);

  int m = 2;
  for (int i = 1; i < k; i++)
    m = m + 1;

  for (int i = 0; i < m; i++)
    emptyhalfline(n);

  if (s == 1)
    crossonright(m, n);
  if (s == 2)
    crossonleft(m, n);
  if (s == 3 || s == 4)
    crossonboth(m);
  for (int i = 0; i < m; i++)
    emptyhalfline(n);
  line(n);
  line(n);
  for (int i = 0; i < m; i++)
    emptyhalfline(n);
  if (s == 1 || s == 2)
    crossonboth(m);
  if (s == 3)
    crossonright(m, n);
  if (s == 4)
    crossonleft(m, n);
  for (int i = 0; i < m; i++)
    emptyhalfline(n);
  line(n);

}
