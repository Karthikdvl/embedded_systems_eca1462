//ORG 0000H        ; Set origin to address 0000H

//UP: 
//    SETB P2.0    ; Turn on LED connected to P2.0
//    ACALL DELAY  ; Call delay subroutine
//    CLR P2.0     ; Turn off LED connected to P2.0
//    ACALL DELAY  ; Call delay subroutine
//    SJMP UP      ; Jump back to UP label

//DELAY:
//    MOV R4, #35  ; Load R4 with delay count
//H1: MOV R3, #255 ; Load R3 with inner delay count
//H2: DJNZ R3, H2  ; Decrement R3 and loop
//    DJNZ R4, H1  ; Decrement R4 and loop
//    RET          ; Return from subroutine

//END              ; End of program
