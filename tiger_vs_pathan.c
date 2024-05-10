#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        int n;
        scanf("%d", &n);
        char s[n];
        scanf("%s", &s);
        int tiger = 0, pathan = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'T')
            {
                tiger++;
            }
            else
            {
                pathan++;
            }
        }
        if (tiger > pathan)
        {
            printf("Tiger\n");
        }
        else if(pathan > tiger)
        {
            printf("Pathaan\n");
        }
        else{
            printf("Draw\n");
        }
    }
    return 0;
}