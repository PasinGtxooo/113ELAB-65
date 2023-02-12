// Write a program to find out how many days a kid can collect money up to specific amount.

// First, the program asks the kid the goal amount of money he aims to collect. From that, everyday, the program asks the kid to enter leftover money from his stipend and reports (1) the total amount on that day, (2) remaining money to collect. When the goal money is reached, the program will report how many it takes to collect money.

// Assume the kid always enters positive amount of money.

// เขียนโปรแกรมเพื่อหาจำนวนวันที่จะต้องใช้ในการเก็บเงินให้ได้ตามเป้าหมาย

// โดยโปรแกรมจะต้องถามจำนวนเงินที่เป็นเป้าหมายในการเก็บเงินในบรรทัดแรก จากนั้น แต่ละวันโปรแกรมจะให้ใส่จำนวนเงินที่จะเก็บเพิ่ม และออกรายงานตามตัวอย่าง โดยมีข้อมูลดังนี้ (1) จำนวนวันที่ใช้ในการเก็บเงิน (2) ยอดเงินคงเหลือที่ต้องการเพื่อให้ถึงเป้าหมาย และเมื่อเก็บเงินจนถึงเป้าหมายแล้ว โปรแกรมจะรายงานว่าใช้เวลากี่วันในการเก็บเงิน

// สมมติว่าข้อมูลนำเข้าเป็นจำนวนบวกเสมอ

// Sample output 1
// Enter your goal amount: 100.00
// Enter money collected today: 20.00
// Total money collected up to day 1 is 20.00. You need 80.00 more.
// Enter money collected today: 10.00
// Total money collected up to day 2 is 30.00. You need 70.00 more.
// Enter money collected today: 15.00
// Total money collected up to day 3 is 45.00. You need 55.00 more.
// Enter money collected today: 30.00
// Total money collected up to day 4 is 75.00. You need 25.00 more.
// Enter money collected today: 25.00
// Congratulations! You take 5 days to reach your goal.
// Sample output 2
// Enter your goal amount: 25
// Enter money collected today: 5.50
// Total money collected up to day 1 is 5.50. You need 19.50 more.
// Enter money collected today: 10.25
// Total money collected up to day 2 is 15.75. You need 9.25 more.
// Enter money collected today: 10
// Congratulations! You take 3 days to reach your goal.
#include <stdio.h>
float coll(float x,float y){
    float ans =x-y;
    return (ans);}
int main(){
    float x,y,sm=0,yoy ;
    int i=1;
    printf("Enter your goal amount: ");
    scanf("%f",&x);
    while (x>0)
    {
        printf("Enter money collected today: ");
        scanf("%f",&y);
        sm = sm+y;
        yoy =coll(x,y);
        x = coll(x,y);
    
        if (x<=0){
            if (i == 1){
                printf("Congratulations! You take %d day to reach your goal.",i);}
            else{
                printf("Congratulations! You take %d days to reach your goal.",i);}}
        else{
        printf("Total money collected up to day %d is %.2f. You need %.2f more.\n",i,sm,yoy);}
        i++;}
}