#include "RE/FileIO/ICellAttachDetachEventSource/TES.h"


namespace RE
{
	TES* TES::GetSingleton()
	{
		REL::Relocation<TES**> singleton{ Offset::TES::Singleton };
		return *singleton;
	}
}
