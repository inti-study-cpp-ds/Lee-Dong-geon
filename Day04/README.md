# Lee-Dong-geon
인트아이 C++, 자료구조 스터디

## [Day04](https://github.com/inti-study-cpp-ds/Lee-Dong-geon/tree/main/Day04) 템플릿
* [C++ Template Note - WikiDocs](https://wikidocs.net/book/54)
* [C++ 템플릿 클래스의 선언과 구현을 분리하는 방법 & 헤더 중복 포함 방지하기](https://www.sapphosound.com/archives/389)

### 1. 템플릿 함수
우리는 객체지향 언어인 C++에서 서로 다른 타입의 함수를 같은 이름으로 정의하여 유용하게 활용할 수 있는 오버로딩 이라는 개념을 배웠다.<br>
이런 유용한 기능중 하나인 오버로딩이 굉장히 비효율적으로 보이는 경우도 있다.<br>
바로 아래와 같은 경우다.<br>

```C++
int max(int a, int b){
  return (a > b ? a : b);
}

double max(double a, double b){
  return (a > b ? a : b);
}

short max(short a, short b){
  return (a > b ? a : b);
}

char max(char a, char b){
  return (a > b ? a : b);
}
```

이렇게 4가지 타입으로 같은 내용의 함수를 4번씩이나 오버로딩을 해야 한다.<br>
따라서 한번의 함수 정의로 서로 다른 자료형에 대해 유연하게 적용이 가능한 템플릿 함수가 존재한다.<br>

```C++
template <typename T>
T max(T a, T b){
  return (a > b ? a : b);
}
```
위의 오버로딩된 max 함수들을 템플릿 함수를 이용해 한번에 정의한 모습이다.
![](/template.png)

## References
* [모두의 코드 - C++](https://modoocode.com/134) : C++카테고리에서 각 문법들의 사용법이나 알고리즘 등을 공부 할 수 있다.
* [C++ 템플릿(Template), 템플릿 함수, 특수화](https://blog.naver.com/PostView.nhn?blogId=vjhh0712v&logNo=221553593414)
