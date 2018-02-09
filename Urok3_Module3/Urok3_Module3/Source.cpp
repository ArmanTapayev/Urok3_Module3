#include<stdio.h>
#include<iostream>
#include<time.h>
#include<math.h>
#include<iomanip>
#include <Windows.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	system("color 1A");

	int n;

	do
	{
		cout << "\nВ работе содержится 7 заданий." << endl;
		cout << "\nДля выхода наберите 0." << endl;
		cout << endl;
		cout << "\nВведите номер задания: ";
		cin >> n;

		switch (n)
		{

			case 1:
			{
				cout << "\nЗадание №1" << endl;

				/*1. Пользователь вводит два числа. Определить, равны ли эти числа,
				и если нет, вывести их на экран в порядке возрастания.*/

				int A, B;
				cout << "Введите число A: ";
				cin >> A;
				cout << "Введите число B: ";
				cin >> B;

					if (A == B) cout << "Числа равны." << endl;
					else if (A > B) cout << "A = " << A << ", B = " << B << endl;
					else if (B > A) cout << "B = " << B << ", A = " << A << endl;

					cout << endl;

				system("pause");
				system("cls");

			}
			break;

			case 2:
			{
				cout << "\nЗадание №2" << endl;

				/*2. Пользователь с клавиатуры вводит 5 оценок студента. 
				Определить, допущен ли студент к экзамену.
				Студент получает допуск, если его средний балл 4 балла и выше*/

				int A, B, C, D, F;
				double average;

					cout << "Введите первую оценку: ";
					cin >> A;
					cout << "Введите вторую оценку: ";
					cin >> B;
					cout << "Введите третью оценку: ";
					cin >> C;
					cout << "Введите четвертую оценку: ";
					cin >> D;
					cout << "Введите пятую оценку: ";
					cin >> F;

					average = (A + B + C + D + F) / 5;

					cout << endl;

					cout << "Средняя оценка студента: "<< average<<endl;

						if (average >=4) cout << "Допуск получен." << endl;
						else cout << "Допуск не получен." << endl;

					cout << endl;

				system("pause");
				system("cls");
			}
			break;

			case 3:
			{
				cout << "\nЗадание №3" << endl;

				/*3. Пользователь с клавиатуры вводит 5 оценок студента.
				Определить, допущен ли студент к экзамену. 
				Студент получает допуск, если его средний балл 4 балла и выше*/

				int A, B, C, D, F;
				double average;

					cout << "Введите первую оценку: ";
					cin >> A;
					cout << "Введите вторую оценку: ";
					cin >> B;
					cout << "Введите третью оценку: ";
					cin >> C;
					cout << "Введите четвертую оценку: ";
					cin >> D;
					cout << "Введите пятую оценку: ";
					cin >> F;

					average = (A + B + C + D + F) / 5;

					cout << endl;

					cout << "Средняя оценка студента: " << average << endl;

						if (average >= 4) cout << "Допуск получен." << endl;
						else cout << "Допуск не получен." << endl;

					cout << endl;

				system("pause");
				system("cls");

			}
			break;

			case 4:
			{
				cout << "\nЗадание №4" << endl;

				/*4. Написать программу-калькулятор. Пользователь вводит два числа и
				выбирает арифметическое действие. Вывести на экран результат*/

				double A, B;
				char action;

				cout << "Введите первое число А:";
				cin >> A;
				cout << "Введите первое число B:";
				cin >> B;

				cout << "Введите арифметическое действие ( + , - , * , / ): ";
				cin >> action;

					switch (action)
					{
						case '+':
						{
							cout << A << " + " << B << " = " << A + B << endl;
						}
						break;

						case '-':
						{
							cout << A << " - " << B << " = " << A - B << endl;
						}
						break;

						case '*':
						{
							cout << A << " * " << B << " = " << A * B << endl;
						}
						break;

						case '/':
						{
							if(B!=0) cout << A << " / " << B << " = " << A / B << endl;
								else cout << "На ноль делить нельзя." << endl;
						}
						break;

						default:
							cout << "Введен неверный оператор." << endl;
						break;

					}

					cout << endl;

				system("pause");
				system("cls");

			}
			break;

			case 5:
			{
				cout << "\nЗадание №5" << endl;

				/*5. Написать программу, которая по выбору пользователя меняет цвет консольного приложения.
				Пользователь может выбрать цвет шрифта и цвет фона*/
				char font, background;

					while (1)
					{

						cout << "Возможно выбрать следующие цвета: "<< endl;

						cout << "0 = Черный\t8 = Серый\n";
						cout << "1 = Синий\t9 = Светло - синий\n";
						cout << "2 = Зеленый\tA = Светло - зеленый\n";
						cout << "3 = Голубой\tB = Светло - голубой\n";
						cout << "4 = Красный\tC = Светло - красный\n";
						cout << "5 = Лиловый\tD = Светло - лиловый\n";
						cout << "6 = Желтый\tE = Светло - желтый\n";
						cout << "7 = Белый\tF = Ярко - белый\n\n";

						cout << "Ввведите цвет фона: ";
						cin >> background;

						cout << "Введите цвет шрифта: ";
						cin >> font;

							if (font != background) break;
							cout << "Цвет фона и текста не должны совпадать." << endl;
							cout << "Попробуйте еще раз." << endl;
					}

					HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);	
					SetConsoleTextAttribute(hStdOut, background  | font);
		
				system("pause");
				system("cls");

			}
			break;

			case 6:
			{
				cout << "\nЗадание №6" << endl;

				/*6. Написать программу, которая по выбору пользователя возводит
				введенное им число в степень от нулевой до седьмой включительно*/

				int a, b;

				while (1)
				{

					cout << "Введите число: ";
					cin >> a;
					cout << "Введите степень числа: ";
					cin >> b;

					if (b >= 0 && b <= 7) break;
					cout << "Степень числа должна быть от 0 до 7." << endl;
					cout << "Попробуйте еще раз." << endl;

				}
			
				//c = pow(a, b);

					switch (b)
					{
						case 0:
						{
							cout << a << " в степени " << b << " составляет " << 1 << endl;
						}
						break;

						case 1:
						{
							cout << a << " в степени " << b << " составляет " << a << endl;
						}
						break;

						case 2:
						{
							cout << a << " в степени " << b << " составляет " << a*a << endl;
						}
						break;

						case 3:
						{
							cout << a << " в степени " << b << " составляет " << a*a*a << endl;
						}
						break;

						case 4:
						{
							cout << a << " в степени " << b << " составляет " << a*a*a*a << endl;
						}
						break;

						case 5:
						{
							cout << a << " в степени " << b << " составляет " << a*a*a*a*a << endl;
						}
						break;

						case 6:
						{
							cout << a << " в степени " << b << " составляет " << a*a*a*a*a*a << endl;
						}
						break;

						case 7:
						{
							cout << a << " в степени " << b << " составляет " << a*a*a*a*a*a*a << endl;
						}
						break;

					}

				system("pause");
				system("cls");

			}
			break;

			case 7:
			{
				cout << "\nЗадание №7" << endl;

				/*7. В час пик на остановку одновременно подъехали три маршрутных такси, 
				следующие по одному маршруту, в которые тут же набились пассажиры. 
				Водители обнаружили, что количество людей в разных маршрутках разное, 
				и решили пересадить часть пассажиров так, чтобы в каждой маршрутке было 
				поровну пассажиров. Требуется по количествам людей в трех маршрутках определить,
				какое наименьшее количество пассажиров придаться при этом пересадить 
				(если это вообще возможно)*/

				int A, B, C, D, F, E;
				double average;
				cout << "Введите количество пассажиров в первой маршрутке: ";
				cin >> A;
				cout << "Введите количество пассажиров во второй маршрутке: ";
				cin >> B;
				cout << "Введите количество пассажиров в третьей маршрутке: ";
				cin >> C;

					cout << endl;

					average = (A + B + C) / 3; // среднее количество пассажиров
					cout <<"Среднее количество пассажиров: "<< average<<endl;
					cout << endl;

					if ((A + B + C) % 3 == 0)
					{
						cout << "Пересадить пассажиров поровну возможно." << endl;
						cout << endl;
						if((A - average)>0) cout <<"Из первой маршрутки нужно высадить "<< abs(A - average) << " пассажиров." << endl;
							else cout << "В первую маршрутку нужно пересадить " << abs(A - average) << " пассажиров." << endl;
						if ((B - average)>0) cout << "Из второй маршрутки нужно высадить " << abs(B - average) << " пассажиров." << endl;
							else cout << "Во вторую маршрутку нужно пересадить " << abs(B - average) << " пассажиров." << endl;
						if ((C - average)>0) cout << "Из третьей маршрутки нужно высадить " << abs(C - average) << " пассажиров." << endl;
							else cout << "В третью маршрутку нужно пересадить " << abs(C - average) << " пассажиров." << endl;

					}
					else
						cout<<"Пересадить пассажиров поровну невозможно." << endl;


				cout << endl;

				system("pause");
				system("cls");

			}
			break;

		}

	} while (n != 0);

	cout << endl;
	cout << "Спасибо!" << endl;
	cout << endl;

	system("pause");
}