#include<stdio.h>
#include<Windows.h>


class Logger
{
private:
	static FILE* LogFile;
public:
	Logger()
	{

	}
	static void WriteLog(char* format,...)
	{
		#define LOGGER
		#ifdef LOGGER
			if(NULL == format)
				return;
			char buffer[1000] = {0};
			va_list list = NULL;
			va_start(list, format);
			vsprintf(buffer,format,list);
			va_end(list);
			fprintf(LogFile,buffer);
		#endif
	}
};

FILE* Logger::LogFile  = fopen(".\\testlog.txt","wb");