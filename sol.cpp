#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// find the minimum element
		int mn = *min_element(a.begin(), a.end());
		for (int i = 0; i < n; i++) {
			if (a[i] == mn) {
				// if the current element is the minimum element, then print its index plus 1
				cout << i + 1 << '\n';
				// break the loop
				break;
			}
		}
	}
	return 0;
}
