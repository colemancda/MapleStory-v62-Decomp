/* FUN_004cd2a8 - 0x004cd2a8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004cd2a8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0045e2eb();
  uVar2 = FUN_0045e2eb();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}


