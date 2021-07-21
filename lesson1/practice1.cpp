#include <cmath>
#include <iostream>

using namespace std;

int part2(int input[], int sz) {
  double avg = 0;
  for (int i = 0; i < sz; i++) {
    avg += input[i];
  }
  return avg / sz;
}

int part3(int input[], int sz) {
  double avg = 0;
  int i = 0;
  while (i < sz) {
    avg += input[i];
    i++;
  }
  return avg / sz;
}

// part 4
int findMax(int a, int b, int c) {
  int max = a;
  if (b > max) max = b;
  if (c > max) max = c;
  return max;
}

int part5(int input[], int n) {
  int max = input[0];
  for (int i = 1; i < n; i++) {
    if (input[i] > max)
      max = input[i];
  }
  return max;
}

void part6(int input[], int sz, int* min, int* max) {
  *min = *max = input[0];
  for (int i = 1; i < sz; i++) {
    if (input[i] > *max)
      *max = input[i];
    if (input[i] < *min)
      *min = input[i];
  }
}

int part7(int N, int primes[]) {
  int i = 0;
  for (int n = 2; n <= N; n++) {
    bool prime = true;
    for (int f = 2; f * f <= n; f++) {
      if (n % f == 0) {
        prime = false;
        break;
      }
    }
    if (prime) primes[i++] = n;
  }
  return i;  // size
}

int main() {
  int primes[100];
  int sz = part7(97, primes);
  for (int i = 0; i < sz; i++)
    cout << primes[i] << ' ';
  cout << endl;
  return 0;
}