#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Operat�rler
	//Aritmetik Operat�rler
	int sayi1 = 20;
	int sayi2 = 20;
	int sonuc ;
	
	// + toplama i�levi g�r�r
	sonuc = sayi1 + sayi2 ;
	// - ��karma i�levi g�r�r
	sonuc = sayi1 - sayi2;
	// / b�lme i�levi g�r�r
	sonuc = sayi1 / sayi2;
	// * �arpma i�levi g�r�r
	sonuc = sayi1 * sayi2;
	// % b�l�mden kalan� bulma
	sonuc = sayi2 % sayi1; 
	printf("%d",sonuc);
	
	// art�rma operat�r�  ++ 
	sayi1 ++ ;
	printf("%d",sayi1);
	
	// azaltma operat�r� --
	sayi2 -- ;
	printf("%d \n",sayi2);
	
	//Mant�ksal operat�rler 
	int number1 = 20;
	int number2 = 10;
	int sonuc2;
	// && ve operat�r� 
	sonuc=number1<30 && number2<20;
	// ||veya operat�r�
	sonuc2 = number1 < 30 || number2 < 20;
	printf("%d",sonuc2);
	// ! de�il operat�r�
	int sonuc3;
	//ili�kisel operat�rler
	sonuc3 = number1 <= 50;
	printf("%d \n",sonuc3);
	
	// �ncelik s�ras� idi programlamada
	sonuc3 = ((3*5) / (2/1) ) > ((2*5)/(2/1)) ;
	
	// b2 - 4ac 
	int b=5; 
	int a=2;
	int c=3; 
	int z = 2500;
	int x = 40 ;
	int y = 50;
	int sonuc4;

	sonuc4 = sqrt(b*b- 4*a*c);
	printf("%d \n",sonuc4);
	
	// 2 k�k z / (2-x + y)
	int sonuc5;
	
	sonuc5 = sqrt(z) / (2-x+y);
	
	printf("%d",sonuc5);
	
	
	
	
	
	
	return 0;
}
