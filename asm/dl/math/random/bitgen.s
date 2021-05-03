.globl PRNG
.type PRNG, @function

.globl Square
.type Square, @function

.globl SQRT
.type SQRT, @function

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

    pushl %eax              ; Squaring all the variables.
    call Square             ;
    mov %rsi, %eax          ;
    mov %rsi(,4), %edx      ;
    
    pushl %ebx              ;
    call Square             ;
    mov %rdi, %eax          ;
    mov %rdi(,4), %edx      ;
    
    pushl %ecx              ;
    call Square             ;   
    mov %rbp, %eax          ;
    mov %rbp(,4), %edx      ;   
    
    mov %esp, %edx          ;   
    pushl %edx              ;
    call Square             ;
    mov %r8, %eax           ;
    mov %r8(,4), %edx       ;
    mov %esp, %edx          ;

    add %rsi, %rdi          ; Summing them all into RSI.
    add %rsi, %rbp          ;
    add %rsi, %r8           ;
    call SQRT

Square:

    mov %esp, %eax
    subl 4, %esp
    push %edx

    mul %eax
    
    ret

SQRT:
    push rbp	; get everything ready by moving to the stack in memory
    mov rbp, rsp ; set the instruction pointer to the stack pointer
    sub rsp, 16	 ; make room for some memory
	mov DWORD [rbp-4], %rsi ; load in the value 64
	mov eax, DWORD [rbp-4] ; find length
    bsr eax, eax
    xor eax, 31
	mov DWORD [rbp-8], eax
	mov eax, 32	; subtract [rbp-8] (lead_bytes) from 32
	sub eax, DWORD [rbp-8]
	mov DWORD [rbp-12], eax
	mov eax, DWORD [rbp-12]
	mov edx, eax
	shr edx, 31
	add eax, edx
	sar eax, 1
	mov DWORD [rbp-12], eax
	mov eax, DWORD [rbp-12] ; shift bits right by len/2
	mov edx, DWORD [rbp-4]
	mov ecx, eax
	sar edx, cl
	mov eax, edx
	mov DWORD [rbp-16], eax ; time to print
	mov eax, DWORD [rbp-16]
	mov esi, eax
	lea rdi, [rel formatter]
	ret