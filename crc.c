#include<stdio.h>
void division(int temp[],int gen[],int n,int r)
{
 for(int i=0;i<n;i++)
 {
     if (gen[0]==temp[i])
     {
         for(int j=0,k=i;j<r+1;j++,k++){
             if(!(temp[k]^gen[j]))
                 temp[k]=0;
             else
                 temp[k]=1;
         }
     } 
 }
}
int main()
{int n,r,message[50],gen[50],temp[50];
 printf("At Sender's End \n");
 printf("Enter the number of message bits : ");
 scanf("%d",&n);
 printf("Enter the number of generator bits : ");
 scanf("%d",&r);
 printf("\nEnter the message : ");
 for(int i=0;i<n;i++)
     scanf("%d",&message[i]);
 printf("\nEnter the generator : ");
 for(int i=0;i<r;i++)
     scanf("%d",&gen[i]);
 r--;
 for(int i=0;i<r;i++)
     message[n+i] = 0;
 for(int i=0;i<n+r;i++)
     temp[i] = message[i];
 division(temp,gen,n,r);
 printf("CRC : ");
 for(int i=0;i<r;i++)
 {
     printf("%d ",temp[n+i]);
     message[n+i] = temp[n+i];
 }
 printf("\nTransmitted Message : ");
 for(int i=0;i<n+r;i++)
     printf("%d ",message[i]);
 printf("\n\nAt Receiver's End ");
 printf("\nEnter the received message : ");
 for(int i=0;i<n+r;i++)
     scanf("%d",&message[i]);
 for(int i=0;i<n+r;i++)
     temp[i] = message[i];
 division(temp,gen,n,r);
 for(int i=0;i<r;i++)
 {
     if(temp[n+i])
     {
         printf("Error detected in received message.");
         return 0;
     } }
 printf("No error in received Message.\nReceived Message : ");
 for(int i=0;i<n;i++)
     printf("%d",message[i]);
 return 0;
}