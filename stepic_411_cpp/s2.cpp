﻿/*
Напишите программу, которая превращает последовательность целых чисел x1,x2,…,xn в последовательность 
(x1+xn),(x2+xn−1),(x3+xn−2),… длины ⌈n/2⌉.

Формат входа: на вход подаётся целое положительное число n<106, а за ним разделённые пробелами идут n целых чисел, 
соответствующих x1,…,xn.

Формат вывода: на вывод через пробел нужно вывести ⌈n/2⌉ целых чисел, соответствующих последовательности 
(x1+xn),(x2+xn−1),(x3+xn−2),…. В том случае, если число n — нечётное, то в качестве последнего члена последовательности 
нужно вывести x(n+1)/2 (т.е. среднее число массива).

Sample Input:
10 30 32 43 65 -32 54 34 -23 11 9
Sample Output:
39 43 20 99 22
*/

#include <iostream>

int main() {
	long int N = 0;
	std::cin >> N;
	int *p = new int[N];
	for (int i = 0; i < N; i++) {
		std::cin >> p[i];
	}
	int N_ = N % 2 == 0 ? N / 2 : N / 2 + 1;
	for (int i = 0; i < N_; i++) {
		if (i == N - 1 - i) {
			std::cout << (p[i]) << " ";
		}
		else {
			std::cout << (p[i] + p[N - 1 - i]) << " ";
		}
	}
	return 0;
}