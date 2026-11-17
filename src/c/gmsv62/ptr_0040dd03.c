/* ptr_0040dd03 - 0x0040dd03 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0040dd03(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  uint uVar6;
  undefined4 unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 unaff_EDI;
  int iStack_c;
  
  FUN_00412c71();
  *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) = unaff_EDI;
  *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x10) = unaff_EBX;
  *(int *)(*(int *)(unaff_EBP + -0x14) + 0x14) = unaff_ESI;
  iStack_c = unaff_EBP + -0x20;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0040e564();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    *(int **)(unaff_EBP + 8) = &iStack_c;
    FUN_004059fd(&DAT_0097836c + unaff_ESI * 4);
    iVar2 = unaff_EBP + -0xf8;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_0040263d(iVar2);
    FUN_004048a4(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_c = 0x40dd75;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x58) = iVar2;
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    if (((iVar2 != 0) && (iVar2 = FUN_00404b30(), iVar2 < 0)) && (iVar2 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + 0xc) != 0) {
      VariantInit((VARIANTARG *)(unaff_EBP + -0x88));
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (*(int *)(unaff_EBP + 0xc) == 0) {
        FUN_00878dfb();
      }
      FUN_00404960();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      FUN_004035f5();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_004027b3();
      *(undefined4 *)(unaff_EBP + -0x5c) = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x30) == 0) {
          FUN_00878dfb();
        }
        iStack_c = 1;
        iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x30) + 0xc))(*(int **)(unaff_EBP + -0x30));
        if (iVar2 != 0) break;
        iStack_c = 0x40de73;
        FUN_00405a23();
        *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffffc;
        iStack_c = 0x40de84;
        FUN_0040810c();
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        iStack_c = 0x40de97;
        FUN_0040263d();
        iStack_c = 0x40de9e;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        iStack_c = 0x40deb2;
        FUN_00412348();
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        FUN_004172b7();
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        FUN_004027b3();
        if (*(int *)(unaff_EBP + 8) == 0) {
          FUN_004125e6();
        }
        else {
          iVar2 = FUN_004029b9();
          *(int *)(unaff_EBP + -0x10) = iVar2;
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = FUN_0040e447();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          if (*(int *)(unaff_EBP + 8) == 0) {
            FUN_00878dfb();
          }
          FUN_00404e7f();
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar2 + 0xc),
                     *(IBinding **)(unaff_EBP + 8));
          *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff8;
          iStack_c = 0x474;
          FUN_00679e4e(&stack0xfffffff8);
          iStack_c = unaff_EBP + -0xb8;
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          FUN_0040263d();
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          iStack_c = 0x40df6a;
          uVar3 = FUN_00412550();
          *(undefined4 *)(iVar2 + 0x40) = uVar3;
          iStack_c = unaff_EBP + -0xb8;
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            FUN_00878dfb();
          }
          *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff8;
          iStack_c = 0x3b6;
          FUN_00679e4e(&stack0xfffffff8);
          iStack_c = unaff_EBP + -100;
          *(undefined1 *)(unaff_EBP + -4) = 0x16;
          FUN_004115d9();
          FUN_00404e7f();
          iStack_c = unaff_EBP + -0xe8;
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          FUN_0040263d();
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          iStack_c = 0x40dfd9;
          uVar3 = FUN_00412550();
          *(undefined4 *)(iVar2 + 0x44) = uVar3;
          iStack_c = unaff_EBP + -0xe8;
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          FUN_004027eb();
          *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff8;
          iStack_c = 0x3b7;
          FUN_00679e4e(&stack0xfffffff8);
          iStack_c = unaff_EBP + -0x4c;
          *(undefined1 *)(unaff_EBP + -4) = 0x1a;
          FUN_004115d9();
          FUN_00404e7f();
          iStack_c = unaff_EBP + -200;
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          FUN_0040263d();
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          iStack_c = 0x40e054;
          uVar3 = FUN_00412550();
          *(undefined4 *)(iVar2 + 0x48) = uVar3;
          iStack_c = unaff_EBP + -200;
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          FUN_004027eb();
          *(int **)(unaff_EBP + -0x10) = &iStack_c;
          FUN_00679e4e(&iStack_c,0x3ba);
          iVar4 = unaff_EBP + -0xd8;
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          FUN_0040263d(iVar4);
          FUN_004048a4(iVar4);
          *(undefined1 *)(unaff_EBP + -4) = 0x1f;
          iStack_c = 0x40e0ba;
          iVar4 = FUN_004032b4();
          *(int *)(unaff_EBP + -0x6c) = iVar4;
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
          if (((iVar4 != 0) && (iVar4 = FUN_0041a4e5(), iVar4 < 0)) && (iVar4 != -0x7fffbffe)) {
            FUN_00878dfb();
          }
          iVar4 = unaff_EBP + -0xd8;
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          iVar5 = FUN_00402bc3();
          if (iVar5 < 0) {
            FUN_00878dfb();
            iVar4 = extraout_ECX;
          }
          *(int **)(unaff_EBP + -0x10) = &iStack_c;
          iStack_c = iVar4;
          FUN_00679e4e(&iStack_c,0x3bb);
          iVar4 = unaff_EBP + -0x98;
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          FUN_0040263d(iVar4);
          FUN_004048a4(iVar4);
          *(undefined1 *)(unaff_EBP + -4) = 0x23;
          iStack_c = 0x40e136;
          iVar4 = FUN_004032b4();
          *(int *)(unaff_EBP + -0x60) = iVar4;
          *(undefined4 *)(unaff_EBP + 0x10) = 0;
          if (((iVar4 != 0) && (iVar4 = FUN_0041a4e5(), iVar4 < 0)) && (iVar4 != -0x7fffbffe)) {
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            FUN_00878dfb();
          }
          cVar1 = FUN_004115ad();
          if ((cVar1 == '\0') && (cVar1 = FUN_004115ad(), cVar1 == '\0')) {
            if ((*(int *)(unaff_EBP + 0x10) == 0) &&
               (FUN_00878dfb(), *(int *)(unaff_EBP + 0x10) == 0)) {
              FUN_00878dfb();
            }
            *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + 0x10);
            if (*(int *)(unaff_EBP + -0x1c) == 0) {
              FUN_00878dfb();
            }
            *(int *)(unaff_EBP + -0x68) = *(int *)(unaff_EBP + -0x1c);
            if (*(int *)(unaff_EBP + -0x1c) == 0) {
              FUN_00878dfb();
            }
            *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x1c);
            FUN_00404abb();
            FUN_00404a94();
            iStack_c = 0x40e1fd;
            iStack_c = FUN_00404abb();
            uVar3 = FUN_00404a94();
          }
          else {
            iStack_c = 0;
            uVar3 = 0;
          }
          FUN_004114f3(iVar2 + 0x10,uVar3);
          *(int *)(unaff_EBP + -0x44) = iVar2;
          FUN_00412eb6();
          *(undefined1 *)(unaff_EBP + -4) = 0x26;
          FUN_00413a3f();
          FUN_00412e7d();
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          FUN_00412ec8();
          FUN_004125d9();
          FUN_004125d9();
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
            (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
            (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_00402fa6();
      }
      *(undefined1 **)(unaff_EBP + 8) = &stack0xfffffff8;
      iStack_c = 0x47d;
      FUN_00679e4e(&stack0xfffffff8);
      iStack_c = unaff_EBP + -0x98;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      iStack_c = 0x40e2dd;
      iVar2 = FUN_00412550();
      iStack_c = unaff_EBP + -0x98;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        FUN_00878dfb();
      }
      iVar4 = *(int *)(unaff_EBP + 0x14);
      if (iVar2 != 0) {
        uVar6 = *(uint *)(iVar4 + 0x10);
        while (uVar6 != 0) {
          if ((uVar6 != *(uint *)(iVar4 + 0xc)) && (uVar6 != *(uint *)(iVar4 + 0x10))) {
            FUN_00411697();
          }
          iVar2 = *(int *)((-(uint)(uVar6 != 0) & uVar6 - 0x10) + 8);
          uVar6 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
        }
      }
      FUN_00413a7d();
      FUN_0041278b();
      iVar2 = *(int *)(unaff_EBP + -0x14);
      uVar3 = FUN_00411bfb();
      *(undefined4 *)(iVar2 + 0x38) = uVar3;
      iVar2 = *(int *)(unaff_EBP + -0x14);
      iStack_c = 0x40e37f;
      uVar3 = FUN_00416963();
      *(undefined4 *)(iVar2 + 0x34) = uVar3;
      iVar2 = *(int *)(unaff_EBP + -0x14);
      uVar3 = (*DAT_0097b704)();
      *(undefined4 *)(iVar2 + 0x30) = uVar3;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        FUN_0041316d();
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        FUN_0041316d();
      }
      goto LAB_0040e403;
    }
    FUN_004027eb();
  }
  FUN_004027eb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00412c83();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00412c83();
LAB_0040e403:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


