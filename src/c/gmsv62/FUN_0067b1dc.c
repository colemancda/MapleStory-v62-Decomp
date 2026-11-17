/* FUN_0067b1dc - 0x0067b1dc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_0067b1dc(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00413367(param_1 + 0xd0,*(undefined4 *)(param_1 + 0xd8));
  if (0x7fffffff < uVar1) {
    return 0;
  }
  return *(int *)(param_1 + 0xe8) + *(int *)(param_1 + 0xe4);
}


