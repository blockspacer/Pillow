#include "Log_ObjectRotationChange.h"

Log_ObjectRotationChange::Log_ObjectRotationChange(unsigned int theTarget,float theX,float theY,float theZ):HistoryLog(LogType::Object_Rotation_Change,theTarget),x(theX),y(theY),z(theZ)
{
}

Log_ObjectRotationChange::~Log_ObjectRotationChange(void)
{
}
