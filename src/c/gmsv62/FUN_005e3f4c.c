/* FUN_005e3f4c - 0x005e3f4c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_005e3f4c(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  char *_Dst;
  
  uVar2 = FUN_00424561();
  uVar4 = FUN_004b8c34();
  *(undefined4 *)(param_1 + 4) = uVar4;
  uVar3 = FUN_00424561();
  uVar4 = FUN_004b8c34();
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  uVar5 = FUN_0042452b();
  uVar5 = uVar5 & 0xff;
  do {
    if (uVar5 == 0) {
      return;
    }
    _Dst = (char *)FUN_005e5129();
    _memset(_Dst,0,0x14);
    cVar1 = FUN_0042452b();
    *_Dst = cVar1;
    switch(cVar1) {
    case '\0':
    case '\x05':
    case '\x0f':
    case '\x11':
      uVar2 = FUN_00424561();
      *(undefined2 *)(_Dst + 2) = uVar2;
      uVar2 = FUN_00424561();
      *(undefined2 *)(_Dst + 4) = uVar2;
      uVar2 = FUN_00424561();
      *(undefined2 *)(_Dst + 6) = uVar2;
      uVar2 = FUN_00424561();
      *(undefined2 *)(_Dst + 8) = uVar2;
      uVar2 = FUN_00424561();
      *(undefined2 *)(_Dst + 0xc) = uVar2;
      *(undefined2 *)(param_1 + 0x2c) = uVar2;
      if (*_Dst == '\x0f') goto LAB_005e40cf;
      break;
    case '\x01':
    case '\x02':
    case '\x06':
    case '\f':
    case '\r':
    case '\x10':
      _Dst[0xc] = '\0';
      _Dst[0xd] = '\0';
      *(undefined2 *)(_Dst + 2) = uVar2;
      *(undefined2 *)(_Dst + 4) = uVar3;
      uVar2 = FUN_00424561();
      *(undefined2 *)(_Dst + 6) = uVar2;
      uVar2 = FUN_00424561();
      *(undefined2 *)(_Dst + 8) = uVar2;
      break;
    case '\x03':
    case '\x04':
    case '\a':
    case '\b':
    case '\t':
    case '\v':
      uVar2 = FUN_00424561();
      *(undefined2 *)(_Dst + 2) = uVar2;
      uVar2 = FUN_00424561();
      *(undefined2 *)(_Dst + 4) = uVar2;
      uVar2 = FUN_00424561();
      *(undefined2 *)(_Dst + 0xc) = uVar2;
      *(undefined2 *)(param_1 + 0x2c) = uVar2;
      _Dst[8] = '\0';
      _Dst[9] = '\0';
      _Dst[6] = '\0';
      _Dst[7] = '\0';
      break;
    case '\n':
      cVar1 = FUN_0042452b();
      _Dst[0x12] = cVar1;
      _Dst[10] = '\0';
      _Dst[0x10] = '\0';
      _Dst[0x11] = '\0';
      _Dst[8] = '\0';
      _Dst[9] = '\0';
      _Dst[6] = '\0';
      _Dst[7] = '\0';
      _Dst[0xc] = '\0';
      _Dst[0xd] = '\0';
      _Dst[4] = '\0';
      _Dst[5] = '\0';
      _Dst[2] = '\0';
      _Dst[3] = '\0';
      goto LAB_005e4063;
    case '\x0e':
      _Dst[0xc] = '\0';
      _Dst[0xd] = '\0';
      *(undefined2 *)(_Dst + 2) = uVar2;
      *(undefined2 *)(_Dst + 4) = uVar3;
      uVar2 = FUN_00424561();
      *(undefined2 *)(_Dst + 6) = uVar2;
      uVar2 = FUN_00424561();
      *(undefined2 *)(_Dst + 8) = uVar2;
LAB_005e40cf:
      uVar2 = FUN_00424561();
      *(undefined2 *)(_Dst + 0xe) = uVar2;
    }
    cVar1 = FUN_0042452b();
    _Dst[10] = cVar1;
    uVar2 = FUN_00424561();
    *(undefined2 *)(_Dst + 0x10) = uVar2;
    uVar2 = *(undefined2 *)(_Dst + 2);
    uVar3 = *(undefined2 *)(_Dst + 4);
LAB_005e4063:
    uVar5 = uVar5 - 1;
  } while( true );
}


