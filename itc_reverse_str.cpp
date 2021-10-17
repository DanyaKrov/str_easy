#include "str_easy.h"

string itc_reverse_str(string str){
    string answer = "";
    for (int smth_important = 1; smth_important < itc_len(str) + 1; smth_important++)
        answer += str[itc_len(str) - smth_important];
    return answer;
}
