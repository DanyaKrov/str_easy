#include "str_easy.h"

string itc_reverse_str(string str){
    string answer = "";
    for (int smth_important = itc_len(str); smth_important >= 0; smth_important--)
        answer += str[smth_important];
    return answer;
}
