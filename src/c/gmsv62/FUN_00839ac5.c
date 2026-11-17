/* FUN_00839ac5 - 0x00839ac5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_00839ac5(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0x100) != 0) || (*(int *)(param_1 + 0x114) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}


