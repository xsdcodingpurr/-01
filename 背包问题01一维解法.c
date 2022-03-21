 #include <stdio.h>
 
 int main()
 {
 	int f[1005],v[1005],w[1005];
 	int n , m;
 	scanf("%d %d", &n,&m);
 	int i , j;
 	f[0] = 0;//C语言必须初始化数组，不然会有不知道是什么东西存在里面 
 	for (i=1;i<=n;i++) {
	scanf("%d %d",&v[i],&w[i]);//input every ting's volume and worth 
	f[i] = 0;//初始化数组 
	 }
 	for (i=1;i<=n;i++)
 	{
 		for (j=m;j>=0;j--)
 		{
 			if (j>=v[i])
 			{
 				f[j] = max(f[j],f[j-v[i]]+w[i]);//state transfer equation
			 }
		 }
	 }
	
	printf("%d",f[m]);
 }
 int max(int a,int b)
{
	if (a>=b) return a;
	else return b;
}
 
