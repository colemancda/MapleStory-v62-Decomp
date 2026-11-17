/* FUN_004bae49 - 0x004bae49 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004bae49(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004b8c34();
  *(undefined4 *)(param_1 + 0xb0) = uVar1;
  return;
}


