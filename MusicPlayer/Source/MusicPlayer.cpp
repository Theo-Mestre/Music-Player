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

System::Void MusicPlayer::MusicPlayer::MusicPlayer_Load(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void MusicPlayer::MusicPlayer::button1_Click(System::Object^ sender, System::EventArgs^ e)
{


	return System::Void();
}