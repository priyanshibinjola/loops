/*       *
	    **
	   ***
	  ****
	 *****   */

int main()
{
	int i,j,n,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=n-i;k>=0;k--)
		  printf(" ");
		for(j=1;j<=i;j++)
		   printf("*");
		printf("\n");
	}
	return 0;
}
