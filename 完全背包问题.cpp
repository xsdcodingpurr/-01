#include <iostream>
using namespace std;
const int MAXN = 1010; 
int n , m;
int v[MAXN] , w[MAXN] ,f[MAXN];//数组需要定义在全局变量 不然不会初始化 会有脏数据存在 
int main()
{
	cin >> n >> m ;
	for(int i=1;i<=n;i++)
	{
		cin >> v[i] >> w[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1 ;j<=m;j++)
		{
			if (j>=v[i]){		
			f[j] = max(f[j],f[j-v[i]]+w[i]);
			}
		}
	}
	cout << f[m] << endl;
	return 0;
}
