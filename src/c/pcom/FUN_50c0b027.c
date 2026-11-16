/* FUN_50c0b027 - 0x50c0b027 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int FUN_50c0b027(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  void *this;
  undefined4 *puVar4;
  int unaff_EBP;
  uint uVar5;
  
  FUN_50c10270();
  uVar5 = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar3 = FUN_50c0bcb1();
  if (-1 < iVar3) {
    iVar3 = *(int *)(unaff_EBP + 8);
    puVar4 = (undefined4 *)(iVar3 + 0x1c);
    *(undefined4 **)(unaff_EBP + -0x14) = puVar4;
    *(undefined4 **)(unaff_EBP + -0x18) = puVar4;
    FUN_50c026fc();
    iVar1 = *(int *)(iVar3 + 0x24);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 == 0) {
      FUN_50c0b723(*(void **)(unaff_EBP + -0x10),*(int *)(iVar3 + 0x2c));
    }
    else {
      if (**(int **)(iVar3 + 0x28) == 0) {
        *(undefined4 *)(unaff_EBP + 8) = 0;
      }
      else {
        *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(**(int **)(iVar3 + 0x28) + -4);
      }
      if (*(int *)(unaff_EBP + 8) != 0) {
        do {
          iVar1 = **(int **)(iVar3 + 0x28);
          this = (void *)FUN_50c0b92b((void *)(*(int *)(unaff_EBP + -0x10) + 0x10));
          FUN_50c0dbf1(this,iVar1 + uVar5 * 8);
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)(unaff_EBP + 8));
        puVar4 = *(undefined4 **)(unaff_EBP + -0x14);
      }
      *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x24) =
           *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1c);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    piVar2 = puVar4 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar4 = 0;
    }
    piVar2 = *(int **)(unaff_EBP + -0x10);
    **(undefined4 **)(unaff_EBP + 0xc) = piVar2;
    (**(code **)(*piVar2 + 4))(piVar2);
    iVar3 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}


