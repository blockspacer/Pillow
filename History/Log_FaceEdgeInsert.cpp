#include "Log_FaceEdgeInsert.h"

Log_FaceEdgeInsert::Log_FaceEdgeInsert(unsigned int target,unsigned int theIndex,unsigned int theEdgeIndex)
    :HistoryLog(LogType::Face_Edge_Insert,target),
      m_index(theIndex),
      edgeIndex(theEdgeIndex)
{
}

Log_FaceEdgeInsert::~Log_FaceEdgeInsert(void)
{
}
