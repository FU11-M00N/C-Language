  1 #! /bin/sh
  2 echo "******************U-1(High)*********************"
  3 echo "***************Account Management***************"
  4 
  5 check=`cat /etc/securetty | egrep "tty|pts"`
  6 
  7 if [ "$check" == "" ];
  8 then
  9         echo "===> [Safe] root 계정 원격접속이 불가능합니다."
 10 else
 11         echo "===> [Vulner_Ability] root 계정 원격 접속이 가능합니다."
 12 
 13 fi
 14 
