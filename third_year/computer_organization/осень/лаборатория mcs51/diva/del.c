	#include <reg51.h>  //������������ ���� � �������� ���������
  char i;                       // ������� �����,
  int  S,A;    //S-�������, 0<A<0x7F -��������  � ������������� �������
 
main()
{    S=(P1<<8)||P2 ; //������� <0x7f   �������������
      A=P3<<8 ;  //�������� <0x7f   �������������
  for( i=9 ; i>0; i-- )    
      S= (S <A) ? S<<1 : ((S-A)<<1) +1; 
   P0=S>>8; //�������
while(1);
}
