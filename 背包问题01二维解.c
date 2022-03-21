#include <stdio.h>

int MAXN = 1005;
int v[1005];
int w[1005];
int f[1005][1005];
int i , j ,n ,m;

int main(){
	scanf("%d %d",&n,&m);//接收输入的物品数量和背包容积
	f[0][0] = 0;
	for (i=1;i<=n;i++) 
	{
		scanf("%d %d",&v[i],&w[i]);		
	}
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=m;j++)
		{
			if (j<v[i]) f[i][j] = f[i-1][j];
			else f[i][j] = max(f[i-1][j],f[i-1][j-v[i]]+w[i]);
		}
	}
	printf("最大可携带价值为：%d",f[n][m] );
	return 0 ;
}
int max(int a,int b)
{
	if (a>=b) return a;
	else return b;
}
