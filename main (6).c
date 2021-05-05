#include <stdio.h>
#include <stdlib.h>
#define max 10

//dizi elemanlarini toplayalim..
int DiziToplam(const int *ptr,int size)  //burada const dizinin ilk elemaninin degistirilmeyecegini,sabit oldugunu ifade eder.
{
	int i,toplam=0;
	for(i=0;i<size;i++)
	{
		toplam+=*(ptr+i);      //ptr[i] de olur..
	}
	return toplam;
}
int main() {
   
   int i,dizi[max],boyut;
   printf("Dizinin boyutunu girin:");
   scanf("%d",&boyut);
   
   printf("DIZI ELEMANLARINI GIRIN:\n");
   for(i=0;i<boyut;i++)
   {
   	  printf("dizi[%d]=",i);
   	  scanf("%d",&dizi[i]);
   }
   system("cls");
   int sonuc=DiziToplam(dizi,boyut);
   printf("Dizi elemanlarinin toplami = %d",sonuc);
   
	return 0;
}