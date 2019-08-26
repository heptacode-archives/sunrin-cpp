#pragma once
#ifndef HUMAN_H
#define HUMAN_H

class Human { // struct 디폴트 접근지정자(접근제어자) : public
private: //있어도 없어도 됨    // class  디폴트 접근지정자; private
	int eye; // 멤버변수
	// 생성자 : 오버로딩
public:
	Human();
	Human(int e); // 재열을 위해서 : 3X3Eyes - 폭력적인 일본
	// setter함수 : 멤버변수의 값을 설정해주는 함수 : set변수명(자료형 값);
	void setEye(int e);
	// getter함수 : 멤버변수 값을 받아오기 위한 함수: 자료형 get변수명(void)
	int getEye(void);
};