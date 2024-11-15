#include <stdio.h>
#include <string.h>
void countFrequency(char str[], int freq[]) {
    for(int i = 0; i < 26; i++) {
        freq[i] = 0;
    }
    for(int i = 0; str[i] != '\0'; i++) {
        freq[str[i] - 'a']++;
    }
}

int main(){
    char str1[1001];
    char str2[10001];
    scanf("%s %s", str1, str2);
    if(strlen(str1) != strlen(str2)){
        printf("NO");
        return 0;
    }
    
    int freq1[26], freq2[26];
    countFrequency(str1, freq1);
    countFrequency(str2, freq2);
    for(int i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i]){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    
    return 0;
}
