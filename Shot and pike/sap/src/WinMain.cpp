#include <Windows.h>
#include <Mina.h>


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR pScmdline, int iCmdshow)
{
	Mina* mina;
	bool result;


	// Create the system object.
	mina = new Mina;
	if (!mina)
	{
		return 0;
	}

	// Initialize and run the system object.
	result = mina->Initialize();
	if (result)
	{
		mina->Run();
	}

	// Shutdown and release the system object.
	mina->Shutdown();
	delete mina;
	mina = 0;

	return 0;
}
