#pragma once
#define _CRT_SECURE_NO_WARNINGS  
#include "stack.h"
#include <cstring>
//#include "TText.h"
using namespace std;
class TLink;
struct TMem {
	TLink *pFirst, *pLast, *pFree;
};
class TLink {
public:
		 char str[80];
		 TLink *pNext, *pDown;
public:
	static TMem mem;

	TLink(char *s = nullptr, TLink *pn = nullptr, TLink *pd = nullptr) {
		pNext = pn;
		pDown = pd;
		if (!s) str[0] = '\0';
		else strcpy_s(str, s);
	}
	void setPNext(TLink *pn) { pNext = pn; }
	void setPDown(TLink *pd) { pDown = pd; }
	TLink* getPDown() { return pDown; }
	TLink* getPNext() { return pNext; }
	void setStr(char* m);
	char* getStr() { return str; }
	friend std::ostream& operator<<(std::ostream &os, TLink &tl) {
		os << tl.str;
		return os;
	}
	void* operator new(size_t s);
	void operator delete(void* p);
};
