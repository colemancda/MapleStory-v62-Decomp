/* FUN_0047cd42 - 0x0047cd42 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0047cd42(void)

{
  undefined4 uVar1;
  int *piVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffc4;
  *(int *)(unaff_EBP + -0x28) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x14);
  uVar1 = *puVar4;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_004354ee(uVar1,unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    FUN_00878dfb();
  }
  FUN_00434289();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  iVar6 = extraout_ECX;
  while( true ) {
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      FUN_00878dfb();
    }
    iVar5 = (**(code **)(**(int **)(unaff_EBP + -0x1c) + 0xc))
                      (*(int **)(unaff_EBP + -0x1c),1,unaff_EBP + -0x3c);
    if (iVar5 != 0) break;
    iVar5 = FUN_004032b4(0);
    *(int *)(unaff_EBP + -0x24) = iVar5;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (((iVar5 != 0) && (iVar5 = FUN_00438bfb(), iVar5 < 0)) && (iVar5 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    piVar2 = *(int **)(iVar6 + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffffc0;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    cVar3 = FUN_0047d0e2();
    if (cVar3 != '\0') {
      if ((*(int *)(unaff_EBP + -0x14) == 0) && (FUN_00878dfb(), *(int *)(unaff_EBP + -0x14) == 0))
      {
        FUN_00878dfb();
      }
      piVar2 = *(int **)(unaff_EBP + -0x14);
      FUN_00434262();
      iVar6 = (**(code **)(*piVar2 + 0x2c))(piVar2);
      if (iVar6 < 0) {
        FUN_00878e09(iVar6,piVar2);
      }
      iVar6 = *(int *)(unaff_EBP + -0x28);
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


