/* FUN_0062ae6e - 0x0062ae6e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_0062ae6e(int param_1)

{
  undefined4 uVar1;
  
  FUN_005ee767();
  if ((*(int *)(param_1 + 0xd0) == 0) || (*(int *)(*(int *)(param_1 + 0xd0) + -4) == 0)) {
    uVar1 = 0;
  }
  else {
    FUN_0062f407(param_1 + 0xd0);
    uVar1 = 1;
  }
  return uVar1;
}


