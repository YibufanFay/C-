#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int iq = 0;
    int eq = 0;
    int bq = 0;
   /* int ret3 = scanf("%d %d %d", &iq, &eq,&bq);
    int ret = scanf("%d %d", &iq, &eq);
    int ret1 = scanf("%d", &iq);*/
    while (scanf("%d", &iq) == 1)
    {
        if (iq >= 140)
        {
            printf("Genius\n");
            printf("\n");

        }
     
        else
        {
            printf("bushiu\n");
            printf("\n");
        }
    }
  /*  printf("%d %d %d\n", ret, ret1,ret3);*/
    return 0;
}