#pragma once

#include "RE/B/BSExtraData.h"
#include "RE/B/BSPointerHandle.h"
#include "RE/E/ExtraDataTypes.h"

namespace RE
{
	class ExtraHeadingTarget : public BSExtraData
	{
	public:
		inline static auto RTTI = RTTI_ExtraHeadingTarget;
		inline static auto EXTRADATATYPE = ExtraDataType::kHeadingTarget;

		~ExtraHeadingTarget() override;  // 00

		// override (BSExtraData)
		[[nodiscard]] ExtraDataType GetType() const override;  // 01 - { return kHeadingTarget; }

		// members
		ObjectRefHandle target;  // 10
		std::uint32_t   pad14;   // 14
	};
	static_assert(sizeof(ExtraHeadingTarget) == 0x18);
}
