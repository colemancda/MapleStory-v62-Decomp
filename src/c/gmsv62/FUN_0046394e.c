/* FUN_0046394e - 0x0046394e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0046394e(int param_1)

{
  char cVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  cVar1 = FUN_0042452b();
  if ((cVar1 == '\x7f') || (cVar1 == -0x7f)) {
    FUN_00464f0d(cVar1);
    FUN_00464e98();
  }
  else {
    FUN_00464f0d(cVar1);
  }
  return;
}


