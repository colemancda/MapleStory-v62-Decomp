/* FUN_008581b4 - 0x008581b4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_008581b4(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x2ce0) != 0) {
    iVar1 = *(int *)(param_1 + 0x2ce8);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = *(uint *)(iVar1 + -4);
    }
    if (param_3 <= uVar2) {
      iVar1 = *(int *)(param_1 + 0x2ce8);
      *param_2 = 0;
      FUN_00414f8b(iVar1 + -4 + param_3 * 4);
      return param_2;
    }
  }
  *param_2 = 0;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  return param_2;
}


