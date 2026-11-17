/* FUN_005cdc40 - 0x005cdc40 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005cdc40(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0042452b();
  iVar2 = FUN_005cdcb1();
  if ((iVar2 != 0) &&
     (iVar2 = FUN_004cd670(*(int *)(param_1 + 0x15c) + 0x1b0,
                           *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x1b8)), iVar2 == 0)) {
    return;
  }
  if ((uVar1 & 0xff) == 0) {
    FUN_005d10de();
  }
  param_2 = (*DAT_0097b704)();
  param_2 = param_2 + 500;
  iVar2 = FUN_004b8f75(&param_2,0);
  *(uint *)(iVar2 + 0xc) = uVar1 & 0xff;
  return;
}


