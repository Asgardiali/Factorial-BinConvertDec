#include <stdio.h>

int main() 														//ana foksiyonu ba�latt�m.
{
  int a, b, c, d, e, n, decimal;								//de�i�kenleri tan�mlad�m.

  printf( "Input a five digit integer in 1's and 0's: \n" );	//kullan�c�dan 0 ve 1 ile olu�an maximum 5 basamakl� binary say� girmesini istedim.
  scanf("%d", &n );

  a = n % 10;													//1.basama�a girilen say�y� elde ediyor.
  printf("a:%d",a);
  b = n / 10 % 10;												//2.basama�a girilen say�y� elde ediyor
  printf("b:%d",b);													
  c = n / 100 % 10;											    //3.basama�a girilen say�y� elde ediyor.
  printf("c:%d",c);													
  d = n / 1000 % 10;											//4.basama�a girilen say�y� elde ediyor.
  printf("d:%d",d);
  e = n / 10000;												 //5.basama�a girilen say�y� elde ediyor.
  printf("e:%d\n",e);
// bu b�l�mde ise gelen say� basamaklar�na g�re 2 nin kat� ile �arp�l�yor en son da ise toplan�yor ve decimal say� elde ediliyor.
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
