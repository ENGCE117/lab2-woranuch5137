#include <stdio.h>
#include <string.h>

char* reverse( char str1[] ) ;

int main() {

    char text[ 50 ] ; //ข้อความที่ต้องการจะกลับ
    char *output ;
    output = reverse( text ) ;
    printf( "MAIN : %s\n", output ) ;

    return 0 ;
}//end function

char* reverse( char str1[] ) {
    char text[50] = "I Love You" ;
    int len = strlen(str1) ;
    static char reversed[50] ; //ให้ค่าคงอยู่หลังออกจากฟังก์ชัน

    for( int i = 0 ; i < len ; i++ ) {
        reversed[i] = str1[ len - i - 1 ] ; //กลับข้อความ
    } //end for reverse
    reversed[ len ] = '\0' ; //ใส่Null

    printf( "FUNC : %s\n", reversed ) ;
    return reversed ;
} //end char
