/* FUN_004bed04 - 0x004bed04 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __fastcall FUN_004bed04(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 4))();
  iVar1 = FUN_00413367(iVar1 + 0x1d4,*(undefined4 *)(iVar1 + 0x1dc));
  return iVar1 != 0;
}


