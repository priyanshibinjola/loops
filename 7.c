/*       54321
	 4321
	 321
	 21
	 1  */

int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		   printf("%d",n-j-i);
		printf("\n");
	}
	return 0;
}
