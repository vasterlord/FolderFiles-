#include "stdafx.h"
#include "Iterator.h"
Iterator::Iterator(void)
{
	_ctr = NULL;
}


Iterator::Iterator(File* ctr)
{
	_ctr = ctr;
}


Iterator::~Iterator(void)
{
}


Iterator::Iterator(const Iterator& ctr)
{
	_ctr = ctr._ctr;
}


Iterator& Iterator::operator = (const File* ctr)
{
	*this = ctr;
	return *this;
}


Iterator& Iterator::operator+=(const int& ctr)
{
	_ctr += ctr;
	return *this;
}


Iterator& Iterator::operator-=(const int& ctr)
{
	_ctr -= ctr;
	return *this;
}


File& Iterator::operator * ()
{
	return *_ctr;
}


File* Iterator::operator->()
{
	return _ctr;
}
 
File& Iterator::operator[](const int& ctr)
{
	return _ctr[ctr];
}


Iterator& Iterator::operator++(void)
{
	_ctr++;
	return *this;
}


Iterator Iterator::operator++(int)
{
	Iterator tmp(*this);
	++(*this);
	return tmp;
}


Iterator& Iterator::operator--(void)
{
	_ctr--;
	return *this;
}


Iterator Iterator::operator--(int)
{
	Iterator tmp(*this);
	--(*this);
	return tmp;
}


bool Iterator::operator==(const Iterator& ctr)
{
	return _ctr == ctr._ctr;
}


bool Iterator::operator!=(const Iterator& ctr)
{
	return _ctr != ctr._ctr;
}


bool Iterator::operator>(const Iterator& ctr)
{
	return _ctr > ctr._ctr;
}


bool Iterator::operator<(const Iterator& ctr)
{
	return _ctr < ctr._ctr;
}


bool Iterator::operator>=(const Iterator& ctr)
{
	return _ctr >= ctr._ctr;
}


bool Iterator::operator<=(const Iterator& ctr)
{
	return _ctr <= ctr._ctr;
}
