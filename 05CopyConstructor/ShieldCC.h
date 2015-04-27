#ifndef SHIELDCC_H_
#define SHIELDCC_H_

class ShieldCC
{
public:
	ShieldCC();
	//ShieldCC(const ShieldCC &member);
	~ShieldCC();
	
	static int getObjectCount();	
	static ShieldCC handle(ShieldCC member);//参数和返回值都要调用拷贝构造函数，当handle被调用时，编译不通过，因为拷贝构造函数放在了私有环境下 
private:
	static int m_objectCount;
	char *m_bufferPtr;
	void m_printf(ShieldCC member);
	ShieldCC(const ShieldCC &member); //放在私有下屏蔽掉拷贝构造函数的使用
	
};

#endif //SHIELDCC_H_
