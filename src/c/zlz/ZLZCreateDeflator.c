/* ZLZCreateDeflator - 0x1000ac50 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* struct ZIStream * __cdecl ZLZCreateDeflator(int,struct ZIStream *,int) */

ZIStream * __cdecl ZLZCreateDeflator(int param_1,ZIStream *param_2,int param_3)

{
  int iVar1;
  ZIStream *pZVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  ZIStream *pZVar5;
  int local_14;
  ZIStream *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xac50  2  ?ZLZCreateDeflator@@YAPAUZIStream@@HPAU1@H@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000c646;
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
    *(int *)(pZVar2 + 0xc) = 0;
    *(undefined4 *)(pZVar2 + 0x48) = 0;
    *(undefined4 *)(pZVar2 + 0x4c) = 0;
    pZVar5 = pZVar2 + 0x10;
    for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pZVar5 = 0;
      pZVar5 = pZVar5 + 4;
    }
    *(undefined4 *)(pZVar2 + 0x50) = 0;
    local_4 = 3;
    *(undefined ***)pZVar2 = &PTR_FUN_1000edd0;
    local_10 = pZVar2;
    puVar3 = FUN_1000b870((int *)(pZVar2 + 0xc));
    *(undefined4 **)(pZVar2 + 0x1c) = puVar3;
    *(int *)(pZVar2 + 0x4c) = param_1;
    if (param_1 == 0) {
      *(undefined4 *)(pZVar2 + 0x20) = 0x10000;
    }
    else {
      *(undefined4 *)(pZVar2 + 0x20) = 0xffff;
    }
    if (param_3 < 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = param_3;
      if (9 < param_3) {
        iVar1 = 9;
      }
    }
    DVar4 = FUN_10004340((int)(pZVar2 + 0x10),iVar1,s_1_1_3_100101e4,0x38);
    if ((int)DVar4 < 0) {
      *(uint *)(pZVar2 + 8) = *(uint *)(pZVar2 + 8) | 4;
      FUN_1000abe0(DVar4);
    }
    *(uint *)(pZVar2 + 8) = *(uint *)(pZVar2 + 8) | 8;
    *(int *)(pZVar2 + 4) = param_3;
    ExceptionList = puStack_8;
    return pZVar2;
  }
  ExceptionList = local_c;
  return (ZIStream *)0x0;
}


