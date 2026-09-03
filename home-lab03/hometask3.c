#include <stdio.h>

int main() {
    printf("hey\n\a");

    char name[67];
    printf("what's your Name\? :");
    fgets(name, sizeof(name),stdin);

    char rn[10];
    printf("\n\tEnter your Roll Number:");
    fgets(rn,sizeof(rn),stdin);
    
    char dp[50];
    printf("\n\t\tEnter your Department name: ");
    fgets(dp,sizeof(dp),stdin);
    
    printf("\n Name: %s \n Roll Number:\"%s\" \n Department: %s",name,rn,dp);
    
    return 0;
}

