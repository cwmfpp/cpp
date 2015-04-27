#ifndef WITHOUTCC_H_
#define WITHOUTCC_H_

class WithoutCC
{
public:
	WithoutCC();
	~WithoutCC();
	
	static int getObjectCount();	
	static WithoutCC handle(WithoutCC member);
private:
	static int m_objectCount;
	char *m_bufferPtr;
	void m_printf(WithoutCC member);
};

#endif //WITHOUTCC_H_
