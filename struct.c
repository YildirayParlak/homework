#include<stdio.h>

struct ogrenci1
{
	char isim[15];
	char soyad[15];
	int numara;
	char adres[40];
};

struct ogrenci1 bir={"Halil","Dikoglu",9,"Aydin kusadasi davutlar mah."};

struct ogrenci2
{
	char isim[15];
	char soyad[15];
	int numara;
	char adres[30];
};

struct ogrenci2 iki={"Emirhan","Kaytakli",49,"Tekirdag corlu ilcesi"};

struct ogrenci3
{
	char isim[15];
	char soyad[15];
	int numara;
	char adres[40];
};

struct ogrenci3 uc={"Yildiray","Parlak",16,"Gaziantep sehitkamil zeytinli mah"};

struct ogrenci4
{
	char isim[15];
	char soyad[15];
	int numara;
	char adres[30];
};

struct ogrenci4 dort={"Deniz","Aykut",25,"Malatya dogansehir ilcesi"};

struct ogrenci5
{
	char isim[15];
	char soyad[15];
	int numara;
	char adres[30];
};

struct ogrenci5 bes={"Cemal","Gungor",42,"Konya aksehir ilcesi"};

int main ()
{
	printf("1. Ogrenci bilgileri\nIsim:%s\nSoyad:%s\nNumara:%d\nAdres:%s\n",bir.isim,bir.soyad,bir.numara,bir.adres);
	
	printf("*****************************\n");
	
	printf("2. Ogrenci bilgileri\nIsim:%s\nSoyad:%s\nNumara:%d\nAdres:%s\n",iki.isim,iki.soyad,iki.numara,iki.adres);
	
	printf("*****************************\n");
	
	printf("3. Ogrenci bilgileri\nIsim:%s\nSoyad:%s\nNumara:%d\nAdres:%s\n",uc.isim,uc.soyad,uc.numara,uc.adres);
	
	printf("*****************************\n");
	
	printf("4. Ogrenci bilgileri\nIsim:%s\nSoyad:%s\nNumara:%d\nAdres:%s\n",dort.isim,dort.soyad,dort.numara,dort.adres);
	
	printf("*****************************\n");
	
	printf("5. Ogrenci bilgileri\nIsim:%s\nSoyad:%s\nNumara:%d\nAdres:%s\n",bes.isim,bes.soyad,bes.numara,bes.adres);
	
	return 0;
}
	

