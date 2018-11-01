/* 一个比赛，题库内有N道题，每次选出s道，回答者只要会一道就能通过， 
已知回答者会A道题，求其通过概率p。 
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void)
{
	int x, N, A, s;//s:每次选出来的题，N:测试数据，x:会的题的数量，A:题库数量 
	printf("输入题库数量，会的题的数量，每次选出的题数和测试组数: "); 
	scanf("%d%d%d%d",&A,&x,&s,&N);
	int i,j;
	int r[s];
	float z,p;
	z=0;//记录会的次数 
	srand((unsigned)(time(NULL)));
	for(i=0;i<N;i++)
	{
		for(j=0;j<s;j++)
		{
			r[j]=(rand()%(A-1));
			if(r[j]<=(x-1))
    		{z+=1;
    		break;} 
		}
	}
	p=z/N;
	printf("%f%%",p*100);
    getchar(); 
    getchar(); 
}
