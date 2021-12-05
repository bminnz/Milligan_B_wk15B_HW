//Brendan Milligan 12-5-2021
//CIS-1202 Assignment #15B

#include<iostream>
#include<cmath>

using namespace std;

template <typename T>
T half(T val) {
	T res;
	res = val / 2;
	//checks if type is an integer
	if (*typeid(val).name() == 'i') {
		//Next line checks to see if the result*2 equals value
		if (res * 2 != val) {
		//if not, then it means the integer was rounded down and needs to round up
			res++;
		}
	}
	return res;
}

int main() {
	int x = 11;
	float y = 5.25;
	double z = 7.175;

	cout << half(x) << endl;
	cout << half(y) << endl;
	cout << half(z) << endl;

}