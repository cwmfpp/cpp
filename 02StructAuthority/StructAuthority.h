#ifndef STRUCTAUTORITY_H_
#define STRUCTAUTORITY_H_

struct StructAuthority
{
public:
	StructAuthority();
	~StructAuthority();
	
	int m_i;
	char m_j;
	void foo(void);
	void setValue(int value);
	int getValue(void);
private:
	int m_value;

protected:
	int m_number;

};

#endif //STRUCTAUTORITY_H_

