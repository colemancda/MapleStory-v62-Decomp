/* FUN_00559727 - 0x00559727 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00559727(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 0xc);
  while (puVar3 != (undefined4 *)0x0) {
    iVar1 = *(int *)((-(uint)(puVar3 != (undefined4 *)0x0) & (uint)(puVar3 + -4)) + 4);
    puVar2 = (undefined4 *)FUN_00518b2e();
    *puVar2 = *puVar3;
    puVar3 = (undefined4 *)(-(uint)(iVar1 != 0) & iVar1 + 0x10U);
  }
  return;
}


