#include<iostream>
#include<cmath>
void tre(int T) {
	int a = T, b = 1;
	while (a > 0) {
		a = a - b;
		b++;
		if (a == 0) {
			std::cout << "Число " << T << " треугольное.";
		}
		else if (a < 0)
			std::cout << "Число " << T << " не треугольное.";
	}
}
void nic(int n) {
	if (n % 2 == 0)
		std::cout << "\nВведите нечётное число.";
	else {
		int sum = 0;
		int sum1 = 0;
		std::cout << "(";
		for (int i = 1; i <= n; i++) {
			sum = sum + i;
			std::cout << i << " + ";
		}
		sum = sum * sum;
		std::cout << "\b\b)^2 = ";
		for (int j = 1; j <= n; j++) {
			std::cout << j << "^3 + ";
			sum1 = sum1 + (j * j * j);
		}
		std::cout << "\b\b \n";
		if (sum == sum1) {
			std::cout << "Обе части уравнения равны " << sum << "\n";
			std::cout << "Теорема доказана.\n";
		}
	}
}
void specchio(int num) {
	if (num == 0) 
		return;
	std::cout << num % 10; 
	specchio(num / 10); 
}
int c(int a, int b) {
	return b * (b - a) ? c(a - 1, b - 1) * a / b : 1;
}
template<typename T>
T dist(T a1, T b1, T c1, T a2, T b2, T c2) {
	return sqrt((pow(a1 - a2, 2)) + (pow(b1 - b2, 2)) + (pow(c1 - c2, 2)));
}
int main() {
	setlocale(LC_ALL, "Russian");
	int cifr;
	std::cout << "Теорема Никомаха.\nВведите нечётное число для проверки тождества : ";
	std::cin >> cifr;
	nic(cifr);
	tre(cifr);
	std::cout << "\nЗеркальное отражение числа рекурсией.\nВведите число : ";
	int numero;
	std::cin >> numero;
	specchio(numero);
	std::cout << "\n\n";
	std::cout << "\nТреугольник Паскаля.\nВведите количество рядов : ";
	int n;
	std::cin >> n;
	std::cout << '\n';
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++)
			std::cout << c(i, j) << '\t';
		std::cout << '\n';
	}
	std::cout << "\nРасстояние между двумя точками в пространстве.\nВведите координаты точек : \n";
	std::cout << "Точка А ";
	double x1, y1, z1;
	std::cin >> x1 >> y1 >> z1;
	std::cout << "Точка Б ";
	double x2, y2, z2;
	std::cin >> x2 >> y2 >> z2;
	std::cout << "\nРасстояние равно : " << dist(x1, y1, z1, x2, y2, z2) << '\n';
		
	return 0;
}