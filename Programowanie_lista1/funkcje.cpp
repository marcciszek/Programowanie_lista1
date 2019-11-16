#include "header.h"


void gwiazdki1()
{
	int n;
	cout << "Podaj ilosc gwiazdek: ";
	cin >> n;
	for (int i = 0;i < n; i++)
	{
		cout << "*";
	}
	cout << endl;
}

void gwiazdki2()
{
	int n;
	cout << "Podaj ilosc gwiazdek: ";
	cin >> n;
	for (int i = n;i>0; i--)
	{
		for (int j = i;j > 0;j--)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
}

void napis_w_ramce3()
{
	cout << " " << char(0xC9) << char(0xCD) << char(0xCD) << char(0xCD) << char(0xCD) << char(0xBB) << endl;
	cout << " " << char(0xBA) << char(0xBE) << char(0xA2) << char(0x88) << "w" << char(0xBA) << endl;
	cout << " " << char(0xC8) << char(0xCD) << char(0xCD) << char(0xCD) << char(0xCD) << char(0xBC) << endl;
}

void kalkulator4()
{
	double a, b;
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	cout << fixed;
	cout << setprecision(2) << a << " + " << b << " = " << setprecision(3) << a + b << endl << endl;
	cout << setprecision(2) << a << " - " << b << " = " << setprecision(3) << a - b << endl << endl;
	cout << setprecision(2) << a << " * " << b << " = " << setprecision(3) << a * b << endl << endl;
	cout << setprecision(2) << a << " / " << b << " = " << setprecision(3) << a / b << endl << endl;
	cout << setprecision(2) << "Srednia z " << a << " i " << b << " to " << setprecision(3) << (a + b) / 2 << endl << endl;
}

void rownanie_prostej5()
{
	double x1, y1, x2, y2, a, b;
	cout << "Podaj x1: ";
	cin >> x1;
	cout << "Podaj y1: ";
	cin >> y1;
	cout << "Podaj x2: ";
	cin >> x2;
	cout << "Podaj y2: ";
	cin >> y2;
	
	a = (y1 - y2) / (x1 - x2);
	b = y1 - a * x1;

	if (x1 == x2) cout << "x1 nie moze byc rowny x2";
	else 
	{
		cout << "Prosta ma rownanie: y = ";

		if (a == 1) cout << "x";
		else if (a == -1) cout << "-x";
		else if (a != 0) cout << a << "x";

		if (b > 0) cout << " + " << b;
		else if (b < 0) cout << " - " << -b;
	}
	cout << endl;
}

void wartosc_funkcji_wkadratowej6()
{
	double a, b, c, x;
	cout << "**********************************" << endl << endl;
	cout << "Podaj a = ";
	cin >> a;
	cout << "Podaj b = ";
	cin >> b;
	cout << "Podaj c = ";
	cin >> c;
	cout << "**********************************" << endl << endl;

	if (a == 0)
	{
		cout << "To nie jest funkcja kwadratowa"<<endl;
	}
	else
	{
		cout << "Podaj x = ";
		cin >> x;
		cout << "**********************************" << endl << endl;
		cout << "f( x )=";
		if (a == 1) cout << "x^2";
		else if (a == -1)cout << "-x^2";
		else cout << a << "x^2";
		
		if (b == 1) cout << "+x";
		else if (b == -1) cout << "-x";
		else if (b>0) cout <<"+"<< b << "x";
		else if (b < 0) cout << b << "x";

		if (c > 0) cout << "+" << c;
		else if (c < 0) cout << c;
		cout << endl << "**********************************" << endl << endl;
		cout << "f(" << x << ")=" << x * x * a + b * x + c;
		cout << endl << "**********************************" << endl << endl;
	}
}

void choinka7()
{
	int wys,puste,znaczace,podstawa=0;	
	cout << "Podaj wysokosc choinki: ";
	cin >> wys;
	puste = wys - 2;
	znaczace = 1;
	for (int i = 1;i < wys; i++)
	{
		for (int j1 = 0;j1 < puste; j1++) cout << " ";
		for (int j2 = 0;j2 < znaczace; j2++) cout << "*";
		//for (int j3 = 0;j3 < puste; j3++) cout << " ";
		podstawa = znaczace;
		puste--;
		znaczace+=2;
		cout << endl;
	}
	puste = wys - 2;
	for (int j1 = 0;j1 < puste; j1++) cout << " ";
	cout << "#";
	//for (int j3 = 0;j3 < puste; j3++) cout << " ";
	cout << endl;
	for (int j2 = 0;j2 < podstawa; j2++) cout << "_";
	cout << endl << endl;
}

void tabliczka8_1()
{
	int wiersz, kolumna, szerokosc = 7;
	cout << "Podaj ilosc wierszy ";
	cin >> wiersz;
	cout << "podaj ilosc kolumn ";
	cin >> kolumna;
	cout << endl << endl;

	for (int i = -1;i <= wiersz;i++)
	{
		for (int j = 0;j <= kolumna;j++)
		{
			cout.width(szerokosc);
			cout.fill(' ');
			if (i == -1)
			{
				if (j == 0)
				{
					cout << "|";
					cout.width(szerokosc);
					cout.fill(' ');
					cout << "*";
				}
				else
				{
					cout << j;
					if (j == kolumna)
					{
						cout << endl;
					}
				}
			}
			else if (i == 0)
			{
				cout.fill('-');
				cout << "";
				if (j == kolumna)
				{
					cout << "-------" << endl;
				}
			}
			else
			{
				if (j == 0)
				{
					cout << "*";
					cout.width(szerokosc);
					cout << i;
				}
				else
				{
					cout << i * j;
					if (j == kolumna)
					{
						cout << endl;
					}
				}
			}
		}
	}
}

void tabliczka8_2()
{
	int szerokosc, wysokosc;
	cout << "Podaj szerokosc: ";
	cin >> szerokosc;
	cout << "Podaj wysokosc: ";
	cin >> wysokosc;
	cout << endl;
	for (int i = 1;i <= wysokosc;i++)
	{
		for (int j = 1;j <= szerokosc;j++)
		{
			cout.width(5);
			cout.fill(' ');
			cout << i * j;
		}
		cout << endl;
	}
	cout << endl;
}

void kalkulator9()
{
	double a, b;
	char dzialanie,koniec;
	while (true) 
	{
		koniec = NULL;

		cout << "Podaj a: ";
		cin >> a;
		cout << "Podaj znak dzialania(+,-,*,/): ";
		cin >> dzialanie;
		cout << "Podaj b: ";
		cin >> b;
		if (dzialanie == '+') cout << a + b;
		else if (dzialanie == '-') cout << a - b;
		else if (dzialanie == '*') cout << a * b;
		else if (dzialanie == '/')
		{
			if (b == 0) cout << "Nie dzielimy przez zero :)";
			else cout << a / b;
		}
		else cout << "Zly znak dzialania";

		while (koniec != 'n' and koniec != 't')
		{
			cout << endl << "Czy chcesz kontynuowac obliczenia? [t/n] ";
			cin >> koniec;
			koniec = tolower(koniec);
			system("CLS");
		}
		if (koniec == 'n') break;
	}
}

void miejsca_zerowe10()
{
	double a, b, c;
	cout << "Wspolczynniki funkcji kwadratowej" << endl;
	cout << "Podaj a = ";
	cin >> a;
	cout << "Podaj b = ";
	cin >> b;
	cout << "Podaj c = ";
	cin >> c;
	cout << endl << endl << "**********************************" << endl;

	if (a == 0)
	{
		cout << "To nie jest funkcja kwadratowa" << endl;
	}
	else
	{
		cout << "Funkcja kwadratowa f(x)=";
		if (a == 1) cout << "x^2";
		else if (a == -1)cout << "-x^2";
		else cout << a << "x^2";

		if (b == 1) cout << "+x";
		else if (b == -1) cout << "-x";
		else if (b > 0) cout << "+" << b << "x";
		else if (b < 0) cout << b << "x";

		if (c > 0) cout << "+" << c;
		else if (c < 0) cout << c;
	}
	cout << endl << "**********************************" << endl << endl;
	double delta = b * b - 4 * a * c;

	if (delta == 0)
	{
		cout << "Funkcja posiada jedno miejsce zerowe: x=" << -b / (2 * a) << endl;
	}
	else if (delta > 0)
	{
		double x1 = (-b - sqrt(delta)) / 2 * a;
		double x2 = (-b + sqrt(delta)) / 2 * a;

		cout << "Funkcja posiada dwa miejsca zerowe, x1 = " << x1 << ", x2 = " << x2 << endl;
	}
	else cout << "Funkcja nie posiada miejsc zerowych" << endl;
}

void uklad_rownan11()
{
	double a, b, c, d, e, f, x, y, W, Wx, Wy;
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	cout << "Podaj c: ";
	cin >> c;
	cout << "Podaj d: ";
	cin >> d;
	cout << "Podaj e: ";
	cin >> e;
	cout << "Podaj f: ";
	cin >> f;

	W = a * e - b * d;
	Wx = c * e - b * f;
	Wy = a * f - c * d;

	if (W != 0)
	{
		x = Wx / W;
		y = Wy / W;
		cout << "x= " << x << " y= " << y << endl;
	}
	else if (Wx == 0 and Wy == 0) cout << "Nieskonczenie wiele rozwiazan" << endl;
	else cout << "Brak rozwiazan" << endl;
}

void podzielne_przez_trzy12()
{
	int licznik=0;
	for (int i = 0;i <= 100;i++)
	{	
		if (i ==0 or (i-1)%10==0)
		{
			cout.width(4);
			cout.fill(' ');
			cout << licznik;
			cout << ")";
			licznik++;
		}
		if (i % 3 == 0)
		{
			cout.width(4);
			cout.fill(' ');
			cout << i;
		}
		if (i % 10 == 0)
		{
			cout << endl;
		}
	}
}

int sumaCyfr13(int n)
{
	int suma=0;
	while (n > 0)
	{
		suma = suma + n % 10;
		n = n / 10;
	}
	return suma;
}

int nwd14(int a, int b)
{
	if (b > a)
	{
		int c;
		c = a;
		b = a;
		a = c;
	}	
	int reszta = b;
	while (a % b)
	{
		reszta = a % b;
		a = b;
		b = reszta;
	}
	return reszta;
}

void ile_moge_kupic15(double zlotowki)
{	
	cout << fixed << setprecision(2);
	cout << "Za kwote " << zlotowki << " zl mozesz kupic:" << endl;
	cout << "************************************" << endl << endl;
	cout.width(10);
	cout.fill(' ');
	cout <<  zlotowki / kursEuro;
	cout << " euro," << endl;
	cout.width(10);
	cout.fill(' ');
	cout << zlotowki / kursDolar;
	cout << " dolarow," << endl;
	cout.width(10);
	cout.fill(' ');
	cout << zlotowki / kursKoronaNorweska;
	cout << " koron norweskich." << endl;
	cout << "************************************" << endl << endl;
}

bool czyPierwsza16(int n)
{
	for (int i = 2;i <= sqrt(n) ;i++)
	{
		if (n % i == 0) return false;	
	}
	return true;
}

void wypiszPierwsze16(int n)
{
	int licznik = 0;
	bool flaga = true;
	int szerokosc = 2;
	int szerokosc_pomocnicza = n;
	while (szerokosc_pomocnicza > 0)
	{
		szerokosc_pomocnicza /= 10;
		szerokosc++;
	}
	
	for (int i = 2;i <= n;i++)
	{
		if (czyPierwsza16(i)==true)
		{
			licznik++;
			flaga = true;
			cout.width(szerokosc);
			cout.fill(' ');
			cout << i;
		}
		if (licznik % 10 == 0 and flaga == true)
		{
			cout << endl;
			flaga = false;
		}
	}
}

int potega17(int podstawa, int wykladnik)
{
	int wynik = podstawa;
	for (int i = 1; i < wykladnik; i++)
	{
		wynik *= podstawa;
	}
	return wynik;
}

double potega17(double podstawa, int wykladnik)
{
	double wynik = podstawa;
	for (int i = 1; i < wykladnik; i++)
	{
		wynik *= podstawa;
	}
	return wynik;
}

void potega17(double& wynik_potegowania, double podstawa, int wykladnik)
{
	double wynik = podstawa;
	for (int i = 1; i < wykladnik; i++)
	{
		wynik *= podstawa;
	}
	wynik_potegowania = wynik;
}

double sinus_szereg18(double argument, int ilosc_skladnikow)
{
	double wynik = 0;
	for (int i = 0;i <= ilosc_skladnikow;i++)
	{
		wynik += pow(-1, i) / silnia(2 * i + 1) * pow(argument, 2 * i + 1);
	}
	return wynik;	
}

unsigned long long silnia(unsigned int liczba)
{
	unsigned long long wynik = 1;
	if (liczba == 0) return wynik;
	else
	{
		for (unsigned long long i = 1;i <= liczba; i++)
		{
			if ((wynik *= i) < 0) break;
			else wynik *= i;
		}
	}
	return wynik;
}

double sinus_szereg2_18(double argument, int ilosc_skladnikow)
{
	long double wynik = argument;
	int potega = 3;
	long long silnia = 6;
	long silnia_pomocnicza = 3;
	for (int i = 0;i < ilosc_skladnikow;i++)
	{
		if (i % 2 == 0)
		{
			wynik -= pow(argument, potega) / silnia;
		}
		else
		{
			wynik += pow(argument, potega) / silnia;
		}
		potega += 2;
		silnia = silnia * (++silnia_pomocnicza);
		silnia = silnia * (++silnia_pomocnicza);
		if (silnia < 0) break;
	}
	return wynik;
}