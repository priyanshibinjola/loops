/*     
    *********
	 *******
	  *****
	   ***
	    *
	 */

int main()
{
	int i,j,n,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=0;k<i;k++) //spaces
		  printf(" ");
		for(j=0;j<2*n-2*i-1;j++)
		   printf("*");
		printf("\n");
	}
	return 0;
}
