#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//Girilen 3 say�dan en b�y���n� bulan program
	float ab,ba,cb,Enbuyuk;
	
	printf("3 tane sayi girin ");
	scanf("%f %f %f",&ab,&ba,&cb);
	printf("ilk sayi : %f \n �kinci sayi: %f \n Ucuncu sayi: %f \n",ba,ba,cb);
	
	if((ab>ba) && (ab>cb)){
		Enbuyuk= ab;
	}
	else if ((ba>ab) && (ba>cb)){
		Enbuyuk = ba;
	}
	else {
		Enbuyuk = cb;
	}
	printf("En buyuk sayi %f'dir.\n",Enbuyuk);
		

	//Vize final ortalama bulma.vize 0.4 , final 0.6 , kald�<60,60>gecti
	int vize,final;
	float ort;
	
	printf("Vize notunu giriniz : ");
	scanf("%d",&vize);
	printf("Vize notunuz: %d \n",vize);
	
	printf("Final notunu giriniz: ");
	scanf("%d",&final);
	printf("Final notunuzu: %d \n",final);
	
	ort=(float)vize * 0.4 + final *0.6;
	printf("Ortalaman�z : %f \n",ort); 
		
	if(ort>60){
		printf("Dersten ge�tiniz. ");
	}
	else {
		printf("Dersten kald�n�z.");
	}
	
	//2.dereceden denklemin katsay� k�klerini bulma 
	int a,b,c;
	float delta,x1,x2;
	printf("Klavyden sayi giriniz: ");
	scanf("%d %d %d ",&a,&b,&c);
	printf("Sayi1: %d \n Sayi2: %d \n Sayi3 : %d  \n",a,b,c);
	delta = sqrt(b*b - 4*a*c);
	printf("Delta sonucu : %f",delta);
	
	if(delta <0 ){
		printf("K�k yoktur \n");
	}
	else{
		x1 = (-b + delta)/(2*a);
		x2 = (-b - delta)/(2*a);
		printf("K�kler x1:%f \n x2= %f ",x1,x2);
	}

	
	// Emekli ayl��� vergi iadesini hesaplayan program
	float vergi;
	float alinanpara;
	
	printf("Kazand���n�z paray� girin  \n ");
	scanf("%f",&alinanpara);
	printf("Kazand���n�z miktar : %f \n",alinanpara);
	
	if (alinanpara>0 && alinanpara < 180){
	    vergi = alinanpara * 10 /100; 
	}
	else if (alinanpara > 180 & alinanpara < 360){
		vergi = alinanpara * 20 /100;
	}
	else if (alinanpara>360 && alinanpara < 600){
		vergi = alinanpara * 12 /100;
	}
	else if (alinanpara>600){
		vergi = alinanpara * 5 / 100;
	}
	printf("Vergi iadeniz : %5f",vergi);

	//�ckenar� girilen ��genin e�kenar,ikizkenar,�e�itkenar olma durumu
	int kenar1,kenar2,kenar3;
	
	
	printf("Kenar de�erlerini giriniz:  \n");
	scanf("%d %d %d ", &kenar1,&kenar2,&kenar3);
	printf("Kenar1 : %d \n Kenar2: %d \n  Kenar3: %d ",kenar1,kenar2,kenar3);
	
	if(kenar1 == kenar2 && kenar2 == kenar3){
		printf("�cgeniniz e�kenar ��gendir ");
	}
	else if ((kenar1 == kenar2 && kenar2 != kenar3) || (kenar1 != kenar2 && kenar2 == kenar3) || kenar1 == kenar3 & kenar2!=kenar1){
		printf("�cgeniniz ikizkenar ucgendir")		;
	}
	else{
		printf("�cgeniniz �e�itkenar �cgendir");
	}
	
	
	
	return 0;
}
