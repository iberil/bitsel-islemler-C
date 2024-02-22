#include<stdio.h>               //while döngüsünü kullanarak 10 tabanýndaki sayiyi 2 tabanina donusturme
#include<stdlib.h>

int main()
{
	int sayi,kalan;
	int i,dizi[100];
	int index=0;
	
	printf("sayi giriniz:");
	scanf("%d",&sayi);
	
	while(sayi>1)
	{
		kalan=sayi%2;
		dizi[index++]=kalan;
		sayi=sayi/2;

	}
	
	printf("1");
	for(i=index-1;i>=0;i--)
	{
		printf("%d",dizi[i]);
	}

	
	
}
