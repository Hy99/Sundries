/* һ���������������N���⣬ÿ��ѡ��s�����ش���ֻҪ��һ������ͨ���� 
��֪�ش��߻�A���⣬����ͨ������p�� 
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void)
{
	int x, N, A, s;//s:ÿ��ѡ�������⣬N:�������ݣ�x:������������A:������� 
	printf("�������������������������ÿ��ѡ���������Ͳ�������: "); 
	scanf("%d%d%d%d",&A,&x,&s,&N);
	int i,j;
	int r[s];
	float z,p;
	z=0;//��¼��Ĵ��� 
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
