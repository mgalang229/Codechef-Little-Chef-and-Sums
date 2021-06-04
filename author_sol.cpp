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
		// apply the concept of prefix sum -> O(n) time complexity
		vector<long long> prefix_sum(n);
		prefix_sum[0] = 0;
		for (int i = 1; i < n; i++) {
			prefix_sum[i] = prefix_sum[i - 1] + a[i];
		}
		// apply the concept of suffix sum -> O(n) time complexity
		vector<long long> suffix_sum(n);
		suffix_sum[n - 1] = 0;
		for (int i = n - 2; i >= 0; i--) {
			suffix_sum[i] = suffix_sum[i + 1] + a[i];
		}
		long long mn = LLONG_MAX;
		int index = -1;
		for (int i = 0; i < n; i++) {
			if (prefix_sum[i] + suffix_sum[i] < mn) {
				// find the minimum sum of prefix and suffix sum and store its index plus 1
				mn = prefix_sum[i] + suffix_sum[i];
				index = i + 1;
			}
		}
		cout << index << '\n';
	}
	return 0;
}
