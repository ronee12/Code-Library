#include<stdio.h>

int bubSort(int arr[],int length)
{
   int temp;
   for(int i=length-1;i>=0;i--)
   {
      
      for(int k=0;k<i;k++)
      {
         if(arr[k]>arr[k+1])
         {
             temp=arr[k+1];
            arr[k+1]=arr[k];
            arr[k]=temp;
         }
      }   
   }
   return 0;
}

int main()
{
   int N,path[100];
   scanf("%d",&N);
   for(int k=0;k<N;k++)
   {
      int Case[100],n;
      scanf("%d",&n);
      for(int i=0;i<n;i++)
      {
         scanf("%d",&Case[i]);   
      }

      bubSort(Case,n);
      path[k]=0;

      for(int m=0;m<n-1;m++)
      {
         int temp=((Case[m])-(Case[m+1]));
         if(temp<0)
            temp*=-1;
         path[k]+=temp;
      }  
	  printf("%d\n",path[k]);

   }

   /*for(int m=0;m<N;m++)
   {
      printf("%d\n",path[m]);
   }*/

   return 0;

}