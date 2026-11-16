/* FUN_50c07810 - 0x50c07810 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __fastcall FUN_50c07810(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = puVar4 + *(int *)(param_1 + 8);
    while (puVar4 < puVar1) {
      puVar2 = (undefined4 *)*puVar4;
      puVar4 = puVar4 + 1;
      while (puVar3 = puVar2, puVar3 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)puVar3[1];
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)*puVar3)(1);
        }
      }
    }
    FUN_50c02783(&DAT_50c21310,*(undefined4 **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


