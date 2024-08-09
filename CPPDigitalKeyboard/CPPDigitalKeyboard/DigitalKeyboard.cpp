#include "DigitalKeyboard.h"

using namespace CPPDigitalKeyboard;

void main()
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew(DigitalKeyboard));
}


