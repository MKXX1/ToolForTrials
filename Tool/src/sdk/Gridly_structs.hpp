#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Gridly

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct Gridly.GridlyResult
// 0x0010 (0x0010 - 0x0000)
struct FGridlyResult final
{
public:
	class FString                                 Message;                                           // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGridlyResult) == 0x000008, "Wrong alignment on FGridlyResult");
static_assert(sizeof(FGridlyResult) == 0x000010, "Wrong size on FGridlyResult");
static_assert(offsetof(FGridlyResult, Message) == 0x000000, "Member 'FGridlyResult::Message' has a wrong offset!");

// ScriptStruct Gridly.GridlyTableCell
// 0x0030 (0x0030 - 0x0000)
struct FGridlyTableCell final
{
public:
	class FString                                 ColumnId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DependencyStatus;                                  // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Value;                                             // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGridlyTableCell) == 0x000008, "Wrong alignment on FGridlyTableCell");
static_assert(sizeof(FGridlyTableCell) == 0x000030, "Wrong size on FGridlyTableCell");
static_assert(offsetof(FGridlyTableCell, ColumnId) == 0x000000, "Member 'FGridlyTableCell::ColumnId' has a wrong offset!");
static_assert(offsetof(FGridlyTableCell, DependencyStatus) == 0x000010, "Member 'FGridlyTableCell::DependencyStatus' has a wrong offset!");
static_assert(offsetof(FGridlyTableCell, Value) == 0x000020, "Member 'FGridlyTableCell::Value' has a wrong offset!");

// ScriptStruct Gridly.GridlyTableRow
// 0x0030 (0x0030 - 0x0000)
struct FGridlyTableRow final
{
public:
	class FString                                 ID;                                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Path;                                              // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGridlyTableCell>               Cells;                                             // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGridlyTableRow) == 0x000008, "Wrong alignment on FGridlyTableRow");
static_assert(sizeof(FGridlyTableRow) == 0x000030, "Wrong size on FGridlyTableRow");
static_assert(offsetof(FGridlyTableRow, ID) == 0x000000, "Member 'FGridlyTableRow::ID' has a wrong offset!");
static_assert(offsetof(FGridlyTableRow, Path) == 0x000010, "Member 'FGridlyTableRow::Path' has a wrong offset!");
static_assert(offsetof(FGridlyTableRow, Cells) == 0x000020, "Member 'FGridlyTableRow::Cells' has a wrong offset!");

}
