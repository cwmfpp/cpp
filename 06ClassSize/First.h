#ifndef __First_H
#define __First_H

class First
{
	public:
		First();
		~First();
		void set(int I);
		int read()const;
		int permute();
		virtual void f();
	private:
		int i;
		enum {factor = 11};
};

#endif //__First_H

