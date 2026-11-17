/* FUN_0081669f - 0x0081669f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0081669f(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  while (uVar2 != 0) {
    iVar1 = *(int *)((-(uint)(uVar2 != 0) & uVar2 - 0x10) + 4);
    FUN_004b3ee0(uVar2);
    uVar2 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
  }
  return;
}


