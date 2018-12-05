#include <stdio.h>
#include <stdlib.h>
#include <math.h>


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
                    break;
                    
                case 'n':     //nasobok
                   
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

