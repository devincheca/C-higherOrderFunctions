// Devin Checa
#pragma once
#ifndef MODIFY_H
#define MODIFY_H
#include <functional>
using namespace std;
class modify
{
	public:
		int value;
		modify ();
		modify (int setter);
		int change (function<int (int value)> operation);
		~modify ();
};
#endif // MODIFY_H
