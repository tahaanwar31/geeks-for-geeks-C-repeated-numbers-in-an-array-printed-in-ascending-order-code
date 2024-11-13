#include <stdio.h>
int main()
{
	//took input in this part
	int n;
	printf("Enter the number of elements you want the array to contain: ");
	scanf("%d",&n);
	int array[n];
	for (int i=0;i<n;i++)
	{
		printf("Enter the element on index number %d\n",i);
		scanf("%d",&array[i]);
	}
	
	printf("-----------------------------------------\n");
	
	//checked which number was repeated in the array and added it to the new array
	int last=0,sortedarray[n],count=0;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (array[i]==array[j])
			count++;
		}
		if (count>=2)
		{
			int alreadyadded=0;
			for (int k=0;k<last;k++)
			{
				if (sortedarray[k]==array[i])
				{
					alreadyadded=1;
					break;
				}
			}
			if (alreadyadded==0)
			{
				sortedarray[last]=array[i];
				last++;
			}
			
		}
		count=0;
	}
	
	//applied bubble sort on the sorted array 
	int temp;
	if (last>0)
	{
		for (int i=0;i<last;i++)
		{
			for (int j=0;j<last-1;j++)
			{
				if (sortedarray[j]>sortedarray[j+1])
				{
					temp=sortedarray[j];
					sortedarray[j]=sortedarray[j+1];
					sortedarray[j+1]=temp;
				}
			}
		}
	}
	
	//printed the sorted array
	for (int i=0;i<last;i++)
	{
		printf("%d\n",sortedarray[i]);
	}
}