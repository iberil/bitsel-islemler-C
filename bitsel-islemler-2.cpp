#include<stdlib.h>             // kullan�c�dan say�lar� al�r ve her bir say�y� al�r almaz, o say�n�n 3 veya 5'e b�l�n�p b�l�nmedi�ini kontrol eder.                             
#include<stdio.h>        	  //E�er say� 3 veya 5'e b�l�n�yorsa, bu say� dinamik olarak b�y�yen bir bellek alan�nda saklan�r. Kullan�c� negatif bir say� girene kadar bu i�lem devam eder. 
                             //Daha sonra, program 3 veya 5'e b�l�nen t�m say�lar� ekrana yazd�r�r.
                                                  
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
