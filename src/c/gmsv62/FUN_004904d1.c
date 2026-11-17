/* FUN_004904d1 - 0x004904d1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_004904d1(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 100) + 0x38);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(param_1 + 0x728) + iVar1 + param_4) % iVar1;
  }
  if (*(int *)(*(int *)(param_1 + 0x20c) + 0x500) != 8) {
    FUN_004586f2(iVar1);
  }
  FUN_004ae16e(iVar1);
  return 1;
}


