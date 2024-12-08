#include <stdio.h>
#include <string.h>
int main()
{
    char num[100];
    int val[6];
    int GCD_num,LCM_num;
    int i;
    int max_val = val[0];
    int min_val = val[0];
    printf("Please enter five numbers: ");
    fgets(num,sizeof(num),stdin);
    sscanf(num,"%d %d %d %d %d",&val[0],&val[1],&val[2],&val[3],&val[4]);

    for(int i = 0;i < 5;i++)
    {
        if(val[i]>max_val)
        {
            max_val = val[i];
        }
    }
    
    for(i = 0;i < 5;i++)
    {
        if(val[i]<min_val)
        {
            min_val = val[i];
        }
    }
    for(i = min_val;i>=1;i--)
    {
        if(val[0]%i==0 && val[1]%i==0 && val[2]%i==0 && val[3]%i == 0 && val[4]%i ==0)
        {
            GCD_num = i;
            break;
        }
    }
    for(i = max_val;i>=max_val;i++)
    {
        if(i%val[0]==0 && i%val[1]==0 && i%val[2]==0 && i%val[3] == 0 && i%val[4] ==0)
    {
            LCM_num = i;
            break;
        }
    }
    printf("LCM: %d\n",LCM_num);
    printf("GCD: %d\n",GCD_num);
    return 0;
}