#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a,b,b2,aux,q,r;
    scanf("%d%d", &a, &b);

    // scaneia a e b;

    if(a<0)   // se primeiro negativo
    {
        b2=b; // guarda b

        if(b<0) b2=b*-1;

        for(r=0; r<b2; r++)
        {
            aux=a-r;
            if(aux%b==0) break;
        }
        q=aux/b;
    }

    else
    {
        q=a/b;
        r=a%b;
    }
    printf("%d %d\n",q,r);
    return 0;
}
