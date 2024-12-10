#include <stdio.h>
void nhap(int hang, int cot)
{
	int arr[hang][cot]; 
	for (int i=0; i<hang; i++)
	{
		for (int j=0; j<cot; j++)
		{
			printf ("moi ban nhap arr[%d][%d]",i,j);
			scanf ("%d",&arr[i][j]); 
		 } 
    }
	for (int i=0; i<hang; i++)
	{
		for (int j=0; j<cot; j++)
		{
			printf ("%d ",arr[i][j]); 
		 } 
		 printf ("\n"); 
    }  
} 
int main()
{
	int hang, cot;
	printf ("moi ban nhap so hang:");
	scanf ("%d",&hang);
	printf ("moi bna nhap so cot:");
	scanf ("%d",&cot);
	int arr[hang][cot];
	nhap(hang,cot);
	return 0; 
}
