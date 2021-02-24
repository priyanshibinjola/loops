/*      *
	   ***
	  *****
	 *******
	*********       */

int main()
{
	int i,j,n,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=0;k<n-i-1;k++) //spaces
		  printf(" ");
		for(j=0;j<i*2+1;j++)
		   printf("*");
		printf("\n");
	}
	return 0;
}
