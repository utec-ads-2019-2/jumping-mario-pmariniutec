#include <iostream>

int main() {
  int T, N;

  std::cin >> T;

  for (int k = 1; k < T + 1; ++k) {
	std::cin >> N;
	int h = 0, l = 0, curr = 0, prev = 0;

	std::cin >> prev;
	for (int i = 1; i < N; ++i) {
	  std::cin >> curr;
	  if (curr > prev) h++;
	  if (curr < prev) l++;
	  prev = curr;
	}

	std::cout << "Case " << k << ": " << h << ' ' << l << '\n';
  }
}
