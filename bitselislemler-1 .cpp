#include<stdlib.h>                                         
#include<stdio.h> //sayi.txt adýnda bir dosya oluþturulur ve bu dosyaya 0 ile 99 arasýnda rastgele sayýlar yazýlýr. Dosya okunur ve dosyadan okunan sayýlar, 5. bitlerin 1 olup olmadigi kontrol edilerek yeni bir diziye aktarýlýr.
#include<time.h>  //Yeni dizideki elemanlar ekrana yazdýrýlýr.

int main()
{
	FILE*dosya;
	int *ptr;
	int dizi[100];
	
	dosya=fopen("sayi.txt","w");
	
	srand(time(NULL));
	
	for(int i=0;i<100;i++)
	{
		dizi[i]= rand()%100;
	}
	
	
	for(int i=0;i<100;i++)
	{
		fprintf(dosya,"%d\n",dizi[i]);
	}
	
	int sayac=0;
	int *ptr2;

	ptr=(int*)malloc(100*sizeof(int));
	
	for(int i=0;i<100;i++)
	{
		if(dizi[i]&1<<5)
		{
		}
		else
		{
			*(ptr+sayac)=dizi[i];
			sayac++;
			
		}
    }
	
	
	for(int i=0;i<sayac;i++)
	{
		printf("%d\n",*(ptr+i));
	}
	
	free(ptr);
	
	
}
