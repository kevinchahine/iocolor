// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the IOCOLOR_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// IOCOLOR_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef IOCOLOR_EXPORTS
#define IOCOLOR_API __declspec(dllexport)
#else
#define IOCOLOR_API __declspec(dllimport)
#endif

//// This class is exported from the dll
//class IOCOLOR_API Ciocolor {
//public:
//	Ciocolor(void);
//	// TODO: add your methods here.
//};
//
//extern IOCOLOR_API int niocolor;
//
//IOCOLOR_API int fniocolor(void);
