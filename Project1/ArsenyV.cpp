#include <iostream>

//int main()
//{
//	setlocale(LC_ALL, "ru");
//
//	std::cout << "������������! ��� ��������� �����\n";
//
//	while (true)
//	{
//		int choice;
//
//		std::cout << "\n\n�������� ��������:\n\n 1) ������\t2) �����\n";
//		std::cin >> choice;
//
//		if (choice == 1)
//		{
//			float rub;
//			std::cout << "������� ����� � ������: ";
//			std::cin >> rub;
//
//			int current;
//
//			std::cout << "\n� ����� ������ �� ������ ��������������? \n\n\t1) �������   2) ���� \n\n     3) ����   4) �����   5) ����\n";
//			std::cin >> current;
//
//			if (current == 1)
//			{
//				float usd = rub / 91.35;
//				float bank = usd / 100 * 5 * 91.35;
//				std::cout << "���������� ��������: " << usd - bank << " �������� ";
//				std::cout << " (� ��������� " << bank << " ���)";
//			}
//			else if (current == 2)
//			{
//				float eur = rub / 99.11;
//				float bank = eur / 100 * 5 * 99.11;
//				std::cout << "���������� ��������: " << eur - bank << " ����";
//				std::cout << " (� ��������� " << bank << " ���)";
//
//			}
//			else if (current == 3)
//			{
//				float cny = rub / 12.65;
//				float bank = cny / 100 * 5 * 12.65;
//				std::cout << "���������� ��������: " << cny - bank << " �����";
//				std::cout << " (� ��������� " << bank << " ���)";
//
//			}
//			else if (current == 4)
//			{
//				float kzt = rub / 4.94;
//				float bank = kzt / 100 * 5 * 4.95;
//				std::cout << "���������� ��������: " << kzt - bank << " �����";
//				std::cout << " (� ��������� " << bank << " ���)";
//
//			}
//			else if (current == 5)
//			{
//				float jpy = rub / 0.6;
//				float bank = jpy / 100 * 5 * 0.6;
//				std::cout << "���������� ��������: " << jpy - bank << " ���";
//				std::cout << " (� ��������� " << bank << " ���)";
//
//			}
//			else
//			{
//				std::cout << "������� ����� ��������";
//			}
//		}
//
//		else if (choice == 2)
//		{
//			std::cout << "\n�� �������!\n";
//			break;
//		}
//
//		else
//		{
//			std::cout << "�������� ����� ��������";
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
		std::cout << "1) ���������� ����\n";
		std::cout << "2) ����� ����\n";		
		std::cout << "3) ��������� ����\n";
		std::cout << "4) ���������\n";
		std::cout << "0) �����\n"; 
		std::cin >> choose;

	} while (choose < 0 || choose > 4 );


}