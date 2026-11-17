/* FUN_0041c4ba - 0x0041c4ba in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0041c4ba(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041def7(param_1 * 2 + 0xe);
  *(int *)(iVar1 + 4) = param_1;
  return;
}


