/* FUN_005d0a74 - 0x005d0a74 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_005d0a74(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x450) != 0) {
    uVar1 = FUN_005d0a9e();
    *(undefined4 *)(param_1 + 0x450) = 0;
    *(undefined4 *)(param_1 + 0x454) = uVar1;
  }
  return *(undefined4 *)(param_1 + 0x454);
}


