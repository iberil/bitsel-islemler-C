#include<stdlib.h>             // kullanýcýdan sayýlarý alýr ve her bir sayýyý alýr almaz, o sayýnýn 3 veya 5'e bölünüp bölünmediðini kontrol eder.                             
#include<stdio.h>        	  //Eðer sayý 3 veya 5'e bölünüyorsa, bu sayý dinamik olarak büyüyen bir bellek alanýnda saklanýr. Kullanýcý negatif bir sayý girene kadar bu iþlem devam eder. 
                             //Daha sonra, program 3 veya 5'e bölünen tüm sayýlarý ekrana yazdýrýr.
                                                  
int main()
{
	int sayi,*p1=NULL,sayac=0,i;
	
	printf("sayi giriniz:");
	scanf("%d",&sayi);
	
	while(sayi>=0)
	{
		
		if(sayi%3==0 || sayi%5==0)
		{
			sayac++;
			p1=(int*)realloc(p1,sayac*sizeof(int));
			*(p1+sayac-1)=sayi;
		}	
		
		
		printf("sayi giriniz:");
		scanf("%d",&sayi);	
	}
    
	printf("\n3 veya 5e bolunenler:\n");		
	for(i=0;i<sayac;i++)
	{
		printf("%d\n",*(p1+i));
	}
	
	free(p1);
}
