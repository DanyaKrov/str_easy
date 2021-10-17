#include "str_easy.h"

int itc_max_char_on_end(string str){
    int max = 0;
    int max1 = 0;
    int i = 0;
    while (str[i] != '\0'){
        if (str[i] >= '0' && str[i] <= '9'){
            max1++;
        }
        else{
            if (max1 > max)
                max = max1;
            max1 = 0;
        }
        i++;
    }
    if (max1 > max)
        max = max1;

    return max;
}
