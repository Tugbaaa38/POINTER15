#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

// GOSTERICI PARAMETRE DEGISKENLERININ TANIMLANMASI
// bir fonkisyonun parametre degiskeninin gosterici(pointer) olmasi durumunda iki sekil tanim vardir.
//  1---> void fonk(int *ptr);
//  2---> void fonk(int ptr[]];
// iki fonksiyon arasinda hic bir farklilik yoktur.
// bir dizinin baslangic adresi isteniyorsa 2.bicim tercih edilir.
// bir dizi tanimlayalim ve bu diziye rastgele elemanlar yerlestirelim..
void RastgeleDizi(int *ptr,int size,int max)
{
	srand(time(NULL));
	int i;
	for(i=0;i<size;i++)
	{
		ptr[i]=rand()%(max+1);
		printf("%d\t",ptr[i]);
	}
}
int main() {

	int dizi[SIZE];
	int boyut,i,maxDeger;
	printf("Dizinin maxsimum degeri ne olsun?=");
	scanf("%d",&maxDeger);
	printf("Dizinin boyutu ne olsun?=");
	scanf("%d",&boyut);
	
	RastgeleDizi(dizi,boyut,maxDeger);	
	
	return 0;
}