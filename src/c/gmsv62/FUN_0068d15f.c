/* FUN_0068d15f - 0x0068d15f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0068d15f(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_0042452b();
  uVar2 = FUN_0042459a();
  *(undefined4 *)(param_1 + 0x1bc + cVar1 * 4) = uVar2;
  FUN_008161f1(0);
  return;
}


