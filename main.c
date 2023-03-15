#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int elemanSayisi;
	printf("lutfen olusacak dizinin kac elemanlý oldugunu giriniz: ");
	scanf("%d",&elemanSayisi);
	int sayiDizisi[elemanSayisi];
	srand(time(NULL));
	int enKucuk,i;
	
	
	for(i=0;i<elemanSayisi;i++){
		sayiDizisi[i]=rand()%100;
		printf("%d",sayiDizisi[i]);
		
	}
	
	enKucuk=sayiDizisi[0];
	printf("\n");
	
	for(i=0;i<elemanSayisi;i++){
		if(sayiDizisi[i]<enKucuk){
			enKucuk=sayiDizisi[i];
		}
	}	
	printf("dizinin en kucuk elemani: %d",enKucuk);	
	
	
	
	return 0;
}
