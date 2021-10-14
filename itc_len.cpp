#include "str_easy.h"

long long itc_len(string str)
{
    long long num = 0;
    while (str[num] != '\n'){
        num ++;
    }
    return num;
}
