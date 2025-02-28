#include <stdio.h>
#include <string.h>

char* reverse( const char str1[] ) ;

int main() {

    char text[ 50 ] ; //ข้อความที่ต้องการจะกลับ
    printf( "Enter str1: " ) ;
    fgets( text, sizeof(text), stdin ) ;
    text[ strcspn( text, "\n" ) ] = '\0' ; //

    char *output = reverse( text ) ;
    printf( "MAIN : %s\n", output ) ;

    return 0 ;
}//end function

char* reverse( const char str1[] ) {
    
    int len = strlen(str1) ;
    static char reversed[50] ; //ให้ค่าคงอยู่หลังออกจากฟังก์ชัน

    for( int i = 0 ; i < len ; i++ ) {
        reversed[i] = str1[ len - i - 1 ] ; //กลับข้อความ
    } //end for reverse
    reversed[ len ] = '\0' ; //ใส่Null

    printf( "FUNC : %s\n", reversed ) ;
    return reversed ;
} //end char
