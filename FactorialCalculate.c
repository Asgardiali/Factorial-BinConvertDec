#include <stdio.h>


int main(void)													//ana foksiyonu baþlattým.
{
   int sayi,a=1,i=1;											// deðiþkenleri tanýmladým.
   int e;
   

   printf("Please enter your number for factorial:");			//faktöriyeli alýnacak sayýyý kullanýcýdan aldým.
   scanf("%d",&sayi);
   
   if(sayi<=0){													//alýnan sayýnýn pozitif olup olmadýðýný kontrol ettim.
   	
 	gel:  	printf("Please again enter your number for factorial: ");//faktöriyeli alýnacak sayýyý kullanýcýdan aldým.
   	scanf("%d",&sayi);
	   if(sayi<=0)												//tekrardan alýnan sayýnýn pozitif olup olmadýðýný kontrol ettim.
	  goto gel; 												//alýnan sayý tekrardan pozitif deðilse tekrar girilmesi için goto komutu ile yukarý satýra atladým.											
	  else{
	  	goto devam;
	  }  	
   }
   else{ 

  devam: while(i<=sayi)											//faktoriyel almasý için gerekli while döngüsünü oluþturdum.
   {
       a=a*i;
       i++;
   }

    printf("\n\n%d!= %d ",sayi,a);									//sonucu ekrana yazdýrdým.
    
}return 0;
}
