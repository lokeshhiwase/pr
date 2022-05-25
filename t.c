
#include <stdio.h>
#include <conio.h>
        void
        main()
{
    double p[3], c = 1;
    int k = 0, j, res, res1, now, now1, con, i;
    for (i = 0; i < 3; i++)
    {
        p[i] = 0;
    }
    printf("\nWhich process do you want to start?\n");
    printf("p[%d] OR p[%d] OR p[%d]", k, k + 1, k + 2);
    printf("\nEnter the process no.(0/1/2):\n");
    scanf("%d", &j);
    p[j] = 0.5;
    c = c - p[j];
    printf("\nDoes process C(controller) invokes any other process:\n For Yes-Press 1\nFor No-Press 0\n");
    scanf("%d",&res);
  if(res==1)
 {
        printf("\nWhich process will it invoke(1 OR 2):\n");
        scanf("%d", &now);
        p[now] = 0.25;
        c = c - 0.25;
 }
printf("\nDoes process C(controller) invokes any other process:\n For Yes-Press 11\nFor No-Press 0\n");
scanf("%d",&res1);
if(res1==1)
{
        printf("\nWill it invoke(1 OR 2):\n");
        p[now] = 0.25;
        c = c - 0.25;
}
for(i=0;i<3;i++)
{
        printf("\nIs Process p[%d] is completed:?\nfor yes-press 1\nfor No-press 0\n", i);
        scanf("%d", &con);
        if (con == 1)
        {
            c = c + p[i];
        }
}
if(c==1)
{
        printf("\nAll Processess are COMPLETED");
        }
else
{
        printf("\nSome Process is NOT Complete");
        }
getch();
}
