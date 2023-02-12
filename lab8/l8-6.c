// ถ้ากำหนดให้ C เป็นจำนวนเชิงซ้อนแล้ว C สามารถถูกเขียนให้อยู่ในรูปของ \(C = a + bi\) โดยที่ \(i^2 = -1\) และหากกำหนดให้ \(D = c + di\) แล้ว

// ผลบวกระหว่าง \(C\) และ \(D\) จะมีค่าเท่ากับ \((a+c) + (b+d)i\)
// ผลคูณระหว่าง \(C\) และ \(D\) จะมีค่าเท่ากับ \((ac-bd) + (ad+bc)i\)
// จงเติมโปรแกรมข้างล่างให้สมบูรณ์เพื่อคำนวณหาค่าผลบวก (add) และผลคูณ (multiply) ของค่าจำนวนเชิงซ้อน 2 จำนวนที่รับค่าเข้ามา

// ตัวอย่างผลลัพธ์ที่ 1 (Input: C = 1.0 + 2.0i และ D = 2 + 3i)

// Enter C: 1.0 2.0 
// Enter D: 2 3 
// C + D = 3.0 + 5.0i
// C x D = -4.0 + 7.0i
// ตัวอย่างผลลัพธ์ที่ 2 (Input: C = 2i และ D = 3i)
// Enter C: 0 2 
// Enter D: 0 3 
// C + D = 5.0i
// C x D = -6.0
// ตัวอย่างผลลัพธ์ที่ 3 (Input: C = 1 + 2i และ D = -3i)
// Enter C: 1 2 
// Enter D: 0 -3 
// C + D = 1.0 - 1.0i
// C x D = 6.0 - 3.0i
#include <stdio.h>

struct complex {
  
  float a;
  float b;

};

struct complex add_complex(struct complex C,struct complex D)
{
    struct complex AplusB;
    AplusB.a =C.a+D.a;
    AplusB.b =C.b+D.b;
    return AplusB; 

}

struct complex multiply_complex(struct complex C, struct complex D)
{
    struct complex AmultiplyB;
    AmultiplyB.a = (C.a * D.a) - (C.b * D.b); 
    AmultiplyB.b = (C.a * D.b) + (C.b * D.a);
    return AmultiplyB;

}

void print_complex(char *CD, struct complex ans)
{
        printf("%s", CD);
        if (ans.a !=0 &&ans.b > 0) {
        printf("%.1f + %.1fi\n", ans.a, ans.b);} 
        else if (ans.a !=0 && ans.b < 0 ) {
        printf("%.1f - %.1fi\n", ans.a, -ans.b);} 
        else if (ans.b ==0) {
        printf("%.1f\n", ans.a);} 
        else if (ans.a ==0) {
        printf("%.1fi\n", ans.b);}
}

int main(){
  
  struct complex C,D,E,F;


  printf("Enter C: ");
  scanf("%f %f", &C.a, &C.b);
  
  printf("Enter D: ");
  scanf("%f %f", &D.a, &D.b);


  E = add_complex(C, D);
  F = multiply_complex(C, D);

  print_complex("C + D = ", E);
  print_complex("C x D = ", F);

  return 0;
}