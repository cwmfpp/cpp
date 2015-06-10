#ifndef __FOUTST_H
#define __FOUTST_H

#include "First.h"
#include "Third.h"

class Fourst : public First, public Third
{
	public:
		Fourst();
		~Fourst();
		void vFunc2(void);
		void vFunc4(void);
		void vThirdFunc2(void);
		virtual void vFourstFunc1();
	private:
};

#endif //__FOUTST_H

