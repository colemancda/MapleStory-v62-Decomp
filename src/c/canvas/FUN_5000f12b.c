/* FUN_5000f12b - 0x5000f12b in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __cdecl FUN_5000f12b(int param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (1 < *(uint *)(param_1 + 8)) {
    do {
      puVar6 = *(undefined4 **)(param_1 + 0xc);
      bVar3 = false;
      iVar1 = *(int *)((-(uint)(puVar6 != (undefined4 *)0x0) & (uint)(puVar6 + -4)) + 4);
      puVar4 = (undefined4 *)(-(uint)(iVar1 != 0) & iVar1 + 0x10U);
      if (puVar4 == (undefined4 *)0x0) {
        return;
      }
      do {
        puVar5 = puVar4;
        piVar2 = (int *)*puVar6;
        if (*(int *)*puVar5 < *piVar2) {
          *puVar6 = (int *)*puVar5;
          *puVar5 = piVar2;
          bVar3 = true;
        }
        iVar1 = *(int *)((-(uint)(puVar5 != (undefined4 *)0x0) & (uint)(puVar5 + -4)) + 4);
        puVar4 = (undefined4 *)(-(uint)(iVar1 != 0) & iVar1 + 0x10U);
        puVar6 = puVar5;
      } while (puVar4 != (undefined4 *)0x0);
    } while (bVar3);
  }
  return;
}


