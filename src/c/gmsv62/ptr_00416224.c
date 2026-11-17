/* ptr_00416224 - 0x00416224 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * ptr_00416224(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  int unaff_ESI;
  
  uVar3 = FUN_0087a024();
  uVar3 = uVar3 % *(uint *)(unaff_ESI + 8);
  puVar4 = *(undefined4 **)(*(int *)(unaff_ESI + 4) + uVar3 * 4);
  puVar1 = (undefined4 *)(*(int *)(unaff_ESI + 4) + uVar3 * 4);
  if (puVar4 != (undefined4 *)0x0) {
    do {
      if (puVar4[2] == **(int **)(unaff_EBP + 8)) {
        if (*(int *)(unaff_EBP + 0xc) == 0) {
          return puVar4;
        }
        FUN_00412b9a();
        return puVar4;
      }
      puVar4 = (undefined4 *)puVar4[1];
    } while (puVar4 != (undefined4 *)0x0);
  }
  *(int *)(unaff_ESI + 0xc) = *(int *)(unaff_ESI + 0xc) + 1;
  puVar4 = (undefined4 *)FUN_0041a95c();
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = *puVar1;
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    *puVar4 = &PTR_LAB_008e86e0;
    puVar4[2] = *puVar2;
    puVar4[4] = 0;
    *puVar4 = &PTR_FUN_008e86dc;
  }
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_00412b9a();
  }
  *puVar1 = puVar4;
  return puVar4;
}


