/* FUN_0050d2d6 - 0x0050d2d6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __fastcall FUN_0050d2d6(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 4))();
  iVar1 = FUN_00413367(iVar1 + 0x2dc,*(undefined4 *)(iVar1 + 0x2e4));
  return iVar1 != 0;
}


