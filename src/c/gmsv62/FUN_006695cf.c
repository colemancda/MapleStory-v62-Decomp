/* FUN_006695cf - 0x006695cf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_006695cf(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004133b5();
  *(undefined4 *)(param_1 + 2000) = uVar1;
  return param_2;
}


