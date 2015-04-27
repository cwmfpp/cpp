#ifndef WITHCC_H_
#define WITHCC_H_

class WithCC
{
public:
	WithCC();
	WithCC(const WithCC &member);
	~WithCC();
	
	static int getObjectCount();	
	static WithCC handle(WithCC member);
private:
	static int m_objectCount;
	char *m_bufferPtr;
	void m_printf(WithCC member);
	
};

#endif //WITHCC_H_
