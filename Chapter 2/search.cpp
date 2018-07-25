#include <iostream>

int search(int * arr, int size, int value) {
	for (int  i = 0; i < size; ++i) {
		if (arr[i] == value)
			return i;
	}
	return -1;
}

int main() {
	int size = 0;
	std:: cin >> size;
	int arr[size] = {};
	for (int i = 0; i < size; ++i) 
		std:: cin >> arr[i];

	int value = 0;
	std:: cin >> value;

 	if (search(arr, size, value) != -1)
 		std:: cout << search(arr, size, value) << "\n";
 	else
 		std:: cout << "NIL\n";

 	return 0;
}