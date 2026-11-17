/* FUN_00410a5f - 0x00410a5f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00410a5f(void)

{
  int iVar1;
  int xRight;
  int yTop;
  int xLeft;
  undefined4 uVar2;
  int unaff_EBP;
  int *piVar3;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar1 = FUN_004084c5();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00412817();
  FUN_00412829();
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(iVar1 + 4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00412829();
  if (*(int *)(unaff_EBP + -0x24) == 0) {
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00412829();
    FUN_004027eb();
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(*(int *)(unaff_EBP + -0x24) + 0xc);
    FUN_004125cc();
    iVar1 = *(int *)(unaff_EBP + 0x10) / 10000;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    *(int *)(unaff_EBP + -0x48) = iVar1;
    if ((iVar1 == 0xbe) || (iVar1 == 0xc1)) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 1;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      FUN_0087a1b0();
      FUN_00412335();
      *(undefined1 **)(unaff_EBP + 0xc) = &stack0xffffff14;
      FUN_00402e8e();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00412348();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iVar1 = FUN_0041a425();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
      FUN_004027b3();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
    }
    *(undefined1 **)(unaff_EBP + 0xc) = &stack0xffffff14;
    FUN_004833ff();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_0040263d();
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00412348();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iVar1 = FUN_0041a425();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    FUN_004027b3();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      FUN_00878dfb();
    }
    piVar3 = *(int **)(unaff_EBP + 0x14);
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb();
      }
      FUN_0040cf4d();
      FUN_00416f7b();
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0x88));
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb();
    }
    FUN_00404960();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_004035f5();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_004027b3();
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x38) == 0) {
        FUN_00878dfb();
      }
      iVar1 = (**(code **)(**(int **)(unaff_EBP + -0x38) + 0xc))(*(int **)(unaff_EBP + -0x38));
      if (iVar1 != 0) break;
      FUN_00405a23();
      *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffff14;
      FUN_0040810c();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_00412348();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x20) == 0) {
        FUN_004027b3();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        FUN_00402fa6();
      }
      else {
        iVar1 = FUN_0087a208();
        *(int *)(unaff_EBP + -0x4c) = iVar1;
        if (*(int *)(unaff_EBP + -0x1c) != 0) {
          iVar1 = iVar1 * 100;
          *(undefined4 *)(iVar1 + 0x60 + *piVar3) = 0;
          *(undefined4 *)(iVar1 + 0x58 + *piVar3) = 1;
          *(undefined4 *)(iVar1 + 0x54 + *piVar3) = 0;
          *(undefined4 *)(iVar1 + 0x5c + *piVar3) = 1;
        }
        FUN_00417232();
        VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        if (*(int *)(unaff_EBP + 8) == 0) {
          FUN_00878dfb();
        }
        FUN_00404960();
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        FUN_004035f5();
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        FUN_004027b3();
        *(undefined4 *)(unaff_EBP + -0x78) = 0;
        while( true ) {
          if (*(int *)(unaff_EBP + -0x3c) == 0) {
            FUN_00878dfb();
          }
          iVar1 = (**(code **)(**(int **)(unaff_EBP + -0x3c) + 0xc))(*(int **)(unaff_EBP + -0x3c));
          if (iVar1 != 0) break;
          FUN_00405a23();
          *(undefined4 *)(unaff_EBP + 0x10) = 0;
          *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffff14;
          FUN_0040810c();
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          FUN_0040263d();
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          FUN_00412348();
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          iVar1 = FUN_0041a485();
          if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
            FUN_00878dfb();
          }
          FUN_004027b3();
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          iVar1 = FUN_00402bc3();
          if (iVar1 < 0) {
            FUN_00878dfb();
          }
          if ((*(int *)(unaff_EBP + 0x10) == 0) ||
             ((FUN_00402444(), *(int *)(unaff_EBP + -0x48) != 0xbe &&
              (*(int *)(unaff_EBP + -0x48) != 0xc1)))) {
            FUN_004125e6();
            *(undefined1 *)(unaff_EBP + -4) = 0x17;
            FUN_00402fa6();
          }
          else {
            if (*(int *)(unaff_EBP + 0x10) == 0) {
              FUN_00878dfb();
            }
            FUN_00404e7f();
            *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffff0c;
            *(undefined1 *)(unaff_EBP + -4) = 0x1d;
            FUN_00679e4e(&stack0xffffff0c,0x3ba);
            iVar1 = unaff_EBP + -0x98;
            *(undefined1 *)(unaff_EBP + -4) = 0x1d;
            FUN_0040263d(iVar1);
            FUN_004048a4(iVar1);
            *(undefined1 *)(unaff_EBP + -4) = 0x1f;
            iVar1 = FUN_004032b4();
            *(int *)(unaff_EBP + -0x6c) = iVar1;
            *(undefined4 *)(unaff_EBP + -0x34) = 0;
            if (((iVar1 != 0) && (iVar1 = FUN_0041a4e5(), iVar1 < 0)) && (iVar1 != -0x7fffbffe)) {
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x21;
            iVar1 = FUN_00402bc3();
            if (iVar1 < 0) {
              FUN_00878dfb();
            }
            *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffff0c;
            FUN_00679e4e(&stack0xffffff0c,0x3bb);
            iVar1 = unaff_EBP + -0xa8;
            *(undefined1 *)(unaff_EBP + -4) = 0x21;
            FUN_0040263d(iVar1);
            FUN_004048a4(iVar1);
            *(undefined1 *)(unaff_EBP + -4) = 0x23;
            iVar1 = FUN_004032b4();
            *(int *)(unaff_EBP + -100) = iVar1;
            *(undefined4 *)(unaff_EBP + -0x44) = 0;
            if (((iVar1 != 0) && (iVar1 = FUN_0041a4e5(), iVar1 < 0)) && (iVar1 != -0x7fffbffe)) {
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x25;
            iVar1 = FUN_00402bc3();
            if (iVar1 < 0) {
              FUN_00878dfb();
            }
            if ((*(int *)(unaff_EBP + -0x34) != 0) && (*(int *)(unaff_EBP + -0x44) != 0)) {
              *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x34);
              iVar1 = FUN_00404abb();
              xRight = FUN_00404a94();
              yTop = FUN_00404abb();
              xLeft = FUN_00404a94();
              SetRect((LPRECT)(unaff_EBP + -200),xLeft,yTop,xRight,iVar1);
            }
            (*DAT_0097b500)();
            *(undefined1 *)(unaff_EBP + -4) = 0x21;
            if (*(int **)(unaff_EBP + -0x44) != (int *)0x0) {
              (**(code **)(**(int **)(unaff_EBP + -0x44) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x1d;
            if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
              (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x19;
            if (*(int **)(unaff_EBP + -0x40) != (int *)0x0) {
              (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x18;
            if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
              (**(code **)(**(int **)(unaff_EBP + 0x10) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x17;
            if (*(int *)(unaff_EBP + 0xc) != 0) {
              FUN_004030b1();
              *(undefined4 *)(unaff_EBP + 0xc) = 0;
            }
          }
        }
        if (*(int *)(unaff_EBP + -0x1c) == 0) {
          piVar3 = *(int **)(unaff_EBP + 0x14);
        }
        else {
          *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffff10;
          FUN_00679e4e(&stack0xffffff10);
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          FUN_0040263d();
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x27;
          uVar2 = FUN_00412550();
          piVar3 = *(int **)(unaff_EBP + 0x14);
          iVar1 = FUN_00417360();
          *(undefined4 *)(iVar1 + 0x50) = uVar2;
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          iVar1 = FUN_00402bc3();
          if (iVar1 < 0) {
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        if (*(int **)(unaff_EBP + -0x3c) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + -0x3c) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        if (*(int *)(unaff_EBP + -0x14) != 0) {
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
        }
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      FUN_00412f17();
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


