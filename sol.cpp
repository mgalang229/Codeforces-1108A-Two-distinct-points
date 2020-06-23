#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void decode() {
	int l1, r1, l2, r2;
	cin >> l1 >> r1 >> l2 >> r2;
	if (l1 != l2) cout << l1 << " " << l2;
	else if (l1 != r2) cout << l1 << " " << r2;
	else if (r1 != l2) cout << r1 << " " << l2;
	else if (r1 != r2) cout << r1 << " " << r2;
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		decode();
	}
	return 0;
}
