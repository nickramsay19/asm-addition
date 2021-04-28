.text
.globl _procedure
_procedure:
    add %esi, %edi // add x & y into edi
    add %edx, %edi // add z into edi
    mov %edi, %eax // move result in edi to return register eax
    ret