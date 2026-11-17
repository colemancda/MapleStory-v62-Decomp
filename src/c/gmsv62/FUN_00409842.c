/* FUN_00409842 - 0x00409842 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00409842(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int xRight;
  int yTop;
  int xLeft;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = *(uint *)(unaff_EBP + 0xc);
  iVar5 = *(int *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x44) = extraout_ECX;
  *(uint *)(unaff_EBP + -0x48) = iVar5 << 8 | uVar1;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x68) = extraout_ECX + 0xb4;
  iVar3 = FUN_004143da();
  if (iVar3 == 0) {
    iVar3 = FUN_004029b9();
    *(int *)(unaff_EBP + 0xc) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00409fb5();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
    FUN_00412928();
    *(int *)(*(int *)(unaff_EBP + -0x14) + 0xc) = iVar5;
    *(uint *)(*(int *)(unaff_EBP + -0x14) + 0x10) = uVar1;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00409277();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int *)(unaff_EBP + -0x38) != 0) {
      *(undefined1 **)(unaff_EBP + 0xc) = &stack0xffffff10;
      FUN_004059fd(&DAT_00978604 + uVar1 * 4);
      iVar5 = unaff_EBP + -0xe4;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_004117d5(iVar5);
      FUN_0040263d();
      FUN_004048a4(iVar5);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iVar5 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x5c) = iVar5;
      *(undefined4 *)(unaff_EBP + 8) = 0;
      if (((iVar5 != 0) && (iVar5 = FUN_00404b30(), iVar5 < 0)) && (iVar5 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + 8) != 0) {
        VariantInit((VARIANTARG *)(unaff_EBP + -0xa4));
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (*(int *)(unaff_EBP + 8) == 0) {
          FUN_00878dfb();
        }
        FUN_00404960();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        FUN_004035f5();
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_004027b3();
        *(undefined4 *)(unaff_EBP + -0x60) = 0;
        while( true ) {
          if (*(int *)(unaff_EBP + -0x34) == 0) {
            FUN_00878dfb();
          }
          iVar5 = (**(code **)(**(int **)(unaff_EBP + -0x34) + 0xc))(*(int **)(unaff_EBP + -0x34));
          if (iVar5 != 0) break;
          FUN_00405a23();
          *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff18;
          FUN_0040810c();
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          FUN_0040263d();
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          FUN_00412348();
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          FUN_004172b7();
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          FUN_004027b3();
          if (*(int *)(unaff_EBP + -0x1c) == 0) {
            FUN_004125e6();
          }
          else {
            iVar5 = FUN_004029b9();
            *(int *)(unaff_EBP + -0x10) = iVar5;
            *(undefined1 *)(unaff_EBP + -4) = 0x12;
            if (iVar5 == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = FUN_00409fd9();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x11;
            if (*(int *)(unaff_EBP + -0x1c) == 0) {
              FUN_00878dfb();
            }
            FUN_00404e7f();
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                      ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar5 + 0xc),
                       *(IBinding **)(unaff_EBP + -0x1c));
            *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff14;
            FUN_00679e4e(&stack0xffffff14);
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            FUN_0040263d();
            FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x15;
            uVar4 = FUN_00412550();
            *(undefined4 *)(iVar5 + 0x28) = uVar4;
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            iVar3 = FUN_00402bc3();
            if (iVar3 < 0) {
              FUN_00878dfb();
            }
            *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff10;
            FUN_00679e4e(&stack0xffffff10,0x3ba);
            iVar3 = unaff_EBP + -0xd4;
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            FUN_0040263d(iVar3);
            FUN_004048a4(iVar3);
            *(undefined1 *)(unaff_EBP + -4) = 0x17;
            iVar3 = FUN_004032b4();
            *(int *)(unaff_EBP + -0x50) = iVar3;
            *(undefined4 *)(unaff_EBP + -0x20) = 0;
            if (((iVar3 != 0) && (iVar3 = FUN_0041a4e5(), iVar3 < 0)) && (iVar3 != -0x7fffbffe)) {
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x19;
            iVar3 = FUN_00402bc3();
            if (iVar3 < 0) {
              FUN_00878dfb();
            }
            *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff10;
            FUN_00679e4e(&stack0xffffff10,0x3bb);
            iVar3 = unaff_EBP + -0xc4;
            *(undefined1 *)(unaff_EBP + -4) = 0x19;
            FUN_0040263d(iVar3);
            FUN_004048a4(iVar3);
            *(undefined1 *)(unaff_EBP + -4) = 0x1b;
            iVar3 = FUN_004032b4();
            *(int *)(unaff_EBP + -0x6c) = iVar3;
            *(undefined4 *)(unaff_EBP + 0xc) = 0;
            if (((iVar3 != 0) && (iVar3 = FUN_0041a4e5(), iVar3 < 0)) && (iVar3 != -0x7fffbffe)) {
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x1d;
            iVar3 = FUN_00402bc3();
            if (iVar3 < 0) {
              FUN_00878dfb();
            }
            cVar2 = FUN_004115ad();
            if ((cVar2 == '\0') && (cVar2 = FUN_004115ad(), cVar2 == '\0')) {
              if ((*(int *)(unaff_EBP + 0xc) == 0) &&
                 (FUN_00878dfb(), *(int *)(unaff_EBP + 0xc) == 0)) {
                FUN_00878dfb();
              }
              *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + 0xc);
              if (*(int *)(unaff_EBP + -0x20) == 0) {
                FUN_00878dfb();
              }
              *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x20);
              if (*(int *)(unaff_EBP + -0x20) == 0) {
                FUN_00878dfb();
              }
              iVar3 = FUN_00404abb();
              xRight = FUN_00404a94();
              yTop = FUN_00404abb();
              xLeft = FUN_00404a94();
              SetRect((LPRECT)(iVar5 + 0x10),xLeft,yTop,xRight,iVar3);
            }
            else {
              SetRectEmpty((LPRECT)(iVar5 + 0x10));
            }
            *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff10;
            FUN_00679e4e(&stack0xffffff10,0x47c);
            iVar3 = unaff_EBP + -0x94;
            *(undefined1 *)(unaff_EBP + -4) = 0x1d;
            FUN_0040263d(iVar3);
            FUN_004048a4(iVar3);
            *(undefined1 *)(unaff_EBP + -4) = 0x1f;
            iVar3 = FUN_004032b4();
            *(int *)(unaff_EBP + -0x70) = iVar3;
            *(undefined4 *)(unaff_EBP + -0x28) = 0;
            if (((iVar3 != 0) && (iVar3 = FUN_0041a4e5(), iVar3 < 0)) && (iVar3 != -0x7fffbffe)) {
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x21;
            iVar3 = FUN_00402bc3();
            if (iVar3 < 0) {
              FUN_00878dfb();
            }
            if (*(int *)(unaff_EBP + -0x28) == 0) {
              *(undefined4 *)(iVar5 + 0x24) = 0;
              *(undefined4 *)(iVar5 + 0x20) = 0;
            }
            else {
              uVar4 = FUN_00404a94();
              *(undefined4 *)(iVar5 + 0x20) = uVar4;
              if (*(int *)(unaff_EBP + -0x28) == 0) {
                FUN_00878dfb();
              }
              uVar4 = FUN_00404abb();
              *(undefined4 *)(iVar5 + 0x24) = uVar4;
            }
            *(int *)(unaff_EBP + -0x54) = iVar5;
            FUN_00412d33();
            *(undefined1 *)(unaff_EBP + -4) = 0x22;
            FUN_004137cf();
            FUN_00412cfa();
            *(undefined1 *)(unaff_EBP + -4) = 0x21;
            FUN_00412d45();
            FUN_004125d9();
            FUN_004125d9();
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
              (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x11;
            if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
              (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xe;
            if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
              (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          iVar5 = FUN_00402bc3();
          if (iVar5 < 0) {
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          FUN_00402fa6();
        }
        *(undefined1 **)(unaff_EBP + 0xc) = &stack0xffffff14;
        FUN_00679e4e(&stack0xffffff14);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_0040263d();
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        iVar5 = FUN_00412550();
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        if (iVar5 != 0) {
          if (**(int **)(unaff_EBP + 0x10) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(**(int **)(unaff_EBP + 0x10) + -4);
          }
          while (iVar5 = iVar5 + -1, 0 < iVar5) {
            iVar3 = **(int **)(unaff_EBP + 0x10);
            uVar4 = FUN_004137cf();
            *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
            FUN_00412d33();
            FUN_00412d45();
            *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 4) = *(undefined4 *)(iVar3 + iVar5 * 8 + 4);
          }
        }
        FUN_00413723();
        iVar5 = *(int *)(unaff_EBP + -0x14);
        uVar4 = FUN_00411821();
        *(undefined4 *)(iVar5 + 0x20) = uVar4;
        iVar5 = *(int *)(unaff_EBP + -0x14);
        uVar4 = FUN_0041442e();
        *(undefined4 *)(iVar5 + 0x1c) = uVar4;
        iVar5 = *(int *)(unaff_EBP + -0x14);
        uVar4 = (*DAT_0097b704)();
        *(undefined4 *)(iVar5 + 0x18) = uVar4;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (*(int *)(unaff_EBP + -0x38) != 0) {
          FUN_00412f73();
          *(undefined4 *)(unaff_EBP + -0x38) = 0;
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x14) != 0) {
          FUN_00412fa1();
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x2c) != 0) {
          FUN_00412fa1();
        }
        goto LAB_00409fa4;
      }
      FUN_004027eb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_004128d9();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0041293a();
  }
  else {
    iVar5 = *(int *)(unaff_EBP + -0x2c);
    uVar4 = (*DAT_0097b704)();
    *(undefined4 *)(iVar5 + 0x18) = uVar4;
    FUN_00413723();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0041293a();
LAB_00409fa4:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


