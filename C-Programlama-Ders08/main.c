#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
		//Basit bir hesap makinesi yap�n�z
		float sayi1;
		float sayi2;
		float sonuc1;
		char islem;
		
		printf("Sayi 1 de�erini giriniz: ");
		scanf("%f",&sayi1);
		printf("Sayi 1 : %f \n",sayi1);
		
		printf("Sayi 2 de�erini giriniz: ");
		scanf("%f",&sayi2);
		printf("Sayi 2: %f \n",sayi2);
		
		islem = '*';
		
		if(islem == '+'){
			sonuc1 = sayi1 + sayi2;
		}
		else if(islem == '-'){
			sonuc1 = sayi1 - sayi2;
		}
		else if(islem == '/'){
			sonuc1 = sayi1 / sayi2;
		}
		else if (islem == '*'){
			sonuc1 = sayi1 * sayi2; 
		}
		
		printf("�slem sonucunuz : %f",sonuc1);
		
		
	   //Switch -Case �oklu if else i�lemleri yerine kullan�l�r
	   	
		int s1;
		printf("1-4 aras� bir sayi giriniz: ");
		scanf("%d",&s1);
		printf("sayi1 = %d ",s1);
		
		switch(s1){
			case 1 : printf("Girdi�iniz sayi de�eri : %d",s1);
					break;
			case 2 : printf("Girdi�iniz sayi de�eri : %d ",s1);
					break;
			case 3 : printf("Girdi�iniz sayi de�eri : %d",s1);
					break;
			case 4 : printf("Girdi�iniz sayi de�eri : %d",s1);						
					break;
			default: printf("Girdi�inz sayi D�rten b�y�k");
					break;		
		}
		
		
		
		char harf;
		scanf("%c",&harf);
		
		switch(harf){
			case 'A': printf("Harf : %c",harf);
					break;
			case 'B': printf("Harf : %c",harf);
					break;
			case 'C': printf("Harf : %c",harf);
					break;	
			case 'D': printf("Harf : %c",harf);
					break;
			case 'E': printf("Harf : %c",harf);
					break;
			default : printf("Girdi�iniz de�er harf de�ildir");
					break;							
	}
		
	
		float x , y ;
		float sonuc ;
		char islem1 ;
		printf("Sayi1 : ");
		scanf("%f",&x);
		printf(" %f \n",x);
		printf("Sayi2: ");
		scanf("%f",&y);
		printf(" %f \n",y);
		
		
		scanf("%c",&islem1);
	

		
		switch(islem1){
			case '+' :  sonuc = x + y;
						printf("�slem sonucunuz : %f",sonuc);
					    break;
			case '-' : sonuc = x-y;
				       printf("�slem sonucunuz : %f",sonuc);
					   break;
			case '*':  sonuc = x*y;
					   printf("�slem sonucunuz : %f",sonuc);
					   break;
				     	
			case '/':
					   sonuc = x/y;				 		  
					   printf("�slem sonucunuz : %f",sonuc);
					   break;
			default : printf("Girdi�iniz de�er yanlis")	;
					  break;	   
		}	
		
	
	
	//Klaavyeden girilen ay�n hangi mevsimde oldu�unu bulan program
	short int ay;
	printf("Ayi giriniz: ");
	scanf("%d",&ay);
	
	switch(ay){
		case 3: 
		case 4:
		case 5: printf("�lkbahar mevsimindesin"); break;
		case 6:
		case 7: 
		case 8: printf("Yaz mevsimindesin ");break;	
		case 9: 
		case 10:
		case 11: printf("Sonbahar mevsimindesin");break;
		case 12:
		case 1:
		case 2: printf("K�� mevsimindesin");break;
		default:printf("Yanl�� ayi girdiniz");break;
			
	}
		
		getchar();  
		
	}
		
		
		
		


