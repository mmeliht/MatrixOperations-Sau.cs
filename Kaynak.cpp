/**********************************************************************************************************************************************
***********************************************************************************************************************************************
***********************************************************************************************************************************************
*****************************************  ÖÐRENCÝ ADI: Mustafa Melih TÜFEKCÝOÐLU                    ******************************************
*****************************************  ÖÐRENCÝ NUMARASI: B191210004                              ******************************************
*****************************************  DERS GRUBU : B                                            ******************************************
***********************************************************************************************************************************************
***********************************************************************************************************************************************
***********************************************************************************************************************************************/


#include<iostream>
#include <time.h>
#include<windows.h>
using namespace std;
int main()
{   int secenek;                                    //seçim menüsündeki iþlemler için tanýmlandý.
	int matrisBoyutu;
	int mattop = 0;                                //4. seçenek için tanýmlandý.
   	              
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
              int sutun;                                              //ters çevilirmek istenen sutun deðeri..
		      int tamp[100];                                          //seçilen sutundaki deðerleri aktarmak için kullanýlan geçici dizi..
	    do                                                            //kullanýcýn yanlýþ sutun deðeri girmesini engellemek ve eðer yanlýþ girildiyse düzeltmesi için kullanýldý..
		{
			cout << "Ters cevirmek istediginiz sutunu girin..";
			cin >> sutun;

			if (sutun > matrisBoyutu)
				cout << "Sutun degeri matris boyutundan buyuk olamaz.Lutfen tekrar giriniz.." << endl;

			for (int a = 0; a < matrisBoyutu; a++)                            //Seçilen sutundaki sayýlarý diziye aktarmaya yarayan kod bloðu..
			{
				tamp[a] = matris[a][sutun - 1];
			}
			
			int d = 0;                                      
			int tampdeg[100];                                                //Seçilen sutundaki sayýlarýn ters çevirilmiþ hallerini tutan dizi..
			for (int deg = matrisBoyutu - 1; deg >= 0; deg--)                //Seçilen sutundaki sayýlarý ters çevirmeyi saðlayan kod bloðu..
			{
				tampdeg[d] = tamp[deg];
				d = d + 1;
			}

			cout << endl;
		    for (int b = 0; b < matrisBoyutu; b++)                         //Ters çevirilen sayýlarýn olduðu diziyi esas matris dizisine aktaran kod bloðu..
			{
				matris[b][sutun - 1] = tampdeg[b];

			}
			cout << endl;
			
			for (int sutunSayisi = 0; sutunSayisi < matrisBoyutu; sutunSayisi++)  //matrisi tekrardan yazan kod bloðu.Break kýsmýna kadar..
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
		int satir1; int sutun1;                                   //Deðiþtirilmesini istediðimiz satý ve sutun deðerlerini tutan deðiþkenler..
		int satirdizisi[100]; int sutundizisi[100];               //Seçilen satýr ve sutundaki sayýlarý geçici olarak aktardýðýmýz diziler..
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
				cout << "Deðiþtirmek istediginiz satýrý girin..";
			}
			cout << endl;
			if (sutun1 > matrisBoyutu)
			{
				cout << "Deðiþtirmek istediginiz sütunu girin..";
			}
			cout << endl;

			int a,a2,a3,a4,top;                             //Aktarma iþleminde kullanýlacak deðiþkenler.Top ise kesiþim noktasýndaki sayý için yapýlacak iþlemi tanýmlama yarayan deðiþken..
			
			for (a = 0; a < matrisBoyutu; a++)              //Seçilen satýrdaki sayýlarý geçici diziye aktarmaya yarayan kod bloðu..(sadece forun içi)
			{
				satirdizisi[a] = matris[satir1-1][a];

			}
			
			for (a2 = 0; a2 < matrisBoyutu; a2++)          //Seçilen sutundaki sayýlarý geçici diziye aktarmaya yarayan kod bloðu..(sadece forun içi)
			{
				sutundizisi[a2] = matris[a2][sutun1-1];
			}

			top = matris[satir1 - 1][sutun1-1]*2;    //Kesiþim noktasýndaki sayýyý belirlemek için yapýlan iþlem..

			
			for (a3 = 0; a3 < matrisBoyutu; a3++)                                  //Geçici diziye aktardýðýmýz sutundaki sayýlarý gerçek matriste satýra aktardýðýmýz kod bloðu..
			{
				matris[satir1-1][a3] = sutundizisi[a3];
			}

			for (a4 = 0; a4< matrisBoyutu; a4++)                                 //Geçici diziye aktardýðýmýz satýrdaki sayýlarý gerçek matristeki sutuna aktardýðýmýz kod bloðu.. 
			{
				matris[a4][sutun1-1] = satirdizisi[a4];
			}


			for (int sutunSayisi = 0; sutunSayisi < matrisBoyutu; sutunSayisi++)    //Matrisi ekrana getiren kod bloðu.Break a kadar..
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
		int satir2 ;                                              //Iþlemin yapýlmasýný istediðimiz sayýnýn atandýðý deðiþken..
		int teksatir[100]; int ciftsatir[100];                    // Seçili satýrdaki sayýlarý tek çift diye ayýrdýktan sonra tek ve çift olmalarýna göre atadýðýmýz geçici diziler.
		do
		{

			cout << "Islemi yapmak istediginiz satiri seciniz..";
			cin >> satir2;			
			
			if (satir2 > matrisBoyutu)
			{
				cout << "Deðiþtirmek istediginiz satýrý girin..";
			}
			cout << endl;

			int degg=0;
			int sayac1 = 0;
			int sayac2 = 0; 			

			for (int s = 0; s < matrisBoyutu; s++)        //Seçilen satýrdaki sayýlardan tek olanlarý geçici diziye aktardýðýmýz kod bloðu..
			{
				if (matris[satir2 - 1][s] % 2 == 1)
				{
					teksatir[sayac1] = matris[satir2 - 1][s];
					sayac1++;
				}
			}			
			for (int s2 = 0; s2 < matrisBoyutu; s2++)   //Seçilen satýrdaki sayýlarýn çift olanlarý geçici diziye aktardýðýmýz kod bloðu..
			{
				if (matris[satir2 - 1][s2] % 2 == 0)
				{
						ciftsatir[sayac2] = matris[satir2 - 1][s2];
						sayac2++;
				}
					
			}
				sayac2 = sayac2 - 1;                     //Döngüden çýktýðýnda ilerliyen kodlarda eleman kaybýna yol açtýðý için..
				
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
						
			for (int sutunSayisi = 0; sutunSayisi < matrisBoyutu; sutunSayisi++)   //Matrisi çizmeye yarayan kod bloðu.Break a kadar..
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

		for (int x = 0; x < matrisBoyutu; x++)                             //Matrisin elemanlarýnýn toplandýðý ve matrise aktarýldýðý kod bloðu..
		{
			for (int y = 0; y < matrisBoyutu; y++)
			{	
					matris[x][y] = mattop - matris[x][y];
					mattop = matris[x][y];
			}
		}
		
		for (int sutunSayisi = 0; sutunSayisi < matrisBoyutu; sutunSayisi++)   //Matrisi çizmeye yarayan kod bloðu.Break a kadar..
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
