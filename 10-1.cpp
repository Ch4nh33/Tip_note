#include <iostream>
using namespace std;

template <class T>
T biggest(T a[], T n){
	T big = a[0]; // 배열 a의 첫번째 원소를 big에 삽입
	for (T i = 1; i<n; i++)
		big = big < a[i] ? a[i] : big; // big보다 a[i]의 값이 더 크면 big에 a[i]의 값을 삽입 
	return big;
}

int main(void) {
	int big = 0;
	int x[] = { 1, 10, 100, 5, 4 };
	cout << biggest(x, 5) << endl;
	return 0;
}
