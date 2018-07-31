#include <string>
#include <fstream>
#include <ctime>

using namespace std;

struct max_index_arr {
	int low;
	int high;
	int sum;
};

max_index_arr brute_force_max_sub(int * arr, int size) {
	max_index_arr max_arr = {0, size - 1, arr[0]};
	for (int i = 0; i < size; ++i) {
		max_index_arr temp = {i, i, arr[i]};
		for (int j = i + 1; j < size; ++j) {
			temp.sum += arr[j];
			if (temp.sum > max_arr.sum) {
				max_arr.low = i;
				max_arr.high = j;
				max_arr.sum = temp.sum;
			}
		}
	}
	return max_arr;
}

int main() {
	ifstream input("input.txt");
	ofstream output("output.txt");
	for (int j = 0; j < 10; ++j) {

		int size = 0;
		input >> size;
		int arr[size] = {};
		for (int i = 0; i != size; ++i) {
			input >> arr[i];
		}

		double start_time = clock();

		max_index_arr max_arr = brute_force_max_sub(arr, size);

		double end_time = clock();
		double search_time = (end_time - start_time) / CLOCKS_PER_SEC ;

		output << size << " "  << start_time << " " << end_time << " " << search_time << " " << endl	;
	}
	

	return 0;
}