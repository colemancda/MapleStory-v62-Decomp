/* ptr_0040d3f7 - 0x0040d3f7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0040d3f7(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 unaff_EDI;
  int iStack_c;
  
  FUN_0040d866();
  uVar4 = SUB41(unaff_EBX,0);
  *(undefined1 *)(unaff_EBP + -4) = uVar4;
  FUN_00411bb3();
  *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) = unaff_EDI;
  *(int *)(*(int *)(unaff_EBP + -0x14) + 0x10) = unaff_ESI;
  iStack_c = 0x40d427;
  FUN_0040d968();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int **)(unaff_EBP + -0x20) != unaff_EBX) {
    if (unaff_ESI < 1) {
      *(int **)(unaff_EBP + 8) = &iStack_c;
      FUN_004059fd(&DAT_009783a4 + unaff_ESI * 4);
      iVar2 = unaff_EBP + -0x88;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00411b2d(iVar2);
      FUN_0040263d();
      FUN_004048a4(iVar2);
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 4;
    }
    else {
      iStack_c = unaff_ESI + -1;
      uVar3 = FUN_004172ef();
      *(int **)(unaff_EBP + 8) = &iStack_c;
      FUN_004059fd(uVar3);
      iVar2 = unaff_EBP + -0x78;
      *(undefined4 *)(unaff_EBP + -4) = 4;
      FUN_00411b2d(iVar2);
      FUN_0040263d();
      FUN_004048a4(iVar2);
      *(undefined4 *)(unaff_EBP + -0x10) = 2;
      *(undefined4 *)(unaff_EBP + -4) = 6;
    }
    iStack_c = 0x40d4d1;
    piVar1 = (int *)FUN_004032b4();
    *(int **)(unaff_EBP + -0x1c) = piVar1;
    *(int **)(unaff_EBP + 0xc) = unaff_EBX;
    if (piVar1 != unaff_EBX) {
      iVar2 = FUN_00404b30();
      if ((iVar2 < (int)unaff_EBX) && (iVar2 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 9;
    if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
      iVar2 = FUN_00402bc3();
      if (iVar2 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 8;
    if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
      iVar2 = FUN_00402bc3();
      if (iVar2 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
    }
    if (*(int **)(unaff_EBP + 0xc) != unaff_EBX) {
      VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
      *(undefined1 *)(unaff_EBP + -4) = 10;
      if (*(int **)(unaff_EBP + 0xc) == unaff_EBX) {
        FUN_00878dfb();
      }
      FUN_00404960();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_004035f5();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      FUN_004027b3();
      *(int **)(unaff_EBP + -0x40) = unaff_EBX;
      while( true ) {
        if (*(int **)(unaff_EBP + -0x28) == unaff_EBX) {
          FUN_00878dfb();
        }
        iStack_c = 1;
        iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x28) + 0xc))(*(int **)(unaff_EBP + -0x28));
        if (iVar2 != 0) break;
        iStack_c = 0x40d5e6;
        FUN_00405a23();
        *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xfffffffc;
        iStack_c = 0x40d5f7;
        FUN_0040810c();
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        iStack_c = 0x40d607;
        FUN_0040263d();
        iStack_c = 0x40d60e;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        iStack_c = 0x40d61f;
        FUN_00412348();
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        FUN_004172b7();
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        FUN_004027b3();
        if (*(int **)(unaff_EBP + 8) == unaff_EBX) {
          FUN_004125e6();
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          iVar2 = FUN_00402bc3();
          if (iVar2 < (int)unaff_EBX) {
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          FUN_00402fa6();
        }
        else {
          piVar1 = (int *)FUN_004029b9();
          *(int **)(unaff_EBP + -0x2c) = piVar1;
          *(undefined1 *)(unaff_EBP + -4) = 0x14;
          if (piVar1 == unaff_EBX) {
            piVar1 = (int *)0x0;
          }
          else {
            piVar1 = (int *)FUN_0040d899();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(piVar1 + 3),
                     *(IBinding **)(unaff_EBP + 8));
          *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xfffffff8;
          iStack_c = 0x474;
          FUN_00679e4e(&stack0xfffffff8);
          iStack_c = unaff_EBP + -0x34;
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          FUN_004115d9();
          FUN_00404e7f();
          iStack_c = unaff_EBP + -0x98;
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          FUN_0040263d();
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          iStack_c = 0x40d6f8;
          iVar2 = FUN_00412550();
          piVar1[0x10] = iVar2;
          iStack_c = unaff_EBP + -0x98;
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          iVar2 = FUN_00402bc3();
          if (iVar2 < (int)unaff_EBX) {
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          if (*(int **)(unaff_EBP + -0x34) != unaff_EBX) {
            (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
          }
          *(int **)(unaff_EBP + -0x38) = piVar1;
          if (piVar1 != unaff_EBX) {
            InterlockedIncrement(piVar1 + 1);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          FUN_0041167e();
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          if (*(int **)(unaff_EBP + -0x38) != unaff_EBX) {
            FUN_00413281();
            *(int **)(unaff_EBP + -0x38) = unaff_EBX;
          }
          FUN_00413a05();
          FUN_00412745();
          iVar2 = *(int *)(unaff_EBP + -0x14);
          uVar3 = FUN_00411b79();
          *(undefined4 *)(iVar2 + 0x34) = uVar3;
          iVar2 = *(int *)(unaff_EBP + -0x14);
          iStack_c = 0x40d7a1;
          uVar3 = FUN_00416598();
          *(undefined4 *)(iVar2 + 0x30) = uVar3;
          iVar2 = *(int *)(unaff_EBP + -0x14);
          uVar3 = (*DAT_0097b704)();
          *(undefined4 *)(iVar2 + 0x2c) = uVar3;
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          if (*(int **)(unaff_EBP + 8) != unaff_EBX) {
            (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          iVar2 = FUN_00402bc3();
          if (iVar2 < (int)unaff_EBX) {
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          if (*(int **)(unaff_EBP + -0x10) != unaff_EBX) {
            FUN_004030b1();
            *(int **)(unaff_EBP + -0x10) = unaff_EBX;
          }
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      if (*(int **)(unaff_EBP + -0x28) != unaff_EBX) {
        (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iVar2 = FUN_00402bc3();
      if (iVar2 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int **)(unaff_EBP + 0xc) != unaff_EBX) {
        (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = uVar4;
      if (*(int **)(unaff_EBP + -0x20) != unaff_EBX) {
        FUN_00413111();
        *(int **)(unaff_EBP + -0x20) = unaff_EBX;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + -0x14) != unaff_EBX) {
        FUN_0041313f();
      }
      goto LAB_0040d855;
    }
    FUN_004027eb();
  }
  *(undefined1 *)(unaff_EBP + -4) = uVar4;
  FUN_00412bd3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00412c22();
LAB_0040d855:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


