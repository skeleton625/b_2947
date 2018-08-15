#include <iostream>
using namespace std;

int n[5], j, k, tmp;

int main() {
	for (int i = 0; i < 5; i++) cin >> n[i];
	while (true) {
		if (j == 4) {
			if (k == 0) break;
			k = 0;
			j = 0;
			continue;
		} else if (n[j] > n[j + 1]) {
			tmp = n[j];
			n[j] = n[j + 1];
			n[j + 1] = tmp;
			for (int i = 0; i < 5; i++) cout << n[i] << " ";
			cout << endl;
			k++;
		}
		j++;
	}
	return 0;
}