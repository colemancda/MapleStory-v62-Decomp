/* FUN_0065aaa6 - 0x0065aaa6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0065aaa6(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) == 0) {
    uVar3 = 0;
  }
  else {
    FUN_0065ad0b();
    *(undefined1 **)(unaff_EBP + -0x18) = &stack0xffffffa4;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    FUN_00679e4e(&stack0xffffffa4,0x3cc);
    iVar4 = unaff_EBP + -0x28;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_0040263d(iVar4);
    FUN_004048a4(iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(short *)(unaff_EBP + -0x28) != 0) {
      VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
      iVar4 = FUN_00402e32(unaff_EBP + -0x58);
      if (iVar4 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iVar4 = FUN_00402bed(unaff_EBP + -0x58,unaff_EBP + -0x28,0);
      if (iVar4 < 0) {
        *(undefined4 *)(unaff_EBP + -0x10) = 0x80000000;
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x50);
      }
      iVar4 = FUN_00402bed(unaff_EBP + -0x28,unaff_EBP + -0x28,0);
      if (-1 < iVar4) {
        *(undefined1 **)(unaff_EBP + -0x18) = &stack0xffffffa4;
        FUN_00402e8e(*(undefined4 *)(unaff_EBP + -0x20));
        iVar4 = unaff_EBP + -0x38;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_0040263d(iVar4);
        FUN_004048a4(iVar4);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (*(short *)(unaff_EBP + -0x38) != 0) {
          iVar4 = FUN_00402bed(unaff_EBP + -0x38,unaff_EBP + -0x38,0);
          if (-1 < iVar4) {
            *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x30);
          }
        }
        piVar1 = *(int **)(unaff_EBP + 0xc);
        if ((piVar1 != (int *)0x0) &&
           (puVar2 = *(undefined4 **)(unaff_EBP + 0x10), puVar2 != (undefined4 *)0x0)) {
          FUN_0065ad3b();
          *(undefined1 **)(unaff_EBP + 0xc) = &stack0xffffffa4;
          *(undefined1 *)(unaff_EBP + -4) = 7;
          FUN_0040675b(unaff_EBP + -0x28);
          iVar4 = unaff_EBP + -0x48;
          *(undefined1 *)(unaff_EBP + -4) = 7;
          FUN_0040263d(iVar4);
          FUN_004048a4(iVar4);
          *(undefined1 *)(unaff_EBP + -4) = 9;
          iVar4 = FUN_00402bed(unaff_EBP + -0x48,unaff_EBP + -0x48,0);
          if (-1 < iVar4) {
            puVar5 = (undefined4 *)*piVar1;
            if (puVar5 == (undefined4 *)0x0) {
              uVar3 = 0;
            }
            else {
              uVar3 = *puVar5;
            }
            puVar5 = (undefined4 *)FUN_0065a9ba(unaff_EBP + 0xc,uVar3);
            FUN_00408b49();
            FUN_00402fa6();
            iVar4 = *(int *)(unaff_EBP + 0xc);
            *puVar2 = *puVar5;
            if (iVar4 != 0) {
              FUN_004030b1();
              *(undefined4 *)(unaff_EBP + 0xc) = 0;
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 7;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 6;
          if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
            (**(code **)(**(int **)(unaff_EBP + 0x10) + 8))();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 4;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
    }
    uVar3 = *(undefined4 *)(unaff_EBP + -0x10);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


