#include<stdio.h>
#include<conio.h>


int main(){
	// Bu bir a��klama sat�r�d�r 
	/*
	Bu bir 
	�oklu 
	A��klama sat�r�d�r
	*/
	// Tam Say� veri Tipleri 
	//�nt   2byte alan kaplar 
	int sayi  = -32768;
	int sayi_2 = 32766;
	printf("%d",sayi);
	printf("%d",sayi_2);
	
	//Ondal�kl� say� veri tipleri 
	//Float  4 byte alan tutar
	float number = 37.57;
	printf("\n %f",number);
	
	//Double 8 byte alan tutar
	double number1 = 4548.544;
	printf("\n %lf",number1);
	
	
	//Eklemeli tipler
	// short 
	//Long 
	// signed 
	// unsigned
	//Short int 2 byte alan tutar
	short int number2 = 32150;
	printf("%d",number2);
	
	//Long int 4 byte alan tutar
	long int number3 = 32766666;
	printf("\n %ld",number3);
	
	//signed i�aretli 
	signed int number4 = 5154;
	printf("%u",number4);
	
	// unsigned i�aretsiz
	unsigned int number5 = 5165;
	printf("\n %u",number5);
	
	
	//Char karakter veri tipi 1 byte alab tutar
	char mesaj[]="Hello world";
	printf("\n %s",mesaj); // \n sat�r bo�luku verir , \t s�t�n bo�lu�u verir.
	
	
	char mesaj2[] = "Hello 2.world";
	printf("\t %s",mesaj2);
	
}
