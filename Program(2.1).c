/* C implementation of Algorithm 2.1 */

#include<stdio.h>
#include<conio.h>

void main()
{
	int DATA[10]={22, 65, 1, 99, 32, 17, 74, 49, 33, 2};
	int N, LOC, MAX, K ;

	N = 10 ;
	K = 0;
	LOC = 0;
	MAX = DATA[0];

	loop :

	K = K+1 ;

	if(K==N)
	{
		printf("LOC = %d, MAX %d", LOC, MAX);
		getch();
	}

	if(MAX<DATA[K])
	{
		LOC = K;
		MAX = DATA[K];
	}

	goto loop;

}