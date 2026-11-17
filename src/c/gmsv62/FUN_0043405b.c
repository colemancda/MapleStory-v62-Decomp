/* FUN_0043405b - 0x0043405b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0043405b(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffcc;
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 0xc,0x6c2);
    uVar1 = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_004354ee(uVar1,unaff_EBP + -0x18,0);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00402676();
    VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_00434289(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x1c) == 0) {
        FUN_00878dfb(0x80004003);
      }
      iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x1c) + 0xc))
                        (*(int **)(unaff_EBP + -0x1c),1,unaff_EBP + -0x34,unaff_EBP + -0x20);
      if (iVar2 != 0) break;
      iVar2 = FUN_004032b4(0,0);
      *(int *)(unaff_EBP + -0x24) = iVar2;
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      if (iVar2 != 0) {
        iVar2 = FUN_00438bfb(unaff_EBP + -0x24);
        if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
          FUN_00878dfb(iVar2);
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (*(int *)(unaff_EBP + 0xc) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar3 = *(int **)(unaff_EBP + 0xc);
      iVar2 = (**(code **)(*piVar3 + 0x14))(piVar3,0);
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,piVar3,&DAT_009640b0);
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00434c6b();
      iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
    }
    FUN_0043549d();
    piVar3 = *(int **)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    piVar3 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar2 = FUN_004352c7(unaff_EBP + 8,unaff_EBP + -0x14);
    if (iVar2 != 0) {
      FUN_0043542f(unaff_EBP + 8);
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        FUN_00878dfb(0x80004003);
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          FUN_00878dfb(0x80004003);
        }
      }
      piVar3 = *(int **)(unaff_EBP + -0x14);
      iVar2 = FUN_00434262();
      iVar2 = (**(code **)(*piVar3 + 0x30))(piVar3,-iVar2,*(undefined4 *)(unaff_EBP + 0xc));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,piVar3,&DAT_009640b0);
      }
    }
    piVar3 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


