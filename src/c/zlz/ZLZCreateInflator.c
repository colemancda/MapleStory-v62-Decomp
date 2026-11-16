/* ZLZCreateInflator - 0x1000b410 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* struct ZIStream * __cdecl ZLZCreateInflator(int,struct ZIStream *,unsigned int) */

ZIStream * __cdecl ZLZCreateInflator(int param_1,ZIStream *param_2,uint param_3)

{
  int iVar1;
  ZIStream *pZVar2;
  DWORD DVar3;
  ZIStream *pZVar4;
  int local_14;
  ZIStream *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xb410  3  ?ZLZCreateInflator@@YAPAUZIStream@@HPAU1@I@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000c6e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_10004110(3,&local_14);
  local_10 = (ZIStream *)&DAT_10016fd4;
  FUN_100040e0();
  local_4 = 0;
  pZVar2 = DAT_10016fe8;
  if (DAT_10016fe8 == (ZIStream *)0x0) {
    pZVar2 = (ZIStream *)FUN_100041b0(iVar1,local_14);
    *(ZIStream **)(pZVar2 + -8) = DAT_10016ff8;
    DAT_10016ff8 = pZVar2;
  }
  DAT_10016fe8 = *(ZIStream **)pZVar2;
  _DAT_10016fd8 = _DAT_10016fd8 + -1;
  if (_DAT_10016fd8 == 0) {
    _DAT_10016fd4 = 0;
  }
  if (pZVar2 != (ZIStream *)0x0) {
    *(undefined4 *)(pZVar2 + 4) = 0;
    *(undefined4 *)(pZVar2 + 8) = 0;
    *(undefined4 *)(pZVar2 + 0xc) = 0;
    *(undefined4 *)(pZVar2 + 0x48) = 0;
    *(undefined4 *)(pZVar2 + 0x4c) = 0;
    pZVar4 = pZVar2 + 0x10;
    for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pZVar4 = 0;
      pZVar4 = pZVar4 + 4;
    }
    *(undefined4 *)(pZVar2 + 0x50) = 0;
    local_4 = 3;
    *(undefined ***)pZVar2 = &PTR_FUN_1000ee64;
    *(uint *)(pZVar2 + 0x54) = param_3;
    if (param_3 == 0) {
      *(undefined4 *)(pZVar2 + 0x54) = 0xffffffff;
    }
    local_10 = pZVar2;
    DVar3 = FUN_10007590((int)(pZVar2 + 0x10),s_1_1_3_100101e4,0x38);
    if ((int)DVar3 < 0) {
      *(uint *)(pZVar2 + 8) = *(uint *)(pZVar2 + 8) | 4;
      FUN_1000abe0(DVar3);
    }
    *(uint *)(pZVar2 + 8) = *(uint *)(pZVar2 + 8) | 0x10;
    *(uint *)(pZVar2 + 4) = param_3;
    *(ZIStream **)(pZVar2 + 0x4c) = param_2;
    ExceptionList = puStack_8;
    return pZVar2;
  }
  ExceptionList = local_c;
  return (ZIStream *)0x0;
}


