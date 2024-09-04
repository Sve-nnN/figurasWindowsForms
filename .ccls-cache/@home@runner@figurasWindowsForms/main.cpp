#include "Form1.h";

using namespace upc_pre_simulacion_carrera_figuras;

[STAThread]
//int main(array<System::String^>^ args)
int main ()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew Form1());
    return 0;
}
