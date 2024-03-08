#include <iostream>

//int main()
//{
//	setlocale(LC_ALL, "ru");
//
//	std::cout << "Здравствуйте! Это конвертер валют\n";
//
//	while (true)
//	{
//		int choice;
//
//		std::cout << "\n\nВыберите действие:\n\n 1) начать\t2) выйти\n";
//		std::cin >> choice;
//
//		if (choice == 1)
//		{
//			float rub;
//			std::cout << "Введите сумму в рублях: ";
//			std::cin >> rub;
//
//			int current;
//
//			std::cout << "\nВ какую валюту вы хотите конвертировать? \n\n\t1) доллары   2) евро \n\n     3) юани   4) тенге   5) йены\n";
//			std::cin >> current;
//
//			if (current == 1)
//			{
//				float usd = rub / 91.35;
//				float bank = usd / 100 * 5 * 91.35;
//				std::cout << "Получилось обменять: " << usd - bank << " долларов ";
//				std::cout << " (с комиссией " << bank << " руб)";
//			}
//			else if (current == 2)
//			{
//				float eur = rub / 99.11;
//				float bank = eur / 100 * 5 * 99.11;
//				std::cout << "Получилось обменять: " << eur - bank << " евро";
//				std::cout << " (с комиссией " << bank << " руб)";
//
//			}
//			else if (current == 3)
//			{
//				float cny = rub / 12.65;
//				float bank = cny / 100 * 5 * 12.65;
//				std::cout << "Получилось обменять: " << cny - bank << " юаней";
//				std::cout << " (с комиссией " << bank << " руб)";
//
//			}
//			else if (current == 4)
//			{
//				float kzt = rub / 4.94;
//				float bank = kzt / 100 * 5 * 4.95;
//				std::cout << "Получилось обменять: " << kzt - bank << " тенге";
//				std::cout << " (с комиссией " << bank << " руб)";
//
//			}
//			else if (current == 5)
//			{
//				float jpy = rub / 0.6;
//				float bank = jpy / 100 * 5 * 0.6;
//				std::cout << "Получилось обменять: " << jpy - bank << " йен";
//				std::cout << " (с комиссией " << bank << " руб)";
//
//			}
//			else
//			{
//				std::cout << "Введите номер варианта";
//			}
//		}
//
//		else if (choice == 2)
//		{
//			std::cout << "\nДо встречи!\n";
//			break;
//		}
//
//		else
//		{
//			std::cout << "Выбирете номер варианта";
//		}
//
//		continue;
//
//	}
//	
//
//
//
//
//	return 0;
//
//}

int main()
{
	setlocale(LC_ALL, "ru");
	int choose;


	do
	{
		std::cout << "1) Продолжить игру\n";
		std::cout << "2) Новая игра\n";		
		std::cout << "3) Загрузить игру\n";
		std::cout << "4) Настройки\n";
		std::cout << "0) Выход\n"; 
		std::cin >> choose;

	} while (choose < 0 || choose > 4 );


}