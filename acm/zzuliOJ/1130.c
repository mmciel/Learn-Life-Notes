#include <stdio.h>

int main()
{
	int i,j,n;
	scanf("%d", &n);
	int a[31][31];
	int bj = 0;

	for(i = 1;i<=n;++i)
	{
		a[i][1] = 1;
		a[i][i] = 1;

	}
	if(n>=3)
	{
		for(i = 3;i<=n;++i)
		{
			for(j = 2;j<=i-1;++j)
			{
				a[i][j] = a[i-1][j-1]+a[i-1][j];
			}
		}
	}
	for(i = 1;i<=n;++i)
	{
		for(j = 1;j<=i;++j)
		{
			if(bj == 0)
            {
                printf("%d", a[i][j]);
                bj = 1;
            }

			else
			printf(" %d", a[i][j]);

		}
		printf("\n");
		bj = 0;

	}


	return 0;
}
