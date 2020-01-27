#include <stdio.h>

int stringToInt(char[] );
int main(){
    char str[10];
    float intValue;
    scanf("%s",str);
    intValue = stringToInt(str);
    return 0;
}

int stringToInt(char str[])
{
    int i=0,countpoint=0,divide=0;
    float result,sum=0;
    while(str[i]!='\0')
    {
        if(str[i]==46){
            divide=countpoint;
            i++;
        }
        else if(str[i]< 48 || str[i] > 57)
            {
                printf("Gagal konversi\n");
            return 0;
            }
        
        else
            {
                sum = sum*10 + (str[i] - 48);
            i++;
            }
        countpoint++;
    }
    if(divide!=0){
        countpoint-=divide;
        divide=1;
        for(int j=0;j<countpoint-1;j++)
        {
            divide*=10;
        }
        result=sum/divide;
        printf("%.12f\n", result);
    }
    else{
        printf("%.10g\n", sum);
    }
    return 0;
}
