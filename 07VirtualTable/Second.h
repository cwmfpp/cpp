#ifndef __Second_H
#define __Second_H

#include "First.h"

class Second : public First
{
	public:
		Second();
		~Second();
		virtual void vFunc2(void);
		virtual void vFunc5(void);
		virtual void vFunc6(void);
		void m(void);
	private:
};

#endif //__Second_H

