#include<stdio.h>
void CalculateWaitingTime(int at[],int bt[], int N)
{
	int wt[N];
	int sum = 0;
	wt[0] = 0;
	printf("PN\t\tAT\t\tBT\t\tWT\n\n");
	printf("1\t\t%d\t\t%d\t\t%d\n",at[0],bt[0],wt[0]);
	for (int i = 1; i < 5; i++) {
		wt[i] = (at[i - 1] + bt[i - 1]+ wt[i - 1]) - at[i];
		printf("%d\t\t%d\t\t%d\t\t%d\n",i+1,at[i],bt[i],wt[i]);
		sum+=wt[i];
	}
	int average;
	average = sum / 5;
	printf("\nAverage waiting time = %d\n",average);
}

int main()
{
	int N = 5;
	int at[] = { 0, 1, 2, 3, 4 };
	int bt[] = { 4, 3, 1, 2, 5 };
	CalculateWaitingTime(at, bt, N);
	return 0;
}
