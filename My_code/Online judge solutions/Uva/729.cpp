#include<stdio.h>
char temp[20];
int arr[130],len;
void perm(int index)
{
   int i;
   if(index==len)
   {
      printf("%s\n",temp);
      return;
   }
   for(i=47;i<124;++i)
      if(arr[i])
      {
         temp[index]=i;
         --arr[i];
         perm(index+1);
         ++arr[i];
      }
}
int main()
{
   int n,t=0;
   scanf("%d",&n);
   while(n--)
   {
        int x,y,i;
      for(i=47;i<124;++i)
          arr[i]=0;
	  len=0;
         scanf("%d %d",&x,&y);
		 for(i=0;i<x-y;i++)
		 {
		   ++arr[48];
		   ++len;
		 }
		 for(i=x-y;i<x;i++)
		 {
		   ++arr[49];
		   ++len;
		 }
	
  //    for(len=0;(ch=getchar())!='\n';++len)
               // ++arr[ch];

    if(t>0)
   printf("\n");
	t++;
      temp[len]='\0';
      perm(0);
        
   }
   return 0;
}