#include<stdio.h>
int main()
{
   int count[6],mark,vo,i;
   for(i=0;i<=5;i++)
   {
       count[i]=0;
   }
   printf("Enter total voters :- \n");
   scanf("%d",&vo);
   for(i=0;i<=vo-1;i++)
   {
       printf("Enter your vote to candidate \n 1-BJP\n 2-Congress\n 3-AAP\n 4-Shivsena\n 5-anya party:- \n");
       scanf("%d",&mark);
       if(mark==1)
       {
           ++count[0];
       }
       else if(mark==2)
       {
           ++count[1];
       }
       else if(mark==3)
       {
           ++count[2];
       }
       else if(mark==4)
       {
           ++count[3];
       }
       else if(mark==5)
       {
           ++count[4];
       }
       else
       {
           ++count[5];
       }
   }
   printf("Candidate BJP :- %d\n",count[0]);
   printf("Candidate Congress :- %d\n",count[1]);
   printf("Candidate AAP :- %d\n",count[2]);
   printf("Candidate Shivsena :- %d\n",count[3]);
   printf("Candidate anya party :- %d\n",count[4]);
   printf("Spoilt vote :- %d\n",count[5]);
   if (count[0]>count[1] && count[0]>count[2] && count[0]>count[3] && count[0]>count[4]) {
     printf("Winner of election is BJP candidate with %d vote",count[0]);
   }
   else if (count[1]>count[0] && count[1]>count[2] && count[1]>count[3] && count[1]>count[4]) {
     printf("Winner of election is Congress candidate with %d vote",count[1]);
   } else if (count[2]>count[0] && count[2]>count[1] && count[2]>count[3] && count[2]>count[4]) {
     printf("Winner of election is AAP candidate with %d vote",count[2]);
   }
   else if (count[3]>count[4] && count[3]>count[1] && count[3]>count[2] && count[3]>count[0]){
     printf("Winner of election is Shivsena candidate with %d vote",count[3]);
   }
   else if (count[4]>count[1] && count[4]>count[0] && count[4]>count[2] && count[4]>count[3]){
     printf("Winner of election is anya party candidate with %d vote",count[4]);
   }
   else
   printf("None is winner\n");
   return 0;
}
