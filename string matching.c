#include<stdio.h>
#include<string.h>
int stringmatch(char *string, char *p) {
	int i,j,n,m;
    n = strlen(string);
    m = strlen(p);
    
    for ( i = 0; i <= n - m; i++) {
    	j = 0;
        
        while (j < m && string[i + j] == p[j]) {
            j++;
        }
        if (j == m) {
            return i;
        }
    }
    return -1;
}
int main() {
	int result;
    char string[] = "nobody_noticed him";
    char p[] = "him";
    result= stringmatch(string, p);
    if (result != -1) {
        printf("String found at %d\n", result);
    } 
	else {
        printf("String not found\n");
    }
    return 0;
}

