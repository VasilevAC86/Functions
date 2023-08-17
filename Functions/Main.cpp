# include <iostream>

void say_hi() {
	std::cout << "Hello world!" << std::endl;
	std::cout << "By world!" << std::endl;
}
int sum(int num1, int num2, int num3) {
	return num1 + num2 + num3;	
}
bool even(int num) {
	if (num % 2 == 0)
		return true;
	return false;
}
void print_Arr(int arr[], const int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}
void mult_X5(int variable) { // variable - это параметр функции
	variable * 5;
}
void arr_X5(int arr[]) {
	arr[1] *= 5;
}

void positive_Indexes(int arr[], const int length) {
	for (int i = 0; i < length; i++)
		if (arr[i] > 0)
			std::cout << i << ' ';
	std::cout << std::endl;
}

long long faktor(int k) {	
	long long result = 1;
	for (short i = 2; i <= k; i++)
		result *= i;
	return result;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// Простые функции
	/*say_hi();
	say_hi();
	say_hi();
	std::cout<<"10 + 5 + 7 = "<<sum(10, 5, 7)<<std::endl;
	std::cout << "60 + 40 + 7 = " << sum(60, 40, 7) << std::endl;
	std::cout << "\n\nВведите число -> ";
	std::cin >> n;
	if (even(n))
		std::cout << "Число чётное.\n\n";
	else
		std::cout << "Число нечётное.\n\n";*/

	// Функции, работающие с масивами
	/*const int size = 5;
	int arr[size]{ 10, 7, 28, 8, 11 };
	std::cout << "Массив:\n";
	print_Arr(arr, size);*/

	// Переменные и массивы как аргументы функции
	/*n = 10;
	std::cout << "n = " << n << std::endl;
	mult_X5(n); // n - аргумент функции
	std::cout << "n = " << n << std::endl; // 10, т.к. параментры - лишь копии аргументов
	int my_Arr[3]{ 10, 20 , 30 };
	print_Arr(my_Arr, 3);
	arr_X5(my_Arr);
	print_Arr(my_Arr, 3); */

	// Задача 1. Индексы положительных элементов
	/*std::cout << "Задача 1.\nМассив:\n";
	const int size1 = 6;
	int arr1[size1]{ 0,7,-8,11,15.-6 };
	print_Arr(arr1, size1);
	std::cout << "Индексы положительных элементов:\n";
	positive_Indexes(arr1, size1);
	std::cout << '\n';*/

	// Задача 2. Возвращение факториала
	std::cout << "Задача 2.";
	std::cout << "Введите число = ";
	std::cin >> n;
	std::cout << "Факториал числа n = " << n << " равен " << faktor(n) << '\n';

	return 0;
}