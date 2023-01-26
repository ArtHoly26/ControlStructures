#include <iostream>

using namespace std;

//#define Figura
//#define ChessBoard //Мой вариант
//#define HardChess
//#define New //Пример с тернарным оператором
#define ChessBoarD //Вариант на уроке

#define	UPPER_LEFT_ANGLE   (char)218
#define UPPER_RIGHT_ANGLE  (char)191
#define	LOWER_LEFT_ANGLE   (char)192
#define	LOWER_RIGHT_ANGLE  (char)217

#define	 VERTICAL_LINE     (char)179
#define	 HORIZONTAL_LINE   "\xC4\XC4"         //(char)196 << (char)196

#define	WHITE_BOX          "\xDB\xDB"         //(char)219 << (char)219
#define	BLACK_BOX          "\x20\x20"         //(char)32 << (char)32

//Escape -последовательность "\xXX" позволяет вставить символ по ASCII - коду
//где 'XX'- это ASCII - код символа в 16-ой системе счисления.

void main()
{

#ifdef Figura
	setlocale(LC_ALL, "Rus");
	int n;
	cout << "Введите колличество символов:" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) cout << "*";

		cout << endl;
	}

	cout << endl;

	cout << "Введите колличество символов:" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) cout << "*";

		cout << endl;

	}

	cout << endl;

	cout << "Введите колличество символов:" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << "*";

		cout << endl;
	}

	cout << endl;

	cout << "Введите колличество символов:" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << "*";
		cout << endl;
		for (int k = 0; k <= i; k++) cout << " ";
	}

	cout << endl;

	cout << "Введите колличество символов:" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int k = i; k < n; k++) cout << " ";
		for (int j = 0; j <= i; j++) cout << "*";
		cout << endl;

	}

	cout << endl;

	int high, width;
	cout << "Введите высоту ромба:" << endl;
	cin >> high;
	width = high / 2;
	for (int i = 0; i < width; i++)
	{
		for (int j = i; j < width; j++) cout << " ";
		cout << "/";
		for (int j = width; j < width + 2 * i; j++) cout << " ";
		cout << "\\";

		cout << endl;
	}
	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j <= i; j++) cout << " ";
		cout << "\\";
		for (int j = i; j < width * 2 - i - 2; j++) cout << " ";
		cout << "/";

		cout << endl;
	}

	cout << endl;

	double size;
	cout << "Введите размер фигуры:" << endl;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		if (i % 2)
		{
			for (int j = 0; j < size; j++)
			{
				if (j % 2) cout << "+";
				else cout << "-";
			}
		}
		else
		{
			for (int j = 0; j < size; j++)
			{
				if (j % 2)cout << "-";
				else cout << "+";
			}
		}
		cout << endl;
	}
#endif Figura

#ifdef ChessBoard
	//for (int i = 0; i < 256; i++) cout << i << "#" << (char)i << "  " << endl;
	int size;
	char symbol1 = 219, symbol2 = 255, symbol3 = 179, symbol4 = 95, symbol5 = 196, symbol6 = 191, symbol7 = 192, symbol8 = 217, symbol9 = 218; //179(|),196(-),124(|),95(_)
	cout << "Enter chess board size:" << endl;
	cin >> size;

	cout << "    ";
	cout << (char)symbol9;
	for (int l = 0; l < size; l++) cout << (char)symbol5;
	cout << (char)symbol6;
	cout << endl;

	for (int i = 0; i < size / 2; i++)
	{
		cout << "    ";
		cout << (char)symbol3;
		for (int j = 0; j < size / 2; j++)
		{
			cout << (char)symbol1;
			cout << (char)symbol2;
		}
		cout << (char)symbol3;
		cout << endl;

		cout << "    ";
		cout << (char)symbol3;

		for (int k = 0; k < size / 2; k++)
		{
			cout << (char)symbol2;
			cout << (char)symbol1;
		}
		cout << (char)symbol3;
		cout << endl;
	}
	cout << "    ";
	cout << (char)symbol7;
	for (int l = 0; l < size; l++) cout << (char)symbol5;
	cout << (char)symbol8;

#endif ChessBoard

#ifdef HardChess
	{
		setlocale(LC_ALL, "Rus");
		double size1;
		double size2 = 5;
		cout << "Введите размер доски:" << endl;
		cin >> size1;
		for (int i = 0; i < size1; i++)
		{
			if (i % 2)
			{
				for (int j = 0; j < size2; j++)
				{
					for (int k = 0; k < size1; k++)
					{
						if (k % 2) cout << " * * * * *";
						else	 cout << "          ";
					}
					cout << endl;
				}
				cout << endl;
			}
			else
			{
				for (int j = 0; j < size2; j++)
				{
					for (int k = 0; k < size1; k++)
					{
						if (k % 2) cout << "          ";
						else	 cout << " * * * * *";
					}
					cout << endl;
				}
				cout << endl;
			}
		}


	}
#endif HardChess

#ifdef New
	setlocale(LC_ALL, "Rus");
	int n;
	cout << "Введите размерность:" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		//for (int j = 0; j < n; j++)
		//{
			//if ((i + j) % 2 == 0) cout << "+ ";

			//else cout << "- ";
		//}
		//cout << endl;
	//}


				//for (int j = 0; j < n; j++)
				//{
					//if (i % 2 == j % 2) cout << "+ "; else cout << "- ";
				//}

			//cout << endl;



				//for (int j = 0; j < n; j++)
				//{
					 //(i % 2 == j % 2) ? cout << "+ " : cout << "- ";
				//}

			//cout << endl;

		for (int j = 0; j < n; j++)
		{
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
	true;

#endif New

#ifdef ChessBoarD-2

	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размер доски:";
	cin >> n;
	n++;
	setlocale(LC_ALL, "C");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == 0 && j == 0) cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n) cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0) cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n) cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n) cout << VERTICAL_LINE;
			else if (j == 0 || j == n) cout << HORIZONTAL_LINE;
			//else (i % 2 == j % 2) ? cout << WHITE_BOX : cout << BLACK_BOX;
			else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);
		}
		cout << endl;
	}

#endif ChessBoarD-2

}
