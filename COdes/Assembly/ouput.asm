.MODEL SMALL
.STACK 100H
.DATA 
NUM1 DB 48
CHAR DB 'A'
MSG DB "MY ND$"
  
.CODE
MAIN PROC
   MOV AX, @DATA 
   MOV DS,AX 
   
   MOV AH,2
   MOV DL, NUM1
   INT 21H  
    MOV AH,2
   MOV DL,CHAR
   INT 21H       
    MOV AX,4CH
    INT 21H
     MAIN ENDP
END MAIN
   