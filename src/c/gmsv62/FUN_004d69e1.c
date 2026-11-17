/* FUN_004d69e1 - 0x004d69e1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004d69e1(void)

{
  undefined4 uVar1;
  int *piVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  FUN_004d6c99();
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + 0xc);
  FUN_004125cc();
  **(undefined4 **)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  uVar4 = FUN_00404960(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_004035f5(uVar4);
  FUN_004027b3();
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  *(undefined1 *)(unaff_EBP + -4) = 6;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  do {
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar5 = (**(code **)(**(int **)(unaff_EBP + -0x14) + 0xc))
                      (*(int **)(unaff_EBP + -0x14),1,unaff_EBP + -0x40,unaff_EBP + -0x1c);
    if (iVar5 != 0) {
      *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + 8);
      iVar5 = FUN_004d6d8d(unaff_EBP + -0x28,0);
      if (iVar5 == 0) {
        *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + 8);
        FUN_004d6de1(unaff_EBP + 8,unaff_EBP + -0x30);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        iVar5 = FUN_00402bc3(unaff_EBP + -0x40);
        if (iVar5 < 0) {
          FUN_00878dfb(iVar5);
        }
        piVar2 = *(int **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        piVar2 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x2c) != 0) {
          FUN_004d6ccc(0);
          *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        }
        piVar2 = *(int **)(unaff_EBP + 0xc);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        uVar4 = 1;
      }
      else {
        *(undefined1 *)(unaff_EBP + -4) = 5;
        iVar5 = FUN_00402bc3(unaff_EBP + -0x40);
        if (iVar5 < 0) {
          FUN_00878dfb(iVar5);
        }
        piVar2 = *(int **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        piVar2 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x2c) != 0) {
          FUN_004d6ccc(0);
          *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        }
        piVar2 = *(int **)(unaff_EBP + 0xc);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        uVar4 = 0;
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return uVar4;
    }
    uVar4 = *(undefined4 *)(unaff_EBP + -0x38);
    puVar6 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x24,0x3b4);
    uVar1 = *puVar6;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iVar5 = FUN_0087c71f(uVar4,uVar1);
    if (iVar5 == 0) {
LAB_004d6aeb:
      bVar3 = true;
    }
    else {
      puVar6 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x20,0x40b);
      iVar5 = FUN_0087c71f(uVar4,*puVar6);
      if (*(int *)(unaff_EBP + -0x20) != 0) {
        FUN_00403384(*(int *)(unaff_EBP + -0x20) + -0xc);
      }
      bVar3 = false;
      if (iVar5 == 0) goto LAB_004d6aeb;
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      FUN_00403384(*(int *)(unaff_EBP + -0x24) + -0xc);
    }
    if (!bVar3) {
      uVar4 = FUN_00405a23(unaff_EBP + -0x28,unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_004d6cfb(0xffffffff);
      FUN_0045b2fc(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_00402fa6();
    }
    iVar5 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
  } while( true );
}


