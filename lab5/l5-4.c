// The Value of π
// Calculate the value of π
//  from the infinite series
// π= 4-4/3+4/5-4/7+4/9-4/11 .....
// Write the program to input integer n where n > 0

// and print the value of π approximated by n term of this series

// Example 1
// Enter n: 3
// 3.4666666667
// Example 1
// Enter n: 100000
// 3.1415826536
#include <stdio.h>
 void main(){
    double n,an,o= 1.0;
    int i;
    printf("Enter n: ");
    scanf("%lf",&n);
    for (i=1;i<=n;i++){
        if (i%2 !=0){
            an += 4/o;}
        else{
            an -= 4/o;}
        o += 2;
    }
    printf("%.10f",an);
}