#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

   int main()
  {
    int mas[100], i, n;
    int Kilkistplus=0;
    
    printf("N:");
      scanf("%d", &n);
        
        srand(time(NULL));
       
        for (int i = 0; i < n; i++)
    {
        mas[i] = rand() % 200 - 100;
         printf("\nmas[%d] = %d", i, mas[i]); 
    }
         
        for (int i = 0; i < n; i++) {
          if(mas[i] > 0)
            Kilkistplus++;
             
    }
         printf("\nKilkist(+): %d", Kilkistplus);	
         
         system("pause");
         return 0;
    }

