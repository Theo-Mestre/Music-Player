#include "MusicPlayer.h"

#include <Win32/Framework.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MusicPlayer::MusicPlayer form;
	Application::Run(% form);
}

