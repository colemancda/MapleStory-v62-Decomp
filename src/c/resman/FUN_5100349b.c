/* FUN_5100349b - 0x5100349b in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void FUN_5100349b(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_51005950();
  if (-1 < *(int *)(unaff_EBP + 8)) {
    uVar3 = (*DAT_5100951c)();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    *(undefined4 **)(unaff_EBP + -0x14) = (undefined4 *)(extraout_ECX + 0x50);
    FUN_510011e9();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    while ((*(int *)(extraout_ECX + 100) != 0 &&
           (iVar2 = **(int **)(extraout_ECX + 0x68), uVar4 = -(uint)(iVar2 != 0) & iVar2 - 0x10U,
           *(int *)(unaff_EBP + 8) <=
           *(int *)(unaff_EBP + -0x10) - *(int *)((-(uint)(uVar4 != 0) & uVar4 + 0x10) + 0x10)))) {
      uVar4 = -(uint)(iVar2 != 0) & iVar2 - 0x10U;
      FUN_51004148((void *)(extraout_ECX + 0x6c),
                   (int *)(*(int *)((-(uint)(uVar4 != 0) & uVar4 + 0x10) + 0x14) + 8));
      FUN_51003e34((void *)(extraout_ECX + 0x58));
    }
    piVar1 = (int *)(extraout_ECX + 0x54);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(extraout_ECX + 0x50) = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


