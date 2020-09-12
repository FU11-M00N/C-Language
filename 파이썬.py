Python 3.8.5 (tags/v3.8.5:580fbb0, Jul 20 2020, 15:43:08) [MSC v.1926 32 bit (Intel)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> a+3
Traceback (most recent call last):
  File "<pyshell#0>", line 1, in <module>
    a+3
NameError: name 'a' is not defined
>>> a= 3
>>> b = 4
>>> a + b
7
>>> a * b
12
>>> a /b
0.75
>>> a=3
>>> b=4
>>> a**b
81
>>> a**b
81
>>> 7%3
1
>>> 3
3
>>> 7/4
1.75
>>> 7//4
1
>>> "Hello world
SyntaxError: EOL while scanning string literal
>>> "Hello world"
'Hello world'
>>> 'Python is fun'
'Python is fun'
>>> """Life is too short"""
'Life is too short'
>>> food = "hihi"
>>> say = '"hoho"he says'
>>> say
'"hoho"he says'
>>> head = "python"
>>> head
'python'
>>> tail = " is fun"
>>> head tail\
     
SyntaxError: invalid syntax
>>> head tail
SyntaxError: invalid syntax
>>> head + tail
'python is fun'
>>> a = "life is too short , you need python"
>>> a[0]
'l'
>>> " I eat %d apples. "
' I eat %d apples. '
>>> "i eat %d applews. " % 3
'i eat 3 applews. '
>>> number =10
>>> da = "three"
>>> i ate %d apples. so i was sick for %s days %(number,da)
SyntaxError: invalid syntax
>>> 
KeyboardInterrupt
>>> " i ate %d apples. so i was sick for %s days." % (number,day)
Traceback (most recent call last):
  File "<pyshell#34>", line 1, in <module>
    " i ate %d apples. so i was sick for %s days." % (number,day)
NameError: name 'day' is not defined
>>> clear
Traceback (most recent call last):
  File "<pyshell#35>", line 1, in <module>
    clear
NameError: name 'clear' is not defined
>>> number =10
>>> day = "three"
>>> "i ate %d apples . so i was sick for %s days." % (number,day)
'i ate 10 apples . so i was sick for three days.'
>>> "%10s" % "hi"
'        hi'
>>> "%-10sjane." % 'hi'
'hi        jane.'
>>> "%0.4f" % 3.42134234
'3.4213'
>>> a = "hobby"
>>> a.count('b')
2
>>> "Python is best choice"
'Python is best choice'
>>> a.find('b)
       
SyntaxError: EOL while scanning string literal
>>> a.find ('b')
2
>>> a= "Python is best choice"
>>> a.find('b')
10
>>> a=","
>>> a.join('abcd')
'a,b,c,d'
>>> a=
SyntaxError: invalid syntax
>>> a= "hi"
>>> a.upper()
'HI'
>>> a.upper(count)
Traceback (most recent call last):
  File "<pyshell#54>", line 1, in <module>
    a.upper(count)
NameError: name 'count' is not defined
>>> a.ipper
Traceback (most recent call last):
  File "<pyshell#55>", line 1, in <module>
    a.ipper
AttributeError: 'str' object has no attribute 'ipper'
>>> a.upper
<built-in method upper of str object at 0x03876A80>
>>> a.upper()
'HI'
>>> a.lower()
'hi'
>>> a= "Life is too short"
>>> a.replace("Life","Your leg")
'Your leg is too short'
>>> a = [ ]
>>> b = [1,2,3]
>>> c = [ 'life' , 'is', ' too ' , 'short' ]
>>> d = [ 1, 2, 'Life' , 'is']
>>> e [ 1,2,['Life','ls']]
Traceback (most recent call last):
  File "<pyshell#65>", line 1, in <module>
    e [ 1,2,['Life','ls']]
NameError: name 'e' is not defined
>>> e = [1,2,['Life','is']]
>>> data = ['사과', "배", "포도", "딸기" , "토마토" , "메론" ]
>>> printf(data)
Traceback (most recent call last):
  File "<pyshell#68>", line 1, in <module>
    printf(data)
NameError: name 'printf' is not defined
>>> print(data)
['사과', '배', '포도', '딸기', '토마토', '메론']
>>> print ("리스트 슬라이싱을 통해 여러 값을 표현 : " , data[2:4])
리스트 슬라이싱을 통해 여러 값을 표현 :  ['포도', '딸기']
>>> print (data[3:4])
['딸기']
>>> print (data[1:5])
['배', '포도', '딸기', '토마토']
>>> a = [1,2,3,4,5]
>>> a[0:2]
[1, 2]
>>> b = a[:2]
>>> c = a[2:]
>>> b
[1, 2]
>>> c
[3, 4, 5]
>>> a = [1,2,3]
>>> b = [4,5,6]
>>> a+b
[1, 2, 3, 4, 5, 6]
>>> a * 3
[1, 2, 3, 1, 2, 3, 1, 2, 3]
>>> a + a
[1, 2, 3, 1, 2, 3]
>>> a[2] = 4
>>> a
[1, 2, 4]
>>> a[1:2]
[2]
>>> a = ['a','c','b']
>>> a.reverse()
>>> a
['b', 'c', 'a']
>>> a = [1,2,3]
>>> a.index(3)
2
>>> a.index(1)
0
>>> a
[1, 2, 3]
>>> pin=000815-3068234
SyntaxError: leading zeros in decimal integer literals are not permitted; use an 0o prefix for octal integers
>>> pin='000815-3068234'
>>> print (pin.split(-))
SyntaxError: invalid syntax
>>> print (pin.split('-')

       pin
       
SyntaxError: invalid syntax
>>> pin
'000815-3068234'
>>> pin.split()
['000815-3068234']
>>> pin.split('-')
['000815', '3068234']
>>> print ("주민번호 앞자리" ,pin[0,6] )
Traceback (most recent call last):
  File "<pyshell#103>", line 1, in <module>
    print ("주민번호 앞자리" ,pin[0,6] )
TypeError: string indices must be integers
>>> print ("주민번호 앞자리" ,pin[0,6] ")
       
SyntaxError: EOL while scanning string literal
>>> print ("주민번호 앞자리" ,pin[0:6] )
주민번호 앞자리 000815
>>> print ("주민번호 뒷자리" ,pin[8:] )
주민번호 뒷자리 068234
>>> year = input('오늘의 연도 입력: ')
오늘의 연도 입력: 2020
>>> month = input('오늘의 월 입력:')
오늘의 월 입력:9
>>> day = input('오늘 날짜 입력:')
오늘 날짜 입력:8
>>> print year
SyntaxError: Missing parentheses in call to 'print'. Did you mean print(year)?
>>> print ("오늘 날짜는 %d 년 %d 월 %d 일 입니다.",(year,month,day))
오늘 날짜는 %d 년 %d 월 %d 일 입니다. ('2020', '9', '8')
>>> print ("오늘 날짜는 year 년 %d 월 %d 일 입니다.",(month,day))
오늘 날짜는 year 년 %d 월 %d 일 입니다. ('9', '8')
>>> print ("오늘 날짜는 %d 년 %d 월 %d 일 입니다.",% (year,month,day))
SyntaxError: invalid syntax
>>> print ("오늘 날짜는 %d 년 %d 월 %d 일 입니다." % (year,month,day))
Traceback (most recent call last):
  File "<pyshell#114>", line 1, in <module>
    print ("오늘 날짜는 %d 년 %d 월 %d 일 입니다." % (year,month,day))
TypeError: %d format: a number is required, not str
>>> "오늘 날짜는 %d 년 %d 월 %d 일 입니다." % (year,month,day)
Traceback (most recent call last):
  File "<pyshell#115>", line 1, in <module>
    "오늘 날짜는 %d 년 %d 월 %d 일 입니다." % (year,month,day)
TypeError: %d format: a number is required, not str
>>> "오늘 날짜는 %d 년 %d 월 %d 일 입니다." % (year,month,day)
Traceback (most recent call last):
  File "<pyshell#116>", line 1, in <module>
    "오늘 날짜는 %d 년 %d 월 %d 일 입니다." % (year,month,day)
TypeError: %d format: a number is required, not str
>>> "오늘 날짜는 %d 년 %d 월 %d 일 입니다."%(year,month,day)
Traceback (most recent call last):
  File "<pyshell#117>", line 1, in <module>
    "오늘 날짜는 %d 년 %d 월 %d 일 입니다."%(year,month,day)
TypeError: %d format: a number is required, not str
>>> "오늘 날짜는 %d 년 %d 월 %d 일 입니다." % (year,month,day)
Traceback (most recent call last):
  File "<pyshell#118>", line 1, in <module>
    "오늘 날짜는 %d 년 %d 월 %d 일 입니다." % (year,month,day)
TypeError: %d format: a number is required, not str
>>> "hi"
'hi'
>>> I eat %d apples." % 3
SyntaxError: invalid syntax
>>> " i eat %d apples." %3
' i eat 3 apples.'
>>> "오늘 날짜는 %d 년 %d 월 %d 일 입니다." % (year,month,day)
Traceback (most recent call last):
  File "<pyshell#122>", line 1, in <module>
    "오늘 날짜는 %d 년 %d 월 %d 일 입니다." % (year,month,day)
TypeError: %d format: a number is required, not str
>>> number= 10
>>> "hihi %d " % (number)
'hihi 10 '
>>> test =20
>>> "hihi %d hoho %d" % (number,test)
'hihi 10 hoho 20'
>>> "오늘 날짜는 %d 년 %d 월 %d 일 입니다." % (year,month,day)
Traceback (most recent call last):
  File "<pyshell#127>", line 1, in <module>
    "오늘 날짜는 %d 년 %d 월 %d 일 입니다." % (year,month,day)
TypeError: %d format: a number is required, not str
>>> "오늘 날짜는 %s 년 %s 월 %s 일 입니다." % (year,month,day)
'오늘 날짜는 2020 년 9 월 8 일 입니다.'
>>> input("친구의 이름을 입력:")
친구의 이름을 입력:홍길동
'홍길동'
>>> best_frined_list=input("친구의 이름을 입력:")
친구의 이름을 입력:홍길동
>>> best_frined_list
'홍길동'
>>> best_frined_list=input("친구의 이름을 입력:")
친구의 이름을 입력:강감찬
>>> best_frined_list=input("친구의 이름을 입력:")
친구의 이름을 입력:이순신
>>> best_frined_list=input("친구의 이름을 입력:")
친구의 이름을 입력:권율
>>> best_frined_list=input("친구의 이름을 입력:")
친구의 이름을 입력:정약용
>>> print ("나의 베스트 프렌드 리스트",best_friend_list)
Traceback (most recent call last):
  File "<pyshell#136>", line 1, in <module>
    print ("나의 베스트 프렌드 리스트",best_friend_list)
NameError: name 'best_friend_list' is not defined
>>> best_friend_list
Traceback (most recent call last):
  File "<pyshell#137>", line 1, in <module>
    best_friend_list
NameError: name 'best_friend_list' is not defined
>>> best_frined_list
'정약용'
>>> best_frined_list = [best_frined_list=input("친구의 이름을 입력:")]
SyntaxError: invalid syntax
>>> best_frined_list=input("친구의 이름을 입력:"
		       best_frined_list = [best_frined_list=input("친구의 이름을 입력:")]
KeyboardInterrupt
>>> 
>>> best_frined_list=input("친구의 이름을 입력:")]
SyntaxError: unmatched ']'
>>> 
>>> best_frined_list=input("친구의 이름을 입력:")
친구의 이름을 입력:
Traceback (most recent call last):
  File "<pyshell#144>", line 1, in <module>
    best_frined_list=input("친구의 이름을 입력:")
KeyboardInterrupt
>>> 
>>> s
Traceback (most recent call last):
  File "<pyshell#146>", line 1, in <module>
    s
NameError: name 's' is not defined
>>> best_frined_list=[input("친구의 이름을 입력:")]
친구의 이름을 입력:
Traceback (most recent call last):
  File "<pyshell#147>", line 1, in <module>
    best_frined_list=[input("친구의 이름을 입력:")]
KeyboardInterrupt
>>> best_frined_list=[input("친구의 이름을 입력:")]
친구의 이름을 입력:호준
>>> best_frined_list=[input("친구의 이름을 입력:"),input("친구의 이름을 입력:"),input("친구의 이름을 입력:"),input("친구의 이름을 입력:"),input("친구의 이름을 입력:")]
친구의 이름을 입력:문호준
친구의 이름을 입력:문호준
친구의 이름을 입력:문호준
친구의 이름을 입력:문호준
친구의 이름을 입력:문호준
>>> "나의 베스트 프렌드 리스트 :",best_frined_list
('나의 베스트 프렌드 리스트 :', ['문호준', '문호준', '문호준', '문호준', '문호준'])
>>> 