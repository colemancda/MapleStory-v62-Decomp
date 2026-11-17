/* FUN_00617d04 - 0x00617d04 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_00617d04(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (uVar1 = *(uint *)(*(int *)(param_1 + 0x58) + -4), uVar1 == 0)) {
    *param_2 = 0;
    FUN_00414edd(&DAT_00978474,0xffffffff);
  }
  else {
    uVar3 = FUN_004133f0();
    iVar2 = *(int *)(param_1 + 0x58);
    *param_2 = 0;
    FUN_00414f8b(iVar2 + (uVar3 % uVar1) * 4);
  }
  return param_2;
}


