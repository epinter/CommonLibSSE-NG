#pragma once

#include "RE/B/BaseFormComponent.h"

namespace RE
{
	class TESObjectARMO;

	class BGSSkinForm : public BaseFormComponent
	{
	public:
		inline static auto RTTI = RTTI_BGSSkinForm;

		~BGSSkinForm() override;  // 00

		// override (BaseFormComponent)
		void InitializeDataComponent() override;                // 01
		void ClearDataComponent() override;                     // 02 - { return; }
		void CopyComponent(BaseFormComponent* a_rhs) override;  // 03

		// members
		TESObjectARMO* skin;  // 08 - WNAM
	};
	static_assert(sizeof(BGSSkinForm) == 0x10);
}
