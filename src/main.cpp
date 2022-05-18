#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;
	while (0 < (t--)) {
		int v, e;
		cin >> v >> e;

		cout << 2 - v + e << '\n';
	}

	return 0;
}