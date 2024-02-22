#include<stdlib.h>
#include<stdio.h>

/*
leRoShi adlý bir fonksiyon tanýmlanmýþtýr. Bu fonksiyon, bir sayýnýn belirli bir miktarda sola veya saða kaydýrýlmasýný saðlar.

Fonksiyonun iþleyiþi þu þekildedir:

leRoShi fonksiyonu, iki parametre alýr: sayi ve bit.
maske1 deðiþkeni, sayiyi bit miktarda sola kaydýrmak için kullanýlýr (sayi << bit).
maske2 deðiþkeni, sayiyi 32-bit sayýsýndan bit miktarýnda saða kaydýrmak için kullanýlýr (sayi >> (32 - bit)).
maske1 ve maske2 deðiþkenleri | (veya) operatörü kullanýlarak birleþtirilir. Bu, her iki yönde kaydýrýlmýþ sayýnýn birleþtirilmesini saðlar.
Birleþtirilmiþ sayý leRoShi fonksiyonu tarafýndan geri döndürülür
*/

int leRoShi(int sayi,int bit)
{
	int maske1,maske2;
	
	maske1= sayi<<bit;
	maske2= sayi>>(32-bit);
	
	return (maske1|maske2); 
}
	
	
int main()
{
	int sayi1,sayi2;
	
	printf("sayi giriniz:");
	scanf("%d",&sayi1);
	
	printf("kaydirma miktari icin sayi giriniz:");
	scanf("%d",&sayi2);
	
	printf("son hali: %d",leRoShi(sayi1,sayi2));
	
	return 0;
	
}
