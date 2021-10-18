#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num) {
    string answer = "";
    int i1 = 0;
    while (i1 < num){
         answer += str1[i1];
         i1++;
    }
    int i = 0;
    while (str2[i] != '\0'){
         answer += str2[i];
         i++;
    }
    while (str2[i1] != '\0'){
         answer += str1[i1];
         i1++;
    }
    return answer;
}
