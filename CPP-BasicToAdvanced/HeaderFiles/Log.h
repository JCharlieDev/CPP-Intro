//	Everything that begins with a "#" it's a preproccessor command or preprocessor directive.
//	It means that it get evaluated by the c++ preprocessor before the file is compiled.
#pragma once	//	Instruction sent to the compiler or preprocessor; Includes the file once.

//#ifndef _LOG_H
//#define _LOG_H

void InitLog();
void Log(const char* message);

struct Player {};

//#endif