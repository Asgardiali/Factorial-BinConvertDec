#include <stdio.h>


int main(void)													//ana foksiyonu ba�latt�m.
{
   int sayi,a=1,i=1;											// de�i�kenleri tan�mlad�m.
   int e;
   

   printf("Please enter your number for factorial:");			//fakt�riyeli al�nacak say�y� kullan�c�dan ald�m.
   scanf("%d",&sayi);
   
   if(sayi<=0){													//al�nan say�n�n pozitif olup olmad���n� kontrol ettim.
   	
 	gel:  	printf("Please again enter your number for factorial: ");//fakt�riyeli al�nacak say�y� kullan�c�dan ald�m.
   	scanf("%d",&sayi);
	   if(sayi<=0)												//tekrardan al�nan say�n�n pozitif olup olmad���n� kontrol ettim.
	  goto gel; 												//al�nan say� tekrardan pozitif de�ilse tekrar girilmesi i�in goto komutu ile yukar� sat�ra atlad�m.											
	  else{
	  	goto devam;
	  }  	
   }
   else{ 

  devam: while(i<=sayi)											//faktoriyel almas� i�in gerekli while d�ng�s�n� olu�turdum.
   {
       a=a*i;
       i++;
   }

    printf("\n\n%d!= %d ",sayi,a);									//sonucu ekrana yazd�rd�m.
    
}return 0;
}
