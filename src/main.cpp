#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto x = int{ -1 };
	auto y = int{ -1 };
	auto m = int{ -1 };
	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			int v;
			cin >> v;

			if (m < v) {
				x = j;
				y = i;
				m = v;
			}
		}
	}

	cout << m << '\n'
		<< y + 1 << ' ' << x + 1;

	return 0;
}