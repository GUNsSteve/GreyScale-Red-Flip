#pragma warning(disable : 4996)
#pragma comment(lib, "shell32.lib")
#pragma once

#include<vcclr.h>
#include <msclr/marshal_cppstd.h>

#pragma managed(push, off)
#define generic 				 			GenericFromFreeTypeLibrary
#include "pngwriter.h"
#undef generic
#pragma managed(pop)

//Global Variable(s)
char* savedFileName;

using namespace System;
using namespace Runtime::InteropServices;
#include "PNGForm.h"

using namespace GUIpngProject;

[STAThread]

int Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	PNGForm form;
	Application::Run(% form);
	return 0;
}
