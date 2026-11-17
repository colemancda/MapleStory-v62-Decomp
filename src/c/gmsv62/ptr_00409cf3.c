/* ptr_00409cf3 - 0x00409cf3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00409cf3(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int yTop;
  int xLeft;
  int *piVar4;
  int iVar5;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  
  do {
    *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff4;
    FUN_00679e4e(&stack0xfffffff4,0x47c);
    iVar5 = unaff_EBP + -0x94;
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    FUN_0040263d(iVar5);
    FUN_004048a4(iVar5);
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    piVar4 = (int *)FUN_004032b4();
    *(int **)(unaff_EBP + -0x70) = piVar4;
    *(int **)(unaff_EBP + -0x28) = unaff_EBX;
    if (((piVar4 != unaff_EBX) && (iVar5 = FUN_0041a4e5(), iVar5 < (int)unaff_EBX)) &&
       (iVar5 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    if (*(int **)(unaff_EBP + -0x28) == unaff_EBX) {
      *(int **)(unaff_ESI + 0x24) = unaff_EBX;
      *(int **)(unaff_ESI + 0x20) = unaff_EBX;
    }
    else {
      uVar2 = FUN_00404a94();
      *(undefined4 *)(unaff_ESI + 0x20) = uVar2;
      if (*(int **)(unaff_EBP + -0x28) == unaff_EBX) {
        FUN_00878dfb();
      }
      uVar2 = FUN_00404abb();
      *(undefined4 *)(unaff_ESI + 0x24) = uVar2;
    }
    *(int *)(unaff_EBP + -0x54) = unaff_ESI;
    FUN_00412d33();
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    FUN_004137cf();
    FUN_00412cfa();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    FUN_00412d45();
    FUN_004125d9();
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    if (*(int **)(unaff_EBP + -0x20) != unaff_EBX) {
      (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (*(int **)(unaff_EBP + -0x24) != unaff_EBX) {
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if (*(int **)(unaff_EBP + -0x1c) != unaff_EBX) {
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
    while( true ) {
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iVar5 = FUN_00402bc3();
      if (iVar5 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_00402fa6();
      if (*(int **)(unaff_EBP + -0x34) == unaff_EBX) {
        FUN_00878dfb();
      }
      iVar5 = (**(code **)(**(int **)(unaff_EBP + -0x34) + 0xc))(*(int **)(unaff_EBP + -0x34));
      if (iVar5 != 0) {
        *(undefined1 **)(unaff_EBP + 0xc) = &stack0xfffffff8;
        FUN_00679e4e(&stack0xfffffff8);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_0040263d();
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        iVar5 = FUN_00412550();
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        iVar3 = FUN_00402bc3();
        if (iVar3 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        if ((int *)(uint)(iVar5 != 0) != unaff_EBX) {
          if ((int *)**(undefined4 **)(unaff_EBP + 0x10) == unaff_EBX) {
            iVar5 = 0;
          }
          else {
            iVar5 = ((int *)**(undefined4 **)(unaff_EBP + 0x10))[-1];
          }
          while (iVar5 = iVar5 + -1, (int)unaff_EBX < iVar5) {
            iVar3 = **(int **)(unaff_EBP + 0x10);
            uVar2 = FUN_004137cf();
            *(undefined4 *)(unaff_EBP + 0xc) = uVar2;
            FUN_00412d33();
            FUN_00412d45();
            *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 4) = *(undefined4 *)(iVar3 + iVar5 * 8 + 4);
          }
        }
        FUN_00413723();
        iVar5 = *(int *)(unaff_EBP + -0x14);
        uVar2 = FUN_00411821();
        *(undefined4 *)(iVar5 + 0x20) = uVar2;
        iVar5 = *(int *)(unaff_EBP + -0x14);
        uVar2 = FUN_0041442e();
        *(undefined4 *)(iVar5 + 0x1c) = uVar2;
        iVar5 = *(int *)(unaff_EBP + -0x14);
        uVar2 = (*DAT_0097b704)();
        *(undefined4 *)(iVar5 + 0x18) = uVar2;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (*(int **)(unaff_EBP + -0x34) != unaff_EBX) {
          (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        iVar5 = FUN_00402bc3();
        if (iVar5 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (*(int **)(unaff_EBP + 8) != unaff_EBX) {
          (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (*(int **)(unaff_EBP + -0x38) != unaff_EBX) {
          FUN_00412f73();
          *(int **)(unaff_EBP + -0x38) = unaff_EBX;
        }
        *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
        if (*(int **)(unaff_EBP + -0x14) != unaff_EBX) {
          FUN_00412fa1();
          *(int **)(unaff_EBP + -0x14) = unaff_EBX;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int **)(unaff_EBP + -0x2c) != unaff_EBX) {
          FUN_00412fa1();
        }
        ExceptionList = *(void **)(unaff_EBP + -0xc);
        return;
      }
      FUN_00405a23();
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffffc;
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
      if (*(int **)(unaff_EBP + -0x1c) != unaff_EBX) break;
      FUN_004125e6();
    }
    piVar4 = (int *)FUN_004029b9();
    *(int **)(unaff_EBP + -0x10) = piVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    if (piVar4 == unaff_EBX) {
      unaff_ESI = 0;
    }
    else {
      unaff_ESI = FUN_00409fd9();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (*(int **)(unaff_EBP + -0x1c) == unaff_EBX) {
      FUN_00878dfb();
    }
    FUN_00404e7f();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_ESI + 0xc),
               *(IBinding **)(unaff_EBP + -0x1c));
    *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff8;
    FUN_00679e4e(&stack0xfffffff8);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    FUN_0040263d();
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    uVar2 = FUN_00412550();
    *(undefined4 *)(unaff_ESI + 0x28) = uVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff4;
    FUN_00679e4e(&stack0xfffffff4,0x3ba);
    iVar5 = unaff_EBP + -0xd4;
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    FUN_0040263d(iVar5);
    FUN_004048a4(iVar5);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    piVar4 = (int *)FUN_004032b4();
    *(int **)(unaff_EBP + -0x50) = piVar4;
    *(int **)(unaff_EBP + -0x20) = unaff_EBX;
    if (((piVar4 != unaff_EBX) && (iVar5 = FUN_0041a4e5(), iVar5 < (int)unaff_EBX)) &&
       (iVar5 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff4;
    FUN_00679e4e(&stack0xfffffff4,0x3bb);
    iVar5 = unaff_EBP + -0xc4;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    FUN_0040263d(iVar5);
    FUN_004048a4(iVar5);
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    piVar4 = (int *)FUN_004032b4();
    *(int **)(unaff_EBP + -0x6c) = piVar4;
    *(int **)(unaff_EBP + 0xc) = unaff_EBX;
    if (((piVar4 != unaff_EBX) && (iVar5 = FUN_0041a4e5(), iVar5 < (int)unaff_EBX)) &&
       (iVar5 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    cVar1 = FUN_004115ad();
    if ((cVar1 == '\0') && (cVar1 = FUN_004115ad(), cVar1 == '\0')) {
      if ((*(int **)(unaff_EBP + 0xc) == unaff_EBX) &&
         (FUN_00878dfb(), *(int **)(unaff_EBP + 0xc) == unaff_EBX)) {
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + 0xc);
      if (*(int **)(unaff_EBP + -0x20) == unaff_EBX) {
        FUN_00878dfb();
      }
      *(int **)(unaff_EBP + -0x10) = *(int **)(unaff_EBP + -0x20);
      if (*(int **)(unaff_EBP + -0x20) == unaff_EBX) {
        FUN_00878dfb();
      }
      iVar5 = FUN_00404abb();
      iVar3 = FUN_00404a94();
      yTop = FUN_00404abb();
      xLeft = FUN_00404a94();
      SetRect((LPRECT)(unaff_ESI + 0x10),xLeft,yTop,iVar3,iVar5);
    }
    else {
      SetRectEmpty((LPRECT)(unaff_ESI + 0x10));
    }
  } while( true );
}


