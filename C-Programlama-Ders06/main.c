#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	int number1=5541554;
	char yazi[]="merhaba";
	printf("YAZI");

	puts("Yazi2");  // Karakter dizilerini yazd�r�rs
	puts("Yazi3");
	gets("");   //Karakter dizilerinin d��ardan veri giri�i yap�lmas�n� sa�lar.
	
	//Formatl� ��kt�
	printf("%550d",number1);
	
	float number2 = 54545454.5495454;
	//printf("%8.2f",number2);
	printf("%7.5f",number2);
	
	//printf("%40s",yazi);
	
	//Girilen sayini pozitif yada negatif oldu�u 
	int sayi;
	printf("Bir sayi giriniz : ");
	scanf("%d",&sayi);
	
	if(sayi<0){
		printf("Girdi�iniz sayi negatif \n");
	}
	else{
		printf("Girdi�iniz sayi pozitif \n");
	}
	
	getchar();  // konsol ekran�n� bekletilmesini sa�lar
	

	//Girilen sayi tek mi �ift mi 
	if(sayi %2 ==0){
		printf("Girdi�iniz sayi �iftir \n");
	}
	else {
		printf("Girdi�iniz sayi tektir");
	}	*/
	
	int sayi4 ;
	int sayi2 ;
	int sayi3 ;
	int enbuyuk;
	printf("Sayilari giriniz: ");
	scanf("%5d  %20d  %40d",&sayi4,&sayi2,&sayi3);
	
	if((sayi4 > sayi2) && (sayi4>sayi3)){
		enbuyuk = sayi4;
	}
	else if ((sayi2 > sayi4) && (sayi2 > sayi3)){
		enbuyuk = sayi2;
	}
	else {
		enbuyuk = sayi3;
	}
	printf("En buyuk sayi %20d",enbuyuk);
		getchar();  // konsol ekran�n� bekletilmesini sa�lar

}
