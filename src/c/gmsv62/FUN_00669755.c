/* FUN_00669755 - 0x00669755 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined1 __fastcall FUN_00669755(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006717e0();
  *(undefined4 *)(param_1 + 0x8a4) = uVar1;
  return param_2;
}


