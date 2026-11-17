/* FUN_00669539 - 0x00669539 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_00669539(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x794) = uVar1;
  return param_2;
}


