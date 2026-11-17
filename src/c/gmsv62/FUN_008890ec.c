/* FUN_008890ec - 0x008890ec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008890ec(void)

{
  char cVar1;
  char cVar2;
  char *_Str1;
  DWORD DVar3;
  int iVar4;
  size_t sVar5;
  char *_Source;
  int local_8;
  
  FUN_0087d9ec(0xc);
  DAT_00973610 = 0xffffffff;
  DAT_00973600 = 0xffffffff;
  DAT_00980938 = 0;
  _Str1 = (char *)FUN_0088b9da(&DAT_008f4c88);
  if (_Str1 == (char *)0x0) {
    FUN_0087da4d(0xc);
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_00980940);
    if (DVar3 == 0xffffffff) {
      return;
    }
    DAT_00973568 = DAT_00980940 * 0x3c;
    DAT_00980938 = 1;
    if (DAT_00980986 != 0) {
      DAT_00973568 = DAT_00973568 + DAT_00980994 * 0x3c;
    }
    if ((DAT_009809da == 0) || (DAT_009809e8 == 0)) {
      DAT_0097356c = 0;
      _DAT_00973570 = 0;
    }
    else {
      DAT_0097356c = 1;
      _DAT_00973570 = (DAT_009809e8 - DAT_00980994) * 0x3c;
    }
    iVar4 = WideCharToMultiByte(DAT_009807ac,0x220,(LPCWSTR)&DAT_00980944,-1,PTR_DAT_009735f4,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 == 0) || (local_8 != 0)) {
      *PTR_DAT_009735f4 = 0;
    }
    else {
      PTR_DAT_009735f4[0x3f] = 0;
    }
    iVar4 = WideCharToMultiByte(DAT_009807ac,0x220,(LPCWSTR)&DAT_00980998,-1,PTR_DAT_009735f8,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 != 0) && (local_8 == 0)) {
      PTR_DAT_009735f8[0x3f] = 0;
      return;
    }
LAB_0088935d:
    *PTR_DAT_009735f8 = 0;
  }
  else {
    if ((*_Str1 != '\0') &&
       ((DAT_009809ec == (char *)0x0 || (iVar4 = _strcmp(_Str1,DAT_009809ec), iVar4 != 0)))) {
      FUN_0087aa78(DAT_009809ec);
      sVar5 = _strlen(_Str1);
      DAT_009809ec = _malloc(sVar5 + 1);
      if (DAT_009809ec != (char *)0x0) {
        FUN_0087b200(DAT_009809ec,_Str1);
        FUN_0087da4d(0xc);
        _strncpy(PTR_DAT_009735f4,_Str1,3);
        _Source = _Str1 + 3;
        PTR_DAT_009735f4[3] = 0;
        cVar1 = *_Source;
        if (cVar1 == '-') {
          _Source = _Str1 + 4;
        }
        iVar4 = FUN_0087b620(_Source);
        DAT_00973568 = iVar4 * 0xe10;
        for (; (cVar2 = *_Source, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':'))));
            _Source = _Source + 1) {
        }
        if (*_Source == ':') {
          _Source = _Source + 1;
          iVar4 = FUN_0087b620(_Source);
          DAT_00973568 = DAT_00973568 + iVar4 * 0x3c;
          for (; ('/' < *_Source && (*_Source < ':')); _Source = _Source + 1) {
          }
          if (*_Source == ':') {
            _Source = _Source + 1;
            iVar4 = FUN_0087b620(_Source);
            DAT_00973568 = DAT_00973568 + iVar4;
            for (; ('/' < *_Source && (*_Source < ':')); _Source = _Source + 1) {
            }
          }
        }
        if (cVar1 == '-') {
          DAT_00973568 = -DAT_00973568;
        }
        DAT_0097356c = (int)*_Source;
        if (DAT_0097356c != 0) {
          _strncpy(PTR_DAT_009735f8,_Source,3);
          PTR_DAT_009735f8[3] = 0;
          return;
        }
        goto LAB_0088935d;
      }
    }
    FUN_0087da4d(0xc);
  }
  return;
}


