#include<stdio.h>
void main()
{
    int no,i,divsible_count,j,index=-1,m,count=0;
    scanf("%d",&no);
    int prime_num[no];

//finding odd numbers upto given no
    for(i=1; i<=no; i++)
   {
        divsible_count=0;
        for(j=1; j<=no; j++)
        {
            if(i%j==0)
                divsible_count++;
        }
        if(divsible_count==2)
        {
            index++;

            prime_num[index]=i;
             count++;
        }
    }
//display odd nos in pattern
    int limit=0,p,q;
    for(p=0;p<count;p++)
    {
        printf("\n");
        limit++;
        for(q=0;q<limit;q++)
        {
            printf("%d ",prime_num[q]);

        }
    }

 }
/*
Output

20

2
2 3
2 3 5
2 3 5 7
2 3 5 7 11
2 3 5 7 11 13
2 3 5 7 11 13 17
2 3 5 7 11 13 17 19
*/
