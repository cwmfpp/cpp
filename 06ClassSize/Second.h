#ifndef __Second_H
#define __Second_H

#include "First.h"

class Second : public First
{
	public:
		Second();
		~Second();
		void f();
		virtual void g();
	private:
};

#endif //__Second_H

