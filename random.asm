; 32bit mode
%include "io.inc"

LOTTO_COUNT equ 6
;equ ���þ�� �ɺ��� ������ �� ����Ѵ�. �ɺ�(symbol)�̶� ����� ���α׷����� �� �� ���Ǵ� ����� ���ϸ�, ������ ���� ����Ѵ�.
;symbol equ value �� �� ���ǵ� �ɺ��� ���� ����� ������ �� �� ����.

section .text
global CMAIN
extern _getnumber ;c���� ���������Լ� 1~45 ���� �� ����
extern _inimylib ; �����õ尪 �ʱ�ȭ ���ִ� �Լ�
;============================================�Ʒ� �������� ����Լ��� �� ����

;input:
;return:

CMAIN:
   call _inimylib ; c���� ¥���� �ڵ� �ҷ�����, �����õ尪 �ʱ�ȭ
   ;mov ecx,0 ; ecx�������� �ʱ�ȭ 
   ;ecx�� ���� ī���� ����������. �ַ� �ݺ� ��ɾ� ���� �ݺ� ī���ͷ� ���Ǵ� �������ͷ�, ECX �������Ϳ� �ݺ��� Ƚ���� �����ϰ�, �ݺ� �۾��� ����
   mov ecx,0
cmain_loop1:
   cmp ecx, LOTTO_COUNT ;���� �� ��.
   jge cmain_end ; ecx�� ���� �� ũ�� cmain �Լ� ����.
   
   push ecx
   call _getnumber ;45 ���� �� ���Ϲ���
   mov [a],eax
   ;���⼭ eax�� c�ڵ忡�� �޾ƿ� a,�� �������� ���� �Ѱ��� ����   
   pop ecx
   
   push ecx
   mov ebx,ecx
   call CheckSame ; CheckSame�� ������ ���� ������ ���ϴ� �Լ� �ҷ�����
   pop ecx
   
   cmp eax,1
   je checksame_loop1 ;je=������ ���� (���Ͻ� �� ���� ������)
   
   mov ebx, [a]
   mov [data+ecx*4],ebx ;ebx�� ���� �迭�� �ִ´�.
   
   inc ecx;������ +1   
   jmp cmain_loop1;�ٽ� �������� (�ݺ���)
   
cmain_end:
   call ShowData ;���� 6�� �� > ������ 6�� �ζ� �� ��½��� ������   
   ret
;=============================================
;input: eax(a), ebx(size)
;return: eax(0: not same, 1: find same)
   inc ecx
CheckSame:
   mov edx,0 ;edx �ʱ�ȭ
   mov ecx,0 ;ecx �ʱ�ȭ

checksame_loop1:
   cmp ecx,ebx ;���� ��
   jge checksame_end
   cmp eax, [data+ecx*4];*4�� ���ִ� ������ ���� �迭�� ã�Ƽ� ���� ������(4byte¥��), ����ĭ �ּ� �˾Ƽ� ã�ư�.
   jne checksame_endif  ;!= �����ض�!
   mov edx,1 
   jmp checksame_end

checksame_endif:
   inc ecx ; 1����, ������ start
   jmp checksame_loop1
   NEWLINE

checksame_end:
   mov eax, edx   
   ret

;===================================================================
;input:
;return:
ShowData:
   NEWLINE
   PRINT_STRING msg1
   mov ecx,0 ;�������� �ʱ�ȭ
   
showdata_loop1: ;label start
   cmp ecx,LOTTO_COUNT ; �� �� 
   jge show_end;���� ���� ũ�ų�,���ٸ� >= show_end�� �̵�
   
   push ecx;���ÿ� �־���
   PRINT_DEC 4, [data + ecx*4] ;���
   pop ecx ; �� ����
   
   cmp ecx, LOTTO_COUNT -1 ;ecx�� �� ��
   jge show_next
   push ecx
   PRINT_STRING msg2 ;���ڿ� ���
   pop ecx ;push�� ���ÿ� ���� �־��ָ� pop�� �̿��ؼ� �ݵ�� ��������.

show_next:
   inc ecx ; inc = �ǿ����ڿ� 1�� ���Ѵ�.
   jmp showdata_loop1 ;������ jmp�ϴ� ��ɾ�/�ǿ������� ��ġ�� ���� �帧�� ����ȴ�. �ǿ����ڰ� ����Ű�� �ڵ�� ���� �پ �����Ѵٰ� �����ϸ� �ȴ�.

show_end:
   ret
   
section .data ;�ʱⰪ,�޸� �뷮 Ȯ��
   msg1 db "Lotto : ",0
   msg2 db ",",0
   msg3 db "������ �����Ͻðڽ��ϱ�? ",0
   msg4 db "���� : ",0
   msg5 db "---------------------------",0
   
   
section .bss;�޸� �뷮,���� Ȯ��
   a resd 1 ;4byte
   data resd 6  
   num resw 1;
   num2 resw 1;
   
   