// Devin Checa
#include "modify.h"
modify::modify()
	:value(0)
{
}
modify::modify(int setter)
	:value(setter)
{
}
int modify::change (function<int (int value)> operation)
{
	return operation(value);
}
modify::~modify()
{
}
