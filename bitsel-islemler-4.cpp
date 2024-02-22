#include<stdlib.h>
#include<stdio.h>
#include<time.h>
/*
Bu program, rastgele sayýlar üreterek iki ayrý dosyaya yazma iþlemi gerçekleþtirir.

Ýþleyiþ þu þekildedir:

sayilar1.txt ve sayilar0.txt adýnda iki ayrý dosya oluþturulur.
sayi adýnda bir dizi tanýmlanýr ve her bir elemaný rastgele sayýlarla doldurulur.
Dizi üzerinde döngü kullanýlarak her bir sayýnýn 5. biti kontrol edilir:
Eðer 5. bit 1 ise, o sayýnýn 3. biti sýfýrlanýr ve sayilar1.txt dosyasýna yazýlýr.
Eðer 5. bit 0 ise, o sayýnýn 4. biti bir yapýlýr ve sayilar0.txt dosyasýna yazýlýr.
Dosyalar kapatýlýr.
Bu þekilde, 5. biti kontrol edilerek, 3. ve 4. bitlerin deðerleri deðiþtirilerek dosyalara yazýlýr.
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
