#ifndef STATICUSE_H_
#define STATICUSE_H_


class StaticUse
{
public:
	StaticUse();
	~StaticUse();
		
	static void print(void);
	static void callClassMember(StaticUse *classPtr);

public:
	static int sm_value;
		
private:
	static int m_one;
	static int m_two;
	const static int m_three = 3;
	int m_four;
};

#endif //STATICUSE_H_
