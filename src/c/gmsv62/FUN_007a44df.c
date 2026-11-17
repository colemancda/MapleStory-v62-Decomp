/* FUN_007a44df - 0x007a44df in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __fastcall FUN_007a44df(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 4))();
  iVar1 = FUN_00413367(iVar1 + 0x4bc,*(undefined4 *)(iVar1 + 0x4c4));
  return iVar1 != 0;
}


