#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mocnina()
{
    int i;
    double o;
    double a;
    int b;
    
    printf("Napiste 2 cisla \n");
    scanf("%lf %d",&a,&b);
    
    o=a;
    i=1;
    //printf("%1.2lf ^ %d = %1.2lf\n",x,i,o);
    
    for (i=1;i<=b;i++)
    {
        printf("%1.2lf^%d = %1.2lf\n",a,i,o);
        
        (o=a*o);
        
    }
}

void nasobok()
{
    
}


int main()                                   //HLAVNY PROGRAM MAIN
{
    char c;
    
    scanf("%c",&c);                         // cyklus pokiaľ nestlačíme 'k'
    if (c!='k')
    {
        while(c!='k')
        {
            switch (c)
            {
                case 'm':    //mocnina
                     mocnina;
                    break;
                    
                case 'n':     //nasobok
                    nasobok();
                    break;
                    
                case 't':     //tyzdenna mzda
               
                    break;
                    
                case 'h':   //histogram
                   
                    break;
                    
                    
                    
            }
            scanf("%c",&c);                   // vykoná funkciu a znova načíta ďalšie písmeno
        }
        
    }
    
    if ((c='k'))                  // ak písmeno 'k' ukončíme program vo funkcii
    {
       
    }
    
    
    return 0;
}

