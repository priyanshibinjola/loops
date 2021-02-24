/*       1
	    21
	   321
	  4321
	 54321   */

int main()
{
	int i,j,n,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=0;k<n-i+1;k++) //spaces
		  printf(" ");
		for(j=i+1;j>0;j--)
		   printf("%d",j);
		printf("\n");
	}
	return 0;
}
