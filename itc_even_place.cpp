#include "str_easy.h"

string itc_even_place(string str) {
    string ans;
    for (int i = 1; i =< itc_len(str); i++){
        if (i % 2 == 1)
            ans += str[i - 1];
    }
    return ans;
}
