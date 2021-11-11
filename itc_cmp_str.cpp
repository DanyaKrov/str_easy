#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num) {
    if (num < 0 || itc_len(str1) < num + 1)
        return str1;
    string answer = ""; int kol = 0;
    int i1 = 0;
    while (i1 < num && kol != itc_len(str1)){
         answer += str1[i1];
         i1++; kol++;
    }
    int i = 0;
    while (str2[i] != '\0' && kol != itc_len(str1)){
         answer += str2[i];
         i++; kol++;
    }
    while (str1[i1] != '\0' && kol != itc_len(str1)){
         answer += str1[i1];
         i1++; kol++;
    }
    return answer;
}
