seed31pmc:
    .long 1

constapmc:
    .long 16807

hi:
    .long 0

lo:
    .long 0

.globl PRNG
.type PRNG, @function

PRNG:
    mov constapmc(,1), %eax  ; Load Variables 
    mov seed31pmc(,1), %ebx  ;
    mov 0xFFFF, %ecx         ;
    and %ecx, %ebx           ; AND bitwise, output is in ecx, this is var lo.
    imul %eax, %ecx          ; multiply. lo is still in ecx.
    mov %ecx, lo(,1)         ; Drop valus into lo.