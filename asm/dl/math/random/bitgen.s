.globl PRNG
.type PRNG, @function

.globl Square
.type Square, @function

reg1:
    .long 0

reg2: 
    .long 0

reg3:
    .long 0

reg4:
    .long 0

PRNG:
    ; Reads eax, ebx, ecx, and edx, and squares them, sums the result, and then square roots that.
    mov %eax, reg1(,1)      ; Drops the values into the variables.
    mov %ebx, reg2(,1)      ;
    mov %ecx, reg3(,1)      ;
    mov %edx, reg4(,1)      ;

    pushl %eax
    call Square
    mov %rsx, %eax
    mov %rsx(,4), %edx
    
    pushl %ebx
    call Square
    mov %rsx, %eax
    mov %rsx(,4), %edx
    
    pushl %ecx
    call Square
    mov %rsx, %eax
    mov %rsx(,4), %edx
    
    mov %esp, %edx
    pushl %edx
    call Square
    mov %rsx, %eax
    mov %rsx(,4), %edx
    mov %esp, %edx

    

Square:

    mov %esp, %eax
    subl 4, %esp
    push %edx

    mul %eax
    
    ret