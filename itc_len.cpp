#include "str_easy.h"

long long itc_len(string str){
    int kol = 0;
    while (str[kol] != '\0'){
        kol += 1;
    } return kol;
}
