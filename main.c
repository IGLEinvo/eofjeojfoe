//Adding comment
#include <stdio.h>
#include <math.h>

int main(void){
    const int m = 20;
    const double d = 0.001;
    double res,sum,cur_add,x;
    int n;
    for (x = 0.1; x <= 0.5; x = x+0.05){
        n = 1;
        sum = 0;
        cur_add = 1;
        while (cur_add > d){
            cur_add = (cur_add * (m-n+1) * x)/n;
            sum += cur_add;
            n++;
        }
        res = sum + 1;
        printf("x = %lf         res = %lf\n", x, res);
    }
    return(0);
}