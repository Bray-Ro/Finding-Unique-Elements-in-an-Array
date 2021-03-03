#include <stdio.h>


int SEARCH_ARRAY(unsigned int ARRAY[255], int ARRAY_LENGTH, int TARGET) {
        int INDEX = 0;
        //printf("index:%d\n", INDEX);


        while (INDEX < ARRAY_LENGTH) {
                //printf("ooooo\n");
                if (ARRAY[INDEX] == TARGET) {

                        return INDEX;
                }
                INDEX++;
        }
        //printf("index:%d\n", INDEX);
        return -1;

}

void FIND_UNIQUE_ELEMENTS(unsigned int array[500], int array_length) {
  int i = 0;
  unsigned int set[500];
  int set_index = 0;
  while (i < array_length) {
    if (SEARCH_ARRAY(set, array_length, array[i]) == -1) {
        set[set_index] = array[i];
        printf("%d,", set[set_index]);
        set_index++;
    }

    i++;
  }
  
}

int main(void) {
  unsigned int ARRAY[500] = {1, 1, 2, 1, 3, 3, 4};
  int array_len = 7; 
  FIND_UNIQUE_ELEMENTS(ARRAY, array_len);



  return 0;
}
