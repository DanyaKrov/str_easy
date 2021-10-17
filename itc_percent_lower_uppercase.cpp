#include "str_easy.h"

double itc_percent_lower_uppercase(string str){
    double lw = 0;
    double up = 0;
    for (int i = 0; i < itc_len(str); i++) {
        if (str[i] <= 'z' && str[i] >= 'a')
            lw++;
        else if (str[i] <= 'Z' && str[i] >= 'A')
            up++;
    }
    double answer = lw / up;
    return answer;
}
