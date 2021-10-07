#include <stdio.h>
#include "BasicDataStructure.h"
void printInt(void* a){
    printf_s("%zu\t", a);
}

int main() {
    Vector * test = VectorInit();
    for(size_t i = 0; i<50;i++){
        VectorPushBack(test,(void*)i);
    }
    VectorDebugPrint(test,printInt);
    return 0;
}
