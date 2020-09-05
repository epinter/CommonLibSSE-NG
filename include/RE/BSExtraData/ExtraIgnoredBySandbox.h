#pragma once

#include "RE/BSExtraData/BSExtraData.h"
#include "RE/BSExtraData/Enums/ExtraDataTypes.h"


namespace RE
{
	class ExtraIgnoredBySandbox : public BSExtraData
	{
	public:
		inline static constexpr auto RTTI = RTTI_ExtraIgnoredBySandbox;
		inline static constexpr auto EXTRADATATYPE = ExtraDataType::kIgnoredBySandbox;


		virtual ~ExtraIgnoredBySandbox();  // 00

		// override (BSExtraData)
		virtual ExtraDataType GetType() const override;	 // 01 - { return kIgnoredBySandbox; }
	};
	static_assert(sizeof(ExtraIgnoredBySandbox) == 0x10);
}
