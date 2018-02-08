#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<string.h>

//void printn ( int n )
//{
//	int i;
//	for ( i=1; i<=n; i++ ){
//		printf("%d\n", i );	
//	}
//	return;
//}
void printn ( int n )
{
	if ( n ){
		printn( n - 1 );
		printf("%d\n", n );
	}
	return;
}


int main()
{
	int a;
	scanf("%d",&a);
	printn( a );
}