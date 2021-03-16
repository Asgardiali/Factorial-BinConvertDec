#include <stdio.h>

int main() 														//ana foksiyonu baþlattým.
{
  int a, b, c, d, e, n, decimal;								//deðiþkenleri tanýmladým.

  printf( "Input a five digit integer in 1's and 0's: \n" );	//kullanýcýdan 0 ve 1 ile oluþan maximum 5 basamaklý binary sayý girmesini istedim.
  scanf("%d", &n );

  a = n % 10;													//1.basamaða girilen sayýyý elde ediyor.
  printf("a:%d",a);
  b = n / 10 % 10;												//2.basamaða girilen sayýyý elde ediyor
  printf("b:%d",b);													
  c = n / 100 % 10;											    //3.basamaða girilen sayýyý elde ediyor.
  printf("c:%d",c);													
  d = n / 1000 % 10;											//4.basamaða girilen sayýyý elde ediyor.
  printf("d:%d",d);
  e = n / 10000;												 //5.basamaða girilen sayýyý elde ediyor.
  printf("e:%d\n",e);
// bu bölümde ise gelen sayý basamaklarýna göre 2 nin katý ile çarpýlýyor en son da ise toplanýyor ve decimal sayý elde ediliyor.
  if ( e == 1 ) 
    {
    e = 16;
    printf( "%d ", e );
    } 
	else {
      printf("%d ", e );
  }

  if ( d == 1 ) 
  {
    d = 8;
    printf( "%d ", d );
    } 
	else {
      printf("%d ", d );
  }

  if ( c == 1 ) 
  {
    c = 4;
    printf( "%d ", c );
    } 
	else {
      printf("%d ", c );
  }

  if ( b == 1 ) 
  {
    b = 2;
    printf( "%d ", b );
    } 
	else {
      printf("%d ", b );
  }

  if ( a == 1 ) 
  {
    a = a * 1;
    printf( "%d ", a );
    } 
	else {
      printf("%d ", a );
  }

  decimal = a + b + c + d + e;
  printf("\nBinary number is: %d\n", decimal );

  return 0;
}
