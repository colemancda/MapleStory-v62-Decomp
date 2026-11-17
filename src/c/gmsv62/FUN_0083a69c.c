/* FUN_0083a69c - 0x0083a69c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0083a69c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0055a766();
  *(undefined4 *)(param_1 + 0x1ef8) = uVar1;
  uVar1 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x2410) = uVar1;
  (*DAT_0097b704)();
  uVar1 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x2428) = 0;
  *(undefined4 *)(param_1 + 0x241c) = uVar1;
  return;
}


