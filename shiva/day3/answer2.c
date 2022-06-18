// 21doc, day 3, Shiva

//method 1
/*int main()
{
	int i,j,k;
	int arr[10], c=0;
	arr=[0,0,3,0,3,9,3,9,2,0];// assuming array is of size 10

	for(i=0,i<10,i++)
	{
		c=0;
		for(j=0,k=10; j<k+1; j++)
		{
			if(i!=j)
			{
				if(arr[i]==arr[j])
				{
					c++;// add c if it is same
				}
			}
		}
		if(c==0)
		{
			printf("%d",arr[i]);//print if not same
		}
	}
	return 0;
}*/

//method 2 : slightly more efficient because instead of travering the enteire list over and over again, this will break out and print only when flag is not triggered
/*
int main()
{
	int i, j, k=10;
	int arr[10],fl=0;
	arr=[0,0,3,0,3,9,3,9,2,0];

	for(i=0;i<10;i++)
	{
		for(j=0;j<k;j++)
		{	
			fl=0;
			if(i==j):
			{
				fl=1;
				break;
			}
			if(fl==0)
			{
				printf("%d ",i)
			}
		}
	}
	return 0;
}
*/

// i have one more idea but for that i will need python. We can probably use set operations with operators but python is not allowed.
// curious to know what the solution is :D