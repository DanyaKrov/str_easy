#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num) {
    string answer = "";
    for (int i = 0; i < num; i++)
        answer += str1[i];
    for (int i = 0; str2[i] != '\0'; i++)
        answer += str2[i];
    for (int i = num; str1[i] != '\0'; i++)
        answer += str1[i];
    return answer;
}
