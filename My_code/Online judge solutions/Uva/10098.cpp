#include<stdio.h>
#include<string.h>
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
   getchar ();
   while(n--)
   {
        int x,y,i;
      for(i=47;i<124;++i)
          arr[i]=0;
	  len=0;
         char ch;
      for(len=0;(ch=getchar())!='\n';++len)
                ++arr[ch];

    if(t>0)
   printf("\n");
	t++;
      temp[len]='\0';
      perm(0);

   }
   return 0;
}
