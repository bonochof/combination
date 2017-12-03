#include<stdio.h>

int calc( int n, int r ){
  if( n == r || r == 0 ) return 1;
  return calc( n - 1, r - 1 ) + calc( n - 1, r );
}

int main(){
  printf( "%d\n", calc( 4, 1 ) );
  printf( "%d\n", calc( 4, 2 ) );
  printf( "%d\n", calc( 4, 3 ) );
  printf( "%d\n", calc( 4, 4 ) );
  return 0;
}
