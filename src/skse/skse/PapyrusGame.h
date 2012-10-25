#pragma once

struct StaticFunctionTag;
class VMClassRegistry;
class Setting;

#include "GameTypes.h"

namespace papyrusGame
{
	void RegisterFuncs(VMClassRegistry* registry);

	UInt32 GetPerkPoints(StaticFunctionTag*);
	void SetPerkPoints(StaticFunctionTag*, UInt32 perkPoints);
	void ModPerkPoints(StaticFunctionTag*, SInt32 modPerkPointsBy);

	UInt32 GetModCount(StaticFunctionTag*);
	UInt32 GetModByName(StaticFunctionTag*, BSFixedString name);
	BSFixedString GetModName(StaticFunctionTag*, UInt32 index);
	BSFixedString GetModAuthor(StaticFunctionTag*, UInt32 index);
	BSFixedString GetModDescription(StaticFunctionTag*, UInt32 index);
	UInt32 GetModDependencyCount(StaticFunctionTag*, UInt32 index);
	UInt32 GetNthModDependency(StaticFunctionTag*, UInt32 index, UInt32 dep_index);

	void SetGameSettingFloat(StaticFunctionTag * base, BSFixedString name, float value);
	void SetGameSettingInt(StaticFunctionTag * base, BSFixedString name, UInt32 value);
	void SetGameSettingBool(StaticFunctionTag * base, BSFixedString name, bool value);
	void SetGameSettingString(StaticFunctionTag * base, BSFixedString name, BSFixedString value);

	UInt32 GetTintMaskColor(StaticFunctionTag * base, UInt32 tintType, UInt32 index);
	void SetTintMaskColor(StaticFunctionTag * base, UInt32 color, UInt32 tintType, UInt32 index);
};
