#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "ShieldCC.h"

using namespace std;

static const char * name = "hello world ShieldCC";
int ShieldCC::m_objectCount = 0;

ShieldCC::ShieldCC()
{
	m_objectCount++;
	m_bufferPtr = (char *)malloc(1024);
	strncpy(m_bufferPtr, name, strlen(name));
	m_bufferPtr[strlen(name)] = '\0';

	cout << __func__ << ":" << __LINE__ << ":m_objectCount=" << m_objectCount <<endl;
}

ShieldCC::ShieldCC(const ShieldCC &member)
{
	
}

ShieldCC::~ShieldCC()
{
	m_objectCount--;
	cout << __func__ << ":" << __LINE__ << ":m_objectCount=" << m_objectCount <<endl;
	if(m_bufferPtr)
	{
		free(m_bufferPtr);
		m_bufferPtr = NULL;
	}
}

void ShieldCC::m_printf(ShieldCC member)
{
	
}

int ShieldCC::getObjectCount()
{
	return m_objectCount;
}

ShieldCC ShieldCC::handle(ShieldCC member)
{
	cout << "member.m_bufferPtr:" << member.m_bufferPtr <<endl;
	cout << __func__ <<":"<< __LINE__ << " object count=" << ShieldCC::getObjectCount() << ":member.m_bufferPtr:" << member.m_bufferPtr <<endl;	
	return member;
}

