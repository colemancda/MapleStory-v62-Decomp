/* FUN_0041f6a0 - 0x0041f6a0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0041f6a0(int param_1)

{
  LONG LVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  LVar1 = InterlockedExchange((LONG *)(param_1 + 8),0);
  if (LVar1 != 0) {
    (*DAT_0097b388)(LVar1);
  }
  return;
}


