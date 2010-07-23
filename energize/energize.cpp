// energize.cpp: Hauptprojektdatei.

#include "stdafx.h"
#include "EnergySelectionForm.h"

using namespace energize;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Aktivieren visueller Effekte von Windows XP, bevor Steuerelemente erstellt werden
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Hauptfenster erstellen und ausführen
	Application::Run(gcnew EnergySelectionForm());
	return 0;
}
