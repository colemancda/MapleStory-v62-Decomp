/* FUN_10004020 - 0x10004020 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10004020(void)

{
  int iVar1;
  undefined4 *puVar2;
  int local_14;
  undefined *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000c588;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_10004110(1,&local_14);
  local_10 = &DAT_10016fd4;
  FUN_100040e0();
  local_4 = 0;
  puVar2 = DAT_10016fe0;
  if (DAT_10016fe0 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_100041b0(iVar1,local_14);
    puVar2[-2] = DAT_10016ff0;
    DAT_10016ff0 = puVar2;
  }
  DAT_10016fe0 = (undefined4 *)*puVar2;
  _DAT_10016fd8 = _DAT_10016fd8 + -1;
  if (_DAT_10016fd8 == 0) {
    _DAT_10016fd4 = 0;
  }
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &PTR_LAB_1000d080;
    puVar2[1] = DAT_10016fcc;
    DAT_10016fcc = puVar2;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[5] = 0;
    *puVar2 = &PTR_FUN_1000d07c;
  }
  DAT_10017010 = puVar2;
  ExceptionList = local_c;
  return;
}


