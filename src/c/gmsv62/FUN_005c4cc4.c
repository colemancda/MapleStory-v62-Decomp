/* FUN_005c4cc4 - 0x005c4cc4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_005c4cc4(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_00413367(param_1 + 0x340,*(undefined4 *)(param_1 + 0x348));
  if (0x7fffffff < uVar1) {
    return 0;
  }
  iVar2 = FUN_00413367(param_1 + 0x368,*(undefined4 *)(param_1 + 0x370));
  iVar3 = FUN_00413367(param_1 + 0x374,*(undefined4 *)(param_1 + 0x37c));
  return iVar3 + iVar2;
}


