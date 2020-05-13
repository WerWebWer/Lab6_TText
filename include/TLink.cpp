#pragma once
#include "TText.h"
#include <cstring>

void* TLink::operator new(size_t s) {
	TLink *tmp = mem.pFree;
	if (mem.pFree != NULL) mem.pFree = mem.pFree->pNext;
	return tmp;
}

void TLink::operator delete(void* p) {
	if (p != NULL) {
		TLink* tmp = (TLink*)p;
		tmp->pNext = mem.pFree;
		mem.pFree = tmp;
	}
}
void  TLink::setStr(char* m) {
	strcpy(str, m); 
}