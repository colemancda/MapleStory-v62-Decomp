/* FUN_007f0f33 - 0x007f0f33 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_007f0f33(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004f1a11(0);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = FUN_004f1a11(0);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return param_1;
}


