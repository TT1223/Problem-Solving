#include <stdio.h>

    int main()
    {
        int w, d;
        scanf>>w;
        if(1<=w && w<=100)
        {
            d=w-2;

            if(d>0){
                    if(d%2==0)
            {
                printf("YES");
            }
            else
            {
                printf("NO");
            }
            }
            else
            {
                printf("NO");
            }
        }
        return 0;
    }
