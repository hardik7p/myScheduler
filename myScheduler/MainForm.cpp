#include "MainForm.h"

using namespace System; 
using namespace System::Windows::Forms; 

[STAThread] 
void Main(cli::array<System::String^>^ args) 
{ 
	Application::EnableVisualStyles(); 
	Application::SetCompatibleTextRenderingDefault(false); 
	myScheduler::MainForm form; Application::Run(%form); 
}