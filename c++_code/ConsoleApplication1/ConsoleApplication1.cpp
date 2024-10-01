#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> arr = {1,2,3,4,5,6,7,8,9};
	int num;
	cin >> num;
	auto it = lower_bound(arr.begin(),arr.end(), num);

	arr.insert(it, num);



	return 0;
}