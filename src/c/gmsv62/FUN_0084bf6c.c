/* FUN_0084bf6c - 0x0084bf6c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0084bf6c(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = FUN_0042452b();
  uVar2 = FUN_0042452b();
  *(undefined1 *)(param_1 + 0x2d00) = uVar1;
  *(undefined1 *)(param_1 + 0x2d01) = uVar2;
  return;
}


