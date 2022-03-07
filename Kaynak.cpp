/**********************************************************************************************************************************************
***********************************************************************************************************************************************
***********************************************************************************************************************************************
*****************************************  ��RENC� ADI: Mustafa Melih T�FEKC�O�LU                    ******************************************
*****************************************  ��RENC� NUMARASI: B191210004                              ******************************************
*****************************************  DERS GRUBU : B                                            ******************************************
***********************************************************************************************************************************************
***********************************************************************************************************************************************
***********************************************************************************************************************************************/


#include<iostream>
#include <time.h>
#include<windows.h>
using namespace std;
int main()
{   int secenek;                                    //se�im men�s�ndeki i�lemler i�in tan�mland�.
	int matrisBoyutu;
	int mattop = 0;                                //4. se�enek i�in tan�mland�.
   	              
    do
	{
		cout << "matris boyutu giriniz..";
		cin >> matrisBoyutu;

		if (matrisBoyutu > 25 || matrisBoyutu < 5)
		{
			cout << "matris boyutu 5 ve 25 arasinda olmalidir.." << endl;
			
		}
	} while (matrisBoyutu > 25 || matrisBoyutu < 5);


	srand(time(NULL));

	int matris[100][100];
	
	cout << "   ";

	for (int sutunSayisi = 0; sutunSayisi < matrisBoyutu; sutunSayisi++)
	{
		cout << " " << sutunSayisi+1;


	}
	cout << endl;

	cout << "   ";
	for (int cizgi = 0; cizgi < matrisBoyutu; cizgi++)
	{
		cout << "__";
	}
	cout << endl;


	for (int x = 0; x < matrisBoyutu; x++)
	{

		if (x < 10)
		{
			cout << x+1 << "  |";
		}
		else if (x >= 10)
		{
			cout << x << " |";
		}
        
		for (int y = 0; y < matrisBoyutu; y++)
		{
			matris[x][y] = rand() % 10;
			cout << " " << matris[x][y];
			mattop = mattop + matris[x][y];
		}
		
		cout << "\n";
		Sleep(100);
	}	
	cout << endl;
	
	
	do
	{
		
		cout << "1.Sutun Satir Degistir:" << endl;
		cout << "2.Tekleri Basa Al(Satir):" << endl;
		cout << "3.Ters Cevir(Sutun):" << endl;
		cout << "4.Toplamlari Yazdir:" << endl;
		cin >> secenek;

		if (secenek > 4)
		{
			cout << "lutfen secenek menusundeki seceneklerin baslarindaki sayilardan birini seciniz.." << endl;
		}
			cout << endl;
	} while (secenek > 4);



	switch (secenek)
	{
	case 3:
              int sutun;                                              //ters �evilirmek istenen sutun de�eri..
		      int tamp[100];                                          //se�ilen sutundaki de�erleri aktarmak i�in kullan�lan ge�ici dizi..
	    do                                                            //kullan�c�n yanl�� sutun de�eri girmesini engellemek ve e�er yanl�� girildiyse d�zeltmesi i�in kullan�ld�..
		{
			cout << "Ters cevirmek istediginiz sutunu girin..";
			cin >> sutun;

			if (sutun > matrisBoyutu)
				cout << "Sutun degeri matris boyutundan buyuk olamaz.Lutfen tekrar giriniz.." << endl;

			for (int a = 0; a < matrisBoyutu; a++)                            //Se�ilen sutundaki say�lar� diziye aktarmaya yarayan kod blo�u..
			{
				tamp[a] = matris[a][sutun - 1];
			}
			
			int d = 0;                                      
			int tampdeg[100];                                                //Se�ilen sutundaki say�lar�n ters �evirilmi� hallerini tutan dizi..
			for (int deg = matrisBoyutu - 1; deg >= 0; deg--)                //Se�ilen sutundaki say�lar� ters �evirmeyi sa�layan kod blo�u..
			{
				tampdeg[d] = tamp[deg];
				d = d + 1;
			}

			cout << endl;
		    for (int b = 0; b < matrisBoyutu; b++)                         //Ters �evirilen say�lar�n oldu�u diziyi esas matris dizisine aktaran kod blo�u..
			{
				matris[b][sutun - 1] = tampdeg[b];

			}
			cout << endl;
			
			for (int sutunSayisi = 0; sutunSayisi < matrisBoyutu; sutunSayisi++)  //matrisi tekrardan yazan kod blo�u.Break k�sm�na kadar..
			{
				cout << " " << sutunSayisi + 1;


			}
			cout << endl;

			cout << "   ";
			for (int cizgi = 0; cizgi < matrisBoyutu; cizgi++)
			{
				cout << "__";
			}
			cout << endl;
			for (int x1 = 0; x1 < matrisBoyutu; x1++)
			{

				if (x1 < 10)
				{
					cout << x1 + 1 << "  |";
				}
				else if (x1 >= 10)
				{
					cout << x1 << " |";
				}

				for (int y1 = 0; y1 < matrisBoyutu; y1++)
				{
					matris[x1][y1];
					cout << " " << matris[x1][y1];
				}
				cout << "\n";
			}
			cout << endl;

		} while (sutun > matrisBoyutu);
		break;

	case 1:
		int satir1; int sutun1;                                   //De�i�tirilmesini istedi�imiz sat� ve sutun de�erlerini tutan de�i�kenler..
		int satirdizisi[100]; int sutundizisi[100];               //Se�ilen sat�r ve sutundaki say�lar� ge�ici olarak aktard���m�z diziler..
		do
		{			
			cout << "Yer degistirmek istediginiz satiri giriniz.."; 
			cin >> satir1; 
			cout << "Yer degistirmek istediginiz sutunu giriniz..";
			cin >> sutun1;
			
			cout << satir1 << sutun1 << endl;
			cout << "------" << endl;
			
			
			if (satir1 > matrisBoyutu)
			{
				cout << "De�i�tirmek istediginiz sat�r� girin..";
			}
			cout << endl;
			if (sutun1 > matrisBoyutu)
			{
				cout << "De�i�tirmek istediginiz s�tunu girin..";
			}
			cout << endl;

			int a,a2,a3,a4,top;                             //Aktarma i�leminde kullan�lacak de�i�kenler.Top ise kesi�im noktas�ndaki say� i�in yap�lacak i�lemi tan�mlama yarayan de�i�ken..
			
			for (a = 0; a < matrisBoyutu; a++)              //Se�ilen sat�rdaki say�lar� ge�ici diziye aktarmaya yarayan kod blo�u..(sadece forun i�i)
			{
				satirdizisi[a] = matris[satir1-1][a];

			}
			
			for (a2 = 0; a2 < matrisBoyutu; a2++)          //Se�ilen sutundaki say�lar� ge�ici diziye aktarmaya yarayan kod blo�u..(sadece forun i�i)
			{
				sutundizisi[a2] = matris[a2][sutun1-1];
			}

			top = matris[satir1 - 1][sutun1-1]*2;    //Kesi�im noktas�ndaki say�y� belirlemek i�in yap�lan i�lem..

			
			for (a3 = 0; a3 < matrisBoyutu; a3++)                                  //Ge�ici diziye aktard���m�z sutundaki say�lar� ger�ek matriste sat�ra aktard���m�z kod blo�u..
			{
				matris[satir1-1][a3] = sutundizisi[a3];
			}

			for (a4 = 0; a4< matrisBoyutu; a4++)                                 //Ge�ici diziye aktard���m�z sat�rdaki say�lar� ger�ek matristeki sutuna aktard���m�z kod blo�u.. 
			{
				matris[a4][sutun1-1] = satirdizisi[a4];
			}


			for (int sutunSayisi = 0; sutunSayisi < matrisBoyutu; sutunSayisi++)    //Matrisi ekrana getiren kod blo�u.Break a kadar..
			{
				cout << " " << sutunSayisi + 1;


			}
			cout << endl;

			cout << "   ";
			for (int cizgi = 0; cizgi < matrisBoyutu; cizgi++)
			{
				cout << "__";
			}
			cout << endl;
			for (int x2 = 0; x2 < matrisBoyutu; x2++)
			{

				if (x2 < 10)
				{
					cout << x2 + 1 << "  |";
				}
				else if (x2 >= 10)
				{
					cout << x2 << " |";
				}

				for (int y2 = 0; y2 < matrisBoyutu; y2++)
				{
					if (x2 == (satir1 - 1) && y2 == (sutun1 - 1))
						matris[x2][y2] = top;

					matris[x2][y2];
					cout << " " << matris[x2][y2];
				}
				cout << "\n";				
			}
			cout << endl;
		
		} while (sutun1 > matrisBoyutu);
		break;

	case 2:
		int satir2 ;                                              //I�lemin yap�lmas�n� istedi�imiz say�n�n atand��� de�i�ken..
		int teksatir[100]; int ciftsatir[100];                    // Se�ili sat�rdaki say�lar� tek �ift diye ay�rd�ktan sonra tek ve �ift olmalar�na g�re atad���m�z ge�ici diziler.
		do
		{

			cout << "Islemi yapmak istediginiz satiri seciniz..";
			cin >> satir2;			
			
			if (satir2 > matrisBoyutu)
			{
				cout << "De�i�tirmek istediginiz sat�r� girin..";
			}
			cout << endl;

			int degg=0;
			int sayac1 = 0;
			int sayac2 = 0; 			

			for (int s = 0; s < matrisBoyutu; s++)        //Se�ilen sat�rdaki say�lardan tek olanlar� ge�ici diziye aktard���m�z kod blo�u..
			{
				if (matris[satir2 - 1][s] % 2 == 1)
				{
					teksatir[sayac1] = matris[satir2 - 1][s];
					sayac1++;
				}
			}			
			for (int s2 = 0; s2 < matrisBoyutu; s2++)   //Se�ilen sat�rdaki say�lar�n �ift olanlar� ge�ici diziye aktard���m�z kod blo�u..
			{
				if (matris[satir2 - 1][s2] % 2 == 0)
				{
						ciftsatir[sayac2] = matris[satir2 - 1][s2];
						sayac2++;
				}
					
			}
				sayac2 = sayac2 - 1;                     //D�ng�den ��kt���nda ilerliyen kodlarda eleman kayb�na yol a�t��� i�in..
				
			for (int s3 = 0; s3 <= sayac1; s3++)
			{
				matris[satir2 - 1][s3] = teksatir[s3];
			}
						
			for (int s4 = (sayac1); s4 <= matrisBoyutu; s4++)
			{
					matris[satir2 - 1][s4] = ciftsatir[degg];
					degg++;
					if (degg == (sayac2+1))
						break;
			}
						
			for (int sutunSayisi = 0; sutunSayisi < matrisBoyutu; sutunSayisi++)   //Matrisi �izmeye yarayan kod blo�u.Break a kadar..
			{
					cout << " " << sutunSayisi + 1;


			}
			cout << endl;

			cout << "   ";
			for (int cizgi = 0; cizgi < matrisBoyutu; cizgi++)
			{
					cout << "__";
			}
			cout << endl;
			for (int x1 = 0; x1 < matrisBoyutu; x1++)
			{
				if (x1 < 10)
				{
					cout << x1 + 1 << "  |";
				}
				else if (x1 >= 10)
				{
					cout << x1 << " |";
				}

				for (int y1 = 0; y1 < matrisBoyutu; y1++)
				{
					matris[x1][y1];
					cout << " " << matris[x1][y1];
				}
				cout << "\n";
			}
					
		} while (satir2 > matrisBoyutu);
		break;

	case 4:		

		for (int x = 0; x < matrisBoyutu; x++)                             //Matrisin elemanlar�n�n topland��� ve matrise aktar�ld��� kod blo�u..
		{
			for (int y = 0; y < matrisBoyutu; y++)
			{	
					matris[x][y] = mattop - matris[x][y];
					mattop = matris[x][y];
			}
		}
		
		for (int sutunSayisi = 0; sutunSayisi < matrisBoyutu; sutunSayisi++)   //Matrisi �izmeye yarayan kod blo�u.Break a kadar..
		{
			cout << " " << sutunSayisi + 1;


		}
		cout << endl;

		cout << "   ";
		for (int cizgi = 0; cizgi < matrisBoyutu; cizgi++)
		{
			cout << "__";
		}
		cout << endl;
		for (int x1 = 0; x1 < matrisBoyutu; x1++)
		{
			if (x1 < 10)
			{
				cout << x1 + 1 << "  |";
			}
			else if (x1 >= 10)
			{
				cout << x1 << " |";
			}

			for (int y1 = 0; y1 < matrisBoyutu; y1++)
			{
				matris[x1][y1];
				cout << " " << matris[x1][y1];
			}
			cout << "\n";
		}
			break;
    }
}
