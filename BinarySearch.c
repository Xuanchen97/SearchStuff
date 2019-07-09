

#include <stdio.h>

#define ARRAY_SIZE 7
int main() {

    // 1. Create a SORTED array
    int array[] = {40,50,60,70,80,90,100};

    // 2. What are you searching for?
    int searchValue = 70;

    // 3. Calculate the first, middle, and last positions of the array
    int first = 0;
    int last = ARRAY_SIZE-1;
    int middle = (first + last)/2;
    // 4. Make a variable to keep track of if the number was found
    int found = 0;

    // 5. Do the binary search algorithm

     while(first<=last){
         if (searchValue == array[middle]){
             found = 1;
             break;
         }else{
             // 5a. If searchValue == mid, then you found the number!
             //left or right?
             if (searchValue <array[middle]){
                 //you need to search left
                 // 5b. Otherwise:
                 //  - update positions to search left side
                 last = middle - 1;
                 middle=(first+last)/2;
             }else{
                 //  - update positions to search right side
                 first = middle + 1;
                 middle = (first+last)/2;
             }



         }
     }

    // 6. Print the results
    printf("Did you find %d?\n", searchValue);
    if (found == 0) {
        printf("NO\n");
    }
    else {
        printf("YES\n");
    }

} // end main