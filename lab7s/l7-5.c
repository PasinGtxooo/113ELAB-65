// เปลี่ยน String เป็นอักษรตัวใหญ่
// ให้นิสิตเขียนฟังก์ชันชื่อ stoupper() ซึ่งจะรับสตริงมาหนึ่งตัว จากนั้นจะสร้างสตริงก์ใหม่ที่นำอักษรภาษาอังกฤษตัวเล็กจากสตริงก์เก่ามาเปลี่ยนเป็นอักษรตัวใหญ่ (Capital Letter) อักษรที่ไม่ใช่ตัวเล็กนั้นจะเหมือนเดิม จากนั้นจะรีเทิร์น pointer ไปที่สตริงใหม่นี้

// นิสิตไม่สามารถใช้ฟังก์ชันใดใน string.h ได้ แต่สามารถใช้ฟังก์ชันใน ctype.h ได้ (เช่น toupper() เป็นต้น)

// ตัวอย่าง 1
// Hello,World
// HELLO,WORLD
// ตัวอย่าง 2
// c3t-WiCoS
// C3T-WICOS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>//toupper()

char* stoupper(const char* str) {
    int length = strlen(str);
    char* result = (char*)malloc(length + 1);
    for (int i = 0; i < length; i++) {
        result[i] = toupper(str[i]);
    }
    result[length] = '\0';
    return result;
}

int main() {
    char s[100];
    char* result;
    scanf("%s", s);
    result = stoupper(s);
    printf("%s\n", result);
    free(result);
    return 0;
}
