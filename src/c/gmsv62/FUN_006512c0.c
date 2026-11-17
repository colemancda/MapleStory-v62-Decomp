/* FUN_006512c0 - 0x006512c0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006512c0(void)

{
  int iVar1;
  undefined4 uVar2;
  int xRight;
  int yTop;
  int xLeft;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    *(undefined4 *)(unaff_EBP + 8) = 0x80004005;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8();
  }
  *(undefined4 *)(unaff_EBP + -100) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar1 = FUN_0040cf4d();
  *(int *)(unaff_EBP + -0x5c) = iVar1;
  if (iVar1 < 1) {
    *(undefined4 *)(unaff_EBP + 8) = 0x80004005;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8();
  }
  FUN_0065490e();
  *(undefined4 *)(unaff_EBP + -0x18) = 1;
  if (0 < iVar1) {
    do {
      FUN_0087a1b0();
      uVar2 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x18));
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe20;
      FUN_004033a1(uVar2);
      iVar1 = unaff_EBP + -0x184;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_0040263d(iVar1);
      FUN_004048a4(iVar1);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iVar1 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x58) = iVar1;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (((iVar1 != 0) && (iVar1 = FUN_00404b30(), iVar1 < 0)) && (iVar1 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        *(undefined4 *)(unaff_EBP + 8) = 0x80004005;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8();
      }
      puVar4 = (undefined4 *)
               (*(int *)(unaff_EBP + -0x18) * 0x5c + -0x5c + **(int **)(unaff_EBP + 0xc));
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe24;
      FUN_00679e4e(&stack0xfffffe24);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      uVar2 = FUN_00412550();
      *puVar4 = uVar2;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe24;
      FUN_00679e4e(&stack0xfffffe24);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      uVar2 = FUN_00412550();
      puVar4[1] = uVar2;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe24;
      FUN_00679e4e(&stack0xfffffe24);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iVar1 = FUN_00412550();
      puVar4[3] = iVar1 * 1000;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe24;
      FUN_00679e4e(&stack0xfffffe24);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iVar1 = FUN_00412550();
      puVar4[2] = iVar1 * 1000;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe24;
      FUN_00679e4e(&stack0xfffffe24);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      uVar2 = FUN_00412550();
      puVar4[4] = uVar2;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe24;
      FUN_00679e4e(&stack0xfffffe24);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      uVar2 = FUN_00412550();
      puVar4[5] = uVar2;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe24;
      FUN_00679e4e(&stack0xfffffe24);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      uVar2 = FUN_00412550();
      puVar4[6] = uVar2;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe24;
      FUN_00679e4e(&stack0xfffffe24);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      uVar2 = FUN_00412550();
      puVar4[0xd] = uVar2;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe24;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      iVar1 = FUN_00412550();
      puVar4[0xe] = (uint)(iVar1 != 0);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe24;
      FUN_00679e4e(&stack0xfffffe24);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      uVar2 = FUN_00412550();
      puVar4[0xf] = uVar2;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe24;
      FUN_00679e4e(&stack0xfffffe24);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      FUN_0065123a();
      uVar2 = FUN_006512a0();
      puVar4[0x10] = uVar2;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iVar1 = FUN_00402bc3(unaff_EBP + -0x94);
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe20;
      FUN_00679e4e(&stack0xfffffe20,0x3ba);
      iVar1 = unaff_EBP + -0xb4;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_0040263d(iVar1);
      FUN_004048a4(iVar1);
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      iVar1 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x60) = iVar1;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      if (((iVar1 != 0) && (iVar1 = FUN_0041a4e5(), iVar1 < 0)) && (iVar1 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe20;
      FUN_00679e4e(&stack0xfffffe20,0x3bb);
      iVar1 = unaff_EBP + -0xd4;
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      FUN_0040263d(iVar1);
      FUN_004048a4(iVar1);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      iVar1 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x44) = iVar1;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      if (((iVar1 != 0) && (iVar1 = FUN_0041a4e5(), iVar1 < 0)) && (iVar1 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x20) == 0) {
        if (*(int *)(unaff_EBP + -0x1c) != 0) goto LAB_006518e7;
        SetRectEmpty((LPRECT)(puVar4 + 7));
      }
      else {
        if ((*(int *)(unaff_EBP + -0x1c) == 0) && (FUN_00878dfb(), *(int *)(unaff_EBP + -0x1c) == 0)
           ) {
          FUN_00878dfb();
        }
LAB_006518e7:
        *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x1c);
        if (*(int *)(unaff_EBP + -0x20) == 0) {
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + -0x50) = *(int *)(unaff_EBP + -0x20);
        if (*(int *)(unaff_EBP + -0x20) == 0) {
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x20);
        iVar1 = FUN_00404abb();
        xRight = FUN_00404a94();
        yTop = FUN_00404abb();
        xLeft = FUN_00404a94();
        SetRect((LPRECT)(puVar4 + 7),xLeft,yTop,xRight,iVar1);
      }
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe28;
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      FUN_0040263d();
      puVar3 = (undefined2 *)FUN_004048a4();
      *(undefined2 *)(unaff_EBP + -0x10) = *puVar3;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      if (*(short *)(unaff_EBP + -0x10) != 0) {
        FUN_00679d86();
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        FUN_0041354c(unaff_EBP + -0x24);
        FUN_00402e8e();
        FUN_00408b49();
        FUN_00402fa6();
        iVar1 = *(int *)(unaff_EBP + -0x38);
        puVar4[0x11] = iVar1;
        if (iVar1 != 0) {
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + -0x38) = 0;
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        FUN_00402676();
      }
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe28;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      FUN_0040263d();
      puVar3 = (undefined2 *)FUN_004048a4();
      *(undefined2 *)(unaff_EBP + -0x10) = *puVar3;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      if (*(short *)(unaff_EBP + -0x10) != 0) {
        FUN_00679d86();
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        FUN_0041354c(unaff_EBP + -0x24);
        FUN_00402e8e();
        FUN_00408b49();
        FUN_00402fa6();
        iVar1 = *(int *)(unaff_EBP + -0x34);
        puVar4[0x12] = iVar1;
        if (iVar1 != 0) {
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + -0x34) = 0;
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        FUN_00402676();
      }
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe28;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      FUN_0040263d();
      puVar3 = (undefined2 *)FUN_004048a4();
      *(undefined2 *)(unaff_EBP + -0x10) = *puVar3;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      if (*(short *)(unaff_EBP + -0x10) != 0) {
        FUN_00679d86();
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        FUN_0041354c(unaff_EBP + -0x24);
        FUN_00402e8e();
        FUN_00408b49();
        FUN_00402fa6();
        iVar1 = *(int *)(unaff_EBP + -0x40);
        puVar4[0x13] = iVar1;
        if (iVar1 != 0) {
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + -0x40) = 0;
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        FUN_00402676();
      }
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe28;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      FUN_0040263d();
      puVar3 = (undefined2 *)FUN_004048a4();
      *(undefined2 *)(unaff_EBP + -0x10) = *puVar3;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      if (*(short *)(unaff_EBP + -0x10) != 0) {
        FUN_0041354c(unaff_EBP + -0x24);
        FUN_00402e8e();
        FUN_00408b49();
        FUN_00402fa6();
        iVar1 = *(int *)(unaff_EBP + -0x3c);
        puVar4[0x14] = iVar1;
        if (iVar1 != 0) {
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + -0x3c) = 0;
        }
      }
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe28;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      FUN_0040263d();
      puVar3 = (undefined2 *)FUN_004048a4();
      *(undefined2 *)(unaff_EBP + -0x10) = *puVar3;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      if (*(short *)(unaff_EBP + -0x10) != 0) {
        FUN_0041354c(unaff_EBP + -0x24);
        FUN_00402e8e();
        FUN_00408b49();
        FUN_00402fa6();
        iVar1 = *(int *)(unaff_EBP + -0x2c);
        puVar4[0x15] = iVar1;
        if (iVar1 != 0) {
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        }
      }
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe24;
      FUN_00679e4e(&stack0xfffffe24);
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      uVar2 = FUN_00412550();
      puVar4[0xb] = uVar2;
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe24;
      FUN_00679e4e(&stack0xfffffe24);
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      uVar2 = FUN_00412550();
      puVar4[0xc] = uVar2;
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      while( true ) {
        VariantInit((VARIANTARG *)(unaff_EBP + -0x74));
        *(undefined1 *)(unaff_EBP + -4) = 0x31;
        FUN_0087a1b0();
        FUN_00412335();
        *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe28;
        FUN_00402e8e();
        *(undefined1 *)(unaff_EBP + -4) = 0x31;
        FUN_0040263d();
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x33;
        iVar1 = FUN_00402e32();
        if (iVar1 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x31;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          FUN_00878dfb();
        }
        if (*(short *)(unaff_EBP + -0x74) == 0) break;
        uVar2 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
        puVar4 = (undefined4 *)FUN_0047cf98();
        *puVar4 = *(undefined4 *)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      FUN_00402676();
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    } while (*(int *)(unaff_EBP + -0x18) <= *(int *)(unaff_EBP + -0x5c));
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + 0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 1;
}


