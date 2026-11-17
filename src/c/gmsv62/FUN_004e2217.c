/* FUN_004e2217 - 0x004e2217 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e2217(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_1 + 0xc);
  while (puVar4 != (undefined4 *)0x0) {
    iVar1 = *(int *)((-(uint)(puVar4 != (undefined4 *)0x0) & (uint)(puVar4 + -4)) + 4);
    puVar2 = (undefined4 *)FUN_004e22e3();
    for (iVar3 = 0x39; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar2 = puVar2 + 1;
    }
    *(undefined2 *)puVar2 = *(undefined2 *)puVar4;
    puVar4 = (undefined4 *)(-(uint)(iVar1 != 0) & iVar1 + 0x10U);
  }
  return;
}


