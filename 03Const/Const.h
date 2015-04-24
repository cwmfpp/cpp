#ifndef CONST_H_
#define CONST_H_

#define BUFSIZE	100
const int bufsize=100;

class Const
{
public:
	Const();
	~Const();
	void printValue(void);
	
private:
	int m_one;
	int m_two;
	int m_three;
	const int m_four;
	const int m_five;
};

#endif //CONST_H_
