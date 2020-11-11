// ProcessOfSeries.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

using namespace std;

void ProgramGuide() {

	cout << "\nWELCOME TO PROCESS OF SERIES\n" << endl;
	cout << "It takes the numbers x, y and the operator from the user and prints the output of the following series." << endl;
	cout << "--------------------------------" << endl;

}

int main()
{
	ProgramGuide();

	int x, y;
	double MultiplyKeeper = 1.0, Factorial = 1.0, PlusTotal = 0.0, MinusTotal = 0.0, MultiTotal = 1.0, MultiMinus = 1.0;
	char Operator;

	cout << "Enter x: ";
	cin >> x;

	cout << "Enter y between 11 and 18: ";
	cin >> y;

	cout << "Enter Operator + or * ";
	cin >> Operator;


	if (((y >= 11) && (y <= 18)) && ((Operator == '+') || (Operator == '*')) && (x != 0))
	{
		if (Operator == '+')
		{
			for (int i = 1; i <= 11; i++)
			{
				if (i % 2 == 1)
				{
					for (int k = (2 * i) + 1; k <= (4 * i) + 1; k = k + 2)
					{
						for (int m = 1; m <= y - i; m++)
						{
							Factorial = Factorial * m;
						}
						PlusTotal = (k / Factorial) + PlusTotal;
						Factorial = 1;
					}
				}
				if (i % 2 == 0)
				{
					for (int k = (2 * i) + 1; k <= (4 * i) + 1; k = k + 2)
					{
						for (int m = 1; m <= y - i; m++)
						{
							Factorial = Factorial * m;
						}
						MinusTotal = (k / Factorial) + MinusTotal;
						Factorial = 1;

					}
				}
			}
			for (int z = 1; z <= y; z++)
			{
				Factorial = z * Factorial;
			}

			cout << (PlusTotal + (1 / x) + (1 / Factorial) - MinusTotal);

		}

		else if (Operator == '*')
		{
			for (int i = 1; i <= 11; i++)
			{
				if (i % 2 == 1)
				{
					for (int k = (2 * i) + 1; k <= (4 * i) + 1; k = k + 2)
					{
						MultiplyKeeper = MultiplyKeeper * k;
					}
					for (int m = 1; m <= y - i; m++)
					{
						Factorial = Factorial * m;
					}
					MultiTotal = (MultiplyKeeper / Factorial) + MultiTotal;
					Factorial = 1;
					MultiplyKeeper = 1;

				}
				if (i % 2 == 0)
				{
					for (int k = (2 * i) + 1; k <= (4 * i) + 1; k = k + 2)
					{
						MultiplyKeeper = MultiplyKeeper * k;
					}
					for (int m = 1; m <= y - i; m++)
					{
						Factorial = Factorial * m;
					}
					MultiMinus = (MultiplyKeeper / Factorial) + MultiMinus;
					Factorial = 1;
					MultiplyKeeper = 1;
				}
			}
			for (int z = 1; z <= y; z++)
			{
				Factorial = z * Factorial; //1/y işlem dışı burda işleme giriyor.
			}

			cout << (MultiTotal + (1 / x) + (1 / Factorial) - MultiMinus);
		}
	}

	else
	{
		cout << "ERROR";
	}
}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
