/* FUN_007b3bb4 - 0x007b3bb4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_007b3bb4(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x1e64) != 0) &&
     (iVar1 = FUN_007b3c0f(*(int *)(param_1 + 0x1e64)), iVar1 == 0)) {
    return 1;
  }
  iVar1 = FUN_004cd670(param_1 + 0x1ef0,*(undefined4 *)(param_1 + 0x1ef8));
  if ((((iVar1 == 0) && (iVar1 = FUN_0050d2d6(), iVar1 == 0)) &&
      ((*(uint *)(param_1 + 0x52c) & 0xfffffffe) != 0x12)) && (*(int *)(param_1 + 0x246c) == 0)) {
    return 0;
  }
  return 1;
}


