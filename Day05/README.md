# Lee-Dong-geon
인트아이 C++, 자료구조 스터디

## [Day05](https://github.com/inti-study-cpp-ds/Lee-Dong-geon/tree/main/Day05) 예외 처리
C++에서 예외 처리는 제어문을 통해 할 수도 있지만, 언어자체에서 try-catch문을 따로 지원하고 있다.<br>
try문에서 예외가 발생할 경우, throw식을 통해 예외를 던지고 그 던진 예외를 catch문에서 받는다는 구조를 가지고 있다.<br>
throw식을 통해 예외를 던지게 되면 해당 식 아래에 있는 내용은 실행하지 않고 바로 catch문으로 가게 되니 보통은 throw식을 if문 내에 넣어서 사용하게 된다.<br>

단, try-catch문은 예외가 발생할 수 있는 코드에서만 사용해야 하는데, 그 이유는 if문을 통해 예외를 처리하는 것에 비해 오버헤드가 크게 발생하기 때문에 성능상 크게 손해를 입기 때문이다.

### 1. "예외 상황" 과 "예외 처리" 란
예외 상황 : 예외(Exception)는 언어 상의 문법적인 오류가 아니라 내가 의도한, 구현한 프로그램의 논리에 맞지 않는 상황을 말한다.<br>
이러한 예외 상황에서, 특별한 처리를 하는 것을 예외 처리(Exception Handling)이라 한다.<br>
ex> 나눗셈을 할때 나누는 수 가 0으로 입력되는 경우를 "예외 상황" 이라 하고, 이에 대해 다시 입력을 받거나 프로그램을 종료하는 방법을 정의해주는 것을 "예외 처리"라고 할 수 있다.

### 2. "예외 처리"를 위한 방법
사실 우리는 조건문(if)를 통해서 이전부터 예외처리를 해왔었다. 하지만, C++언어에서 예외 처리를 위해 제공하는 메커니즘이 존재한다. <br>
조건문(if)를 통해서 예외 처리하는 방법도 좋지만, 이는 예외처리를 위한 코드인지, 프로그램의 논리를 위한 코드인지 구분하기 힘든 단점이 있다. <br>

C++에서 예외 처리를 위해 제공하는 메커니즘은 try, throw, catch 로 구성되어 있다.

* ```try``` -  try 내부에서 예외가 있는지 탐색을 하는 부분이다.
* ```throw``` - try에서 에외를 탐색하면 throw의 인자로 준 변수를 catch로 던진다.
* ```catch``` -  throw에서 던진 변수를 인자로 받아서 catch 내부에 프로그래머가 정의한 예외 처리를 실시한다.
  * 내부라는 표현은 { } 중괄호 안을 말한다.

예외가 발생했을때 throw를 통해서 인자로 보내고, catch 부분이 실행이 되고, try내부에서 throw 이후 부분은 skip하게 된다.

### 3. try, throw, catch 를 통한 예외 처리 방법 과 예시
#### 예시 1) a/b 문제 (일반적인 경우)
```C++
#include <iostream>
using namespace std;

int main(void){
    int a, b;
    
    try {  //try에서 예외가 있는지 탐색
        cin >> a;
        cin >> b;
 
        if(b<=0){ //예외 발생시,
            throw b; //throw를 통해 변수 b를 catch의 파라미터로 보냄
        }
 
        cout << "[work]" << endl;
        cout << "a : " << a << " , b : " << b << endl;
        cout << "a/b : " << a/b <<endl;
 
 
    } catch (int expn) {  //throw에서 보낸 b를 인자를 expn으로 받는다
        cout << "[error]" << endl;
        cout << "Can't use this : " << expn << endl;
    }
 
 
    cout << "Program End" << endl;
    return 0;    
}
```

* 정상적으로 돌아갔을 때 결과값<br>
입력값 : 
```20 4```<br>
출력값 : 
```
[work]
a : 20, b : 4
a/b : 5
Program End
```

* 예외 처리를 했을 때 결과값<br>
입력값 : 
```20 0```<br>
출력값 : 
```
[error]
Can't use this : 0
a/b : 5
Program End
```

## References
* [모두의 코드 - C++](https://modoocode.com/134) : C++카테고리에서 각 문법들의 사용법이나 알고리즘 등을 공부 할 수 있다.
* [C++ 예외처리 (Exception Handling, try catch)](https://blockdmask.tistory.com/55)
* [참고하기 : C++ 이야기 서른두번째: 예외가 성능에 미치는 영향](https://yesarang.tistory.com/371)
