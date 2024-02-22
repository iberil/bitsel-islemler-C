#include<stdlib.h>
#include<stdio.h>

/*
leRoShi adl� bir fonksiyon tan�mlanm��t�r. Bu fonksiyon, bir say�n�n belirli bir miktarda sola veya sa�a kayd�r�lmas�n� sa�lar.

Fonksiyonun i�leyi�i �u �ekildedir:

leRoShi fonksiyonu, iki parametre al�r: sayi ve bit.
maske1 de�i�keni, sayiyi bit miktarda sola kayd�rmak i�in kullan�l�r (sayi << bit).
maske2 de�i�keni, sayiyi 32-bit say�s�ndan bit miktar�nda sa�a kayd�rmak i�in kullan�l�r (sayi >> (32 - bit)).
maske1 ve maske2 de�i�kenleri | (veya) operat�r� kullan�larak birle�tirilir. Bu, her iki y�nde kayd�r�lm�� say�n�n birle�tirilmesini sa�lar.
Birle�tirilmi� say� leRoShi fonksiyonu taraf�ndan geri d�nd�r�l�r
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
