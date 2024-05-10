#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        long long int mult, a, b, c;
        scanf("%lld %lld %lld %lld", &mult, &a, &b, &c);
        long long int first_three_mult = a * b * c;
        long long int num;
        if(mult == 0){
            num = 0;   
        }
        else if(mult % first_three_mult == 0){
            num = mult/first_three_mult;
        }
        else{
            num = -1;
        }
        printf("%lld\n", num);
    }
    return 0;
}