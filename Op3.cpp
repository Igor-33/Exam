#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) { 
    int N;
    
    printf("Vvediti nomer mesatsa:");
      scanf("%d", &N);
    
    if (N <= 2, N == 12) {
       printf("winter\n");
  }   
    if (N > 2 && N <= 5) {
       printf("sprint\n");
  }   
    if (N > 5 && N <= 8) {
       printf("summer\n");
  }
    if (N > 8 && N <= 11) {
       printf("autumn\n");
  }
    if (N > 12) {
      printf("Net takogo mesitsa\n");
  }
    system("PAUSE");
    return 0;
}
