#ifndef KOREAN_H
#define KOREAN_H

#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>
#include <map>

#define 준비 using namespace std;
#define 시작 int main()
#define 출력(x) std::cout << x;
#define 끝 return 0;
#define 반환(x) return x;
#define 반복(x, n) for(int x = 0; x < n; ++x)
#define 만약(x) if(x)
#define 아니면 else if
#define 생성 auto
#define 문장 std::string
#define 벡터 std::vector
#define 넣기 push_back
#define 빼기 pop_back()
#define 크기 size()
#define 첫번째 front()
#define 마지막 back()
#define 제곱 pow
#define 루트 sqrt
#define 절댓값 abs
#define 사전 map

#define 공백구분(x, 문자) do { \
    stringstream ss(x); \
    string temp; \
    벡터<문장> 문자; \
    while (ss >> temp) { \
        문자.넣기(temp); \
    } \
} while(0)
#define 정수 int
#define 소수1 double
#define 소수2 float
#define 문자 char

#endif
