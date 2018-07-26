#include <iostream>

int main() {
	int size = 0;
	std:: cin >> size;
	int arr[size] = {};
	for (int i = 0; i != size; ++i) {
		std::cin >> arr[i];
	}

	int ans = arr[0];
	int ans_l = 0;
	int ans_r = 0;
	int sum = 0;
	int minus_pos = -1;

	for (int r = 0; r < size; ++r) {
		sum += arr[r];
	 
		if (sum > ans) {
			ans = sum;
			ans_l = minus_pos + 1;
			ans_r = r;
		}
	 
		if (sum < 0) {
			sum = 0;
			minus_pos = r;
		}
	}

	std:: cout << ans_l << " " << ans_r << " " << ans << "\n";

	return 0;
}