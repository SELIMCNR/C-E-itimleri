#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Girilen iki say�n� ortalamas�
	float sayi ;
	float sayi2 ;
	float ort;
	
	printf("Sayiyi giriniz: \n ");
	scanf("%f",&sayi);     //d��ardan veri alma i�lemi 
	printf("Girilen sayi: %f \n",sayi);
	
	printf("�kinci sayiyi giriniz: \n");
	scanf("%f",&sayi2);
	printf("�kinci girilen sayi : %f \n",sayi2);
	ort = (sayi+sayi2)/2;
	
	printf("Ortalama: %f",ort);
	
	
	
	// ��gen alan ve �evre hesab�
	int kenaruzunluk ; 
	int yukseklik;
	int alan ;
	int cevre;
	
	printf("Kenaruzunlu�u giriniz: \n");
	scanf("%d",&kenaruzunluk);
	printf("Kenaruzunlu�u: %d |\n",kenaruzunluk);
	
	printf("Y�kseklik de�erini giriniz: \n");
	scanf("%d",&yukseklik);
	printf("Y�kseklik : %d \n",yukseklik);
	
	alan = (yukseklik*kenaruzunluk)/2;
	cevre= kenaruzunluk * 3 ;
	
	
	printf("�cgen alani : %d \n",alan);
	printf("�cgen cevresi: %d",cevre);
	
	
	// vize ve final not hesab�
	
	
	float vize ;
	float final ;
	float ort1;
	
	printf("Vize notunu giriniz :  \n");
	scanf("%f",&vize);
	printf("Vize notunuz: %f \n",vize);
	
	printf("Final notunuz giriniz: \n ");
	scanf("%f",&final);
	printf("Final notunuz: %f \n",final);
	
	ort1=vize*0.4 + final*0.6;
	
	printf("Ortalaman�z: %f",ort1);
	
	
	
	//Yar��ap� girilen dairenin �evre ve alan hesab� 
	const float pi=3.14 ; 
	float yaricap;
	float cevre1 ;
	float alan1;
	
	printf("Yaricapi giriniz: \n ");
	scanf("%f",&yaricap);
	printf("Yaricapiniz: %f \n",yaricap);
	
	alan = pi*yaricap*yaricap;
	cevre1=2*pi*yaricap;
	
	printf("Daire alan�: %f \n",alan1);
	printf("Daire cevresi: %f \n",cevre1);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
