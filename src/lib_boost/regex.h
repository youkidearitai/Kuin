#pragma once

#include "..\common.h"

EXPORT_CPP SClass* _makeRegex(SClass* me_, const U8* pattern);
EXPORT_CPP void _regexDtor(SClass* me_);
EXPORT_CPP void* _regexFind(SClass* me_, S64* pos, const U8* text);
EXPORT_CPP void* _regexMatch(SClass* me_, S64* pos, const U8* text);
EXPORT_CPP void* _regexAll(SClass* me_, U8** pos, const U8* text);