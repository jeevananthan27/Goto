#include <stdio.h>


int main()

{

    int i=1;

    //goto statement

    c:

    printf("%d\n",i);

    if(i<=9)

    {
        i=i+1;

        goto c;

    }


    return 0;

}