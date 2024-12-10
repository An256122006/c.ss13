#include <stdio.h>
int uoc(int a, int b)
{
	int ucln=1;
	int min=0;
	if (a < b)
	{
		min=a;
	} else if (a > b)
	{
		min=b;
	}
	for (int i=1; i<=min; i++)
	{
		if (a%i==0 && b%i==0)
		{
			ucln=i;
		}
	}
	return ucln;
}
int main()
{
	int a, b, ucln;
	printf ("moi nhap gia tri thu nhat:");
	scanf ("%d", &a);
	printf ("moi ban nhap gia tri thu hai:");
	scanf ("%d", &b);
	ucln=uoc(a,b);
	printf ("ucln la %d ",ucln);
	return 0;
}
