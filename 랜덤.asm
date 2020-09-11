%include "io.inc"
section .data ;초기값,메모리 용량 확보
    count dw 1
    msg1 db " 번호:",0
    format db '로또 값 = ',0
section .bss  ;메모리 용량,갯수 확보
    a resd 1 ;4byte
    b resd 1 ;4byte
    arr resw 10
section .text
global CMAIN
extern _newtime
extern _random
extern printf
CMAIN:
    push ebp
    mov ebp,esp
    call _newtime
    mov ecx,0
    mov edx,0
Count_check:
    cmp ecx,6
    je show    
Get_random:
    mov ebx,0 
    push ecx
    call _random
    pop ecx
      
compare_number:

    cmp ebx,6
    je  number_in
    cmp [arr+ebx*4],eax
    je Get_random
    inc ebx
    jmp compare_number
number_in:   
    mov [arr+ecx*4],eax
    inc ecx
    jmp Count_check
show:
    mov edx,0
show2:
    cmp edx,6
    je end
    PRINT_STRING msg1
    PRINT_DEC 2,[arr+edx*4]   
    inc edx
    jmp show2
end:
    pop ebp
    xor eax, eax
    ret       