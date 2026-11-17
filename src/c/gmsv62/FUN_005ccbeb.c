/* FUN_005ccbeb - 0x005ccbeb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_005ccbeb(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00413367(param_1 + 0x8c,*(undefined4 *)(param_1 + 0x94));
  iVar2 = FUN_00413367(param_1 + 0x80,*(undefined4 *)(param_1 + 0x88));
  return iVar1 - iVar2;
}


