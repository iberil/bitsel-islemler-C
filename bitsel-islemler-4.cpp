#include<stdlib.h>
#include<stdio.h>
#include<time.h>
/*
Bu program, rastgele say�lar �reterek iki ayr� dosyaya yazma i�lemi ger�ekle�tirir.

��leyi� �u �ekildedir:

sayilar1.txt ve sayilar0.txt ad�nda iki ayr� dosya olu�turulur.
sayi ad�nda bir dizi tan�mlan�r ve her bir eleman� rastgele say�larla doldurulur.
Dizi �zerinde d�ng� kullan�larak her bir say�n�n 5. biti kontrol edilir:
E�er 5. bit 1 ise, o say�n�n 3. biti s�f�rlan�r ve sayilar1.txt dosyas�na yaz�l�r.
E�er 5. bit 0 ise, o say�n�n 4. biti bir yap�l�r ve sayilar0.txt dosyas�na yaz�l�r.
Dosyalar kapat�l�r.
Bu �ekilde, 5. biti kontrol edilerek, 3. ve 4. bitlerin de�erleri de�i�tirilerek dosyalara yaz�l�r.
*/

int main()
{
	FILE*dosya,*dos;
	dosya=fopen("sayilar1.txt","w");
	dos=fopen("sayilar0.txt","w");
	int i;
	int sayi[100];
	
	srand(time(NULL));
	
	for(i=0;i<100;i++)
	{
		sayi[i]= rand()%100;
    }

	for(i=0;i<100;i++)
	{
		if(sayi[i] &(1<<5))
		{
			sayi[i]&= ~(1<<3);
			fprintf(dosya,"%d\n",sayi[i]);
		}
		else //5. bit 0 olanlar
		{
			sayi[i] |= (1<<4);
			fprintf(dos,"%d\n",sayi[i]);	
		}
    }
	fclose(dosya);
	fclose(dos);
}
