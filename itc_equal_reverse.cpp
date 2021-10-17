#include "str_easy.h"

bool itc_equal_reverse(string str) {
    bool answer = false;
    if (str == itc_reverse_str(str))
        answer = true;
    return answer;
}
