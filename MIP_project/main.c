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
    
    for (i=1;i<=b;i++)
    {
        printf("%1.2lf^%d = %1.2lf\n",a,i,o);
        
        (o=a*o);
        
    }
}

void nasobok()
{ int i;
    double o;
    double a;
    int b;
    
    printf("Napiste 2 cisla \n");
    scanf("%lf %d",&a,&b);
    
    i=1;
    o=a;
    
    for (i=1;i<=b;i++)
    {
        printf("%1.2lf * %d = %1.2lf\n",a,i,o);
        o=o+a;
    }
    
}

double tyzdenna_mzda(double money, double hod)
{
}


int main()                                   //HLAVNY PROGRAM MAIN
{
    char c;
    int n;
    int i;
    double mzda, hodiny,tyzden,celkovo;
    
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
                    celkovo=0;
                    tyzden=0;
                    
                    scanf("%d",&n);
                    
                    for (i = 0; i < n; i++)
                        
                    {
                        scanf("%lf %lf",&mzda,&hodiny);
                        
                        tyzden=tyzdenna_mzda(mzda,hodiny);
                        celkovo+=tyzden;
                        printf("Hod.mzda: %1.2lf Euro/hod, hodin: %1.2lf, spolu: %1.2lf Euro \n",mzda,hodiny,tyzden);
                        
                    }
                    
                    printf("Celkova mzda: %1.2lf Euro \n",celkovo);
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

