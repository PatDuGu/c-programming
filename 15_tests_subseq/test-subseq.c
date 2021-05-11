#include <stdio.h>
#include <stdlib.h>

size_t maxSeq (int * array, size_t n);

int main(){
  int array1[]= {1, 2, 3, 1};
  int array2[]= {1, -3, 2, 5, 7};
  int array3[]= {1};
  int array4[]= {1, 1, 1, 1, 3, 4, 1};
  int array5[]= {3, 6, 1, 2, 3, 24, -1, 100, 200, 1000};
  
  if (maxSeq(NULL, 0)) {
    printf("Failed on NULL\n");
    exit(EXIT_FAILURE);
  }
  if (maxSeq(array1, 0)) {
    printf("Failed on 1,2,3,1 for NULL\n");
    exit(EXIT_FAILURE);
  }
  if (maxSeq(array1, 4) != 3) {
    printf("Failed on 1,2,3,1\n");
    exit(EXIT_FAILURE);
  }
  if (maxSeq(array2, 5) != 4) {
    printf("Failed on 1,-3,2,5,7\n");
    exit(EXIT_FAILURE);
  }
  if (maxSeq(array3, 1) != 1) {
    printf("Failed on 1\n");
    exit(EXIT_FAILURE);
  }
  if (maxSeq(array4,7) != 3) {
    printf("Failed on 1,1,1,1,3,5,1\n");
    exit(EXIT_FAILURE);
  }
  if (maxSeq(array5, 10) != 4) {
    printf("Failed on 6, 3, 1, 2, 3, 24, -1, 100, 200, 1000\n");
    exit(EXIT_FAILURE);
  }
  return EXIT_SUCCESS;




}
