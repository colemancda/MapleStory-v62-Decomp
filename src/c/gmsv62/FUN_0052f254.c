/* FUN_0052f254 - 0x0052f254 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0052f254(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_0042452b();
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_0052f126(cVar1);
  if (cVar1 == 'I') {
    FUN_0052a7a4();
  }
  return;
}


