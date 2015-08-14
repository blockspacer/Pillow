#pragma once
#include "HistoryLog.h"

class Log_VertexAdjacentSwap :
	public HistoryLog
{
public:
    const unsigned int m_index;

public:
    const unsigned int oIndex;
    const unsigned int tIndex;

public:
    Log_VertexAdjacentSwap(unsigned int theTarget,unsigned int theIndex,unsigned int theOIndex,unsigned int theTIndex);
	std::string toString()
	{
		char temp[256];
        sprintf(temp,"\t\t\t<Log Type=\"VertexAdjacentSwap\" Target=\"%d\" Index=\"%d\" OIndex=\"%d\" TIndex=\"%d\" />\n",target,index,oIndex,tIndex);
		std::string out(temp);
		return out;
    }

	void operator=(const Log_VertexAdjacentSwap& in) 
	{
		in;
    }
public:
	~Log_VertexAdjacentSwap(void);
};
