/* ptr_0040a83b - 0x0040a83b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0040a83b(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *unaff_EBX;
  int unaff_EBP;
  
  FUN_004027b3();
  *(int **)(unaff_EBP + -0x78) = unaff_EBX;
  while( true ) {
    if (*(int **)(unaff_EBP + -0x50) == unaff_EBX) {
      FUN_00878dfb();
    }
    iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x50) + 0xc))(*(int **)(unaff_EBP + -0x50));
    if (iVar2 != 0) break;
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
    if (*(int **)(unaff_EBP + 8) == unaff_EBX) {
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iVar2 = FUN_00402bc3();
      if (iVar2 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_00402fa6();
    }
    else {
      piVar3 = (int *)FUN_004029b9();
      *(int **)(unaff_EBP + -0x10) = piVar3;
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      if (piVar3 == unaff_EBX) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_0040b258();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      if (*(int **)(unaff_EBP + 8) == unaff_EBX) {
        FUN_00878dfb();
      }
      FUN_00404e7f();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(piVar3 + 3),
                 *(IBinding **)(unaff_EBP + 8));
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff8;
      FUN_00679e4e(&stack0xfffffff8);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iVar2 = FUN_00412550();
      piVar3[0x13] = iVar2;
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iVar2 = FUN_00402bc3();
      if (iVar2 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff8;
      FUN_00679e4e(&stack0xfffffff8);
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      FUN_004115d9();
      FUN_00404e7f();
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      iVar2 = FUN_00412550();
      piVar3[0x14] = iVar2;
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iVar2 = FUN_00402bc3();
      if (iVar2 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      FUN_004027eb();
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff8;
      FUN_00679e4e(&stack0xfffffff8);
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      FUN_004115d9();
      FUN_00404e7f();
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      iVar2 = FUN_00412550();
      piVar3[0x15] = iVar2;
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      iVar2 = FUN_00402bc3();
      if (iVar2 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      FUN_004027eb();
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff4;
      FUN_00679e4e(&stack0xfffffff4,0x3ba);
      iVar2 = unaff_EBP + -0xe8;
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      FUN_0040263d(iVar2);
      FUN_004048a4(iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      piVar4 = (int *)FUN_004032b4();
      *(int **)(unaff_EBP + -0xa0) = piVar4;
      *(int **)(unaff_EBP + -0x20) = unaff_EBX;
      if (((piVar4 != unaff_EBX) && (iVar2 = FUN_0041a4e5(), iVar2 < (int)unaff_EBX)) &&
         (iVar2 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      iVar2 = FUN_00402bc3();
      if (iVar2 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff4;
      FUN_00679e4e(&stack0xfffffff4,0x3bb);
      iVar2 = unaff_EBP + -0x168;
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      FUN_0040263d(iVar2);
      FUN_004048a4(iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      piVar4 = (int *)FUN_004032b4();
      *(int **)(unaff_EBP + -0x74) = piVar4;
      *(int **)(unaff_EBP + -0x14) = unaff_EBX;
      if (((piVar4 != unaff_EBX) && (iVar2 = FUN_0041a4e5(), iVar2 < (int)unaff_EBX)) &&
         (iVar2 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      iVar2 = FUN_00402bc3();
      if (iVar2 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      cVar1 = FUN_004115ad();
      if ((cVar1 == '\0') && (cVar1 = FUN_004115ad(), cVar1 == '\0')) {
        if ((*(int **)(unaff_EBP + -0x14) == unaff_EBX) &&
           (FUN_00878dfb(), *(int **)(unaff_EBP + -0x14) == unaff_EBX)) {
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x14);
        if (*(int **)(unaff_EBP + -0x20) == unaff_EBX) {
          FUN_00878dfb();
        }
        *(int **)(unaff_EBP + -0x2c) = *(int **)(unaff_EBP + -0x20);
        if (*(int **)(unaff_EBP + -0x20) == unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + -0x20);
        FUN_00404abb();
        FUN_00404a94();
        FUN_00404abb();
        FUN_00404a94();
      }
      FUN_004114f3(piVar3 + 4);
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff4;
      FUN_00679e4e(&stack0xfffffff4,0xaea);
      iVar2 = unaff_EBP + -0xf8;
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      FUN_0040263d(iVar2);
      FUN_004048a4(iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      piVar4 = (int *)FUN_004032b4();
      *(int **)(unaff_EBP + -0x68) = piVar4;
      *(int **)(unaff_EBP + -0x38) = unaff_EBX;
      if (((piVar4 != unaff_EBX) && (iVar2 = FUN_00404b30(), iVar2 < (int)unaff_EBX)) &&
         (iVar2 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      iVar2 = FUN_00402bc3();
      if (iVar2 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      cVar1 = FUN_00411581();
      if (cVar1 == '\0') {
        *(int **)(unaff_EBP + -0x2c) = unaff_EBX;
        while( true ) {
          FUN_0087a1b0();
          uVar5 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x2c));
          *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff4;
          FUN_004033a1(uVar5);
          iVar2 = unaff_EBP + -0x118;
          *(undefined1 *)(unaff_EBP + -4) = 0x29;
          FUN_0040263d(iVar2);
          FUN_004048a4(iVar2);
          *(undefined1 *)(unaff_EBP + -4) = 0x2b;
          piVar4 = (int *)FUN_004032b4();
          *(int **)(unaff_EBP + -0x9c) = piVar4;
          *(int **)(unaff_EBP + -0x24) = unaff_EBX;
          if (((piVar4 != unaff_EBX) && (iVar2 = FUN_00404b30(), iVar2 < (int)unaff_EBX)) &&
             (iVar2 != -0x7fffbffe)) {
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2d;
          iVar2 = FUN_00402bc3();
          if (iVar2 < (int)unaff_EBX) {
            FUN_00878dfb();
          }
          if (*(int **)(unaff_EBP + -0x24) == unaff_EBX) break;
          uVar5 = FUN_00413602();
          *(undefined4 *)(unaff_EBP + -0x34) = uVar5;
          *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff4;
          FUN_00679e4e(&stack0xfffffff4,0x3ba);
          iVar2 = unaff_EBP + -0x138;
          *(undefined1 *)(unaff_EBP + -4) = 0x2d;
          FUN_0040263d(iVar2);
          FUN_004048a4(iVar2);
          *(undefined1 *)(unaff_EBP + -4) = 0x2f;
          piVar4 = (int *)FUN_004032b4();
          *(int **)(unaff_EBP + -0x84) = piVar4;
          *(int **)(unaff_EBP + -0x4c) = unaff_EBX;
          if (((piVar4 != unaff_EBX) && (iVar2 = FUN_0041a4e5(), iVar2 < (int)unaff_EBX)) &&
             (iVar2 != -0x7fffbffe)) {
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x31;
          iVar2 = FUN_00402bc3();
          if (iVar2 < (int)unaff_EBX) {
            FUN_00878dfb();
          }
          *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff4;
          FUN_00679e4e(&stack0xfffffff4,0x3bb);
          iVar2 = unaff_EBP + -0x158;
          *(undefined1 *)(unaff_EBP + -4) = 0x31;
          FUN_0040263d(iVar2);
          FUN_004048a4(iVar2);
          *(undefined1 *)(unaff_EBP + -4) = 0x33;
          piVar4 = (int *)FUN_004032b4();
          *(int **)(unaff_EBP + -0x94) = piVar4;
          *(int **)(unaff_EBP + -0x48) = unaff_EBX;
          if (((piVar4 != unaff_EBX) && (iVar2 = FUN_0041a4e5(), iVar2 < (int)unaff_EBX)) &&
             (iVar2 != -0x7fffbffe)) {
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x35;
          iVar2 = FUN_00402bc3();
          if (iVar2 < (int)unaff_EBX) {
            FUN_00878dfb();
          }
          piVar4 = *(int **)(unaff_EBP + -0x4c);
          if ((piVar4 != unaff_EBX) && (*(int **)(unaff_EBP + -0x48) != unaff_EBX)) {
            *(int **)(unaff_EBP + -0x54) = *(int **)(unaff_EBP + -0x48);
            *(int **)(unaff_EBP + -0x70) = piVar4;
            *(int **)(unaff_EBP + -0x10) = piVar4;
            FUN_00404abb();
            FUN_00404a94();
            FUN_00404abb();
            FUN_00404a94();
          }
          FUN_004114f3(*(undefined4 *)(unaff_EBP + -0x34));
          FUN_004125d9();
          *(undefined1 *)(unaff_EBP + -4) = 0x2d;
          if (*(int **)(unaff_EBP + -0x4c) != unaff_EBX) {
            (**(code **)(**(int **)(unaff_EBP + -0x4c) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x29;
          if (*(int **)(unaff_EBP + -0x24) != unaff_EBX) {
            (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
          }
          *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x29;
        FUN_004027eb();
      }
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff4;
      FUN_00679e4e(&stack0xfffffff4,0x47c);
      iVar2 = unaff_EBP + -200;
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      FUN_0040263d(iVar2);
      FUN_004048a4(iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      piVar4 = (int *)FUN_004032b4();
      *(int **)(unaff_EBP + -0x80) = piVar4;
      *(int **)(unaff_EBP + -0x30) = unaff_EBX;
      if (((piVar4 != unaff_EBX) && (iVar2 = FUN_0041a4e5(), iVar2 < (int)unaff_EBX)) &&
         (iVar2 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x39;
      iVar2 = FUN_00402bc3();
      if (iVar2 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      if (*(int **)(unaff_EBP + -0x30) == unaff_EBX) {
        piVar3[0x12] = (int)unaff_EBX;
        piVar3[0x11] = (int)unaff_EBX;
      }
      else {
        iVar2 = FUN_00404a94();
        piVar3[0x11] = iVar2;
        if (*(int **)(unaff_EBP + -0x30) == unaff_EBX) {
          FUN_00878dfb();
        }
        iVar2 = FUN_00404abb();
        piVar3[0x12] = iVar2;
      }
      *(int **)(unaff_EBP + -0xa4) = piVar3;
      if (piVar3 != unaff_EBX) {
        InterlockedIncrement(piVar3 + 1);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      FUN_0041385f();
      FUN_00412d5b();
      *(undefined1 *)(unaff_EBP + -4) = 0x39;
      FUN_00412d94();
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      if (*(int **)(unaff_EBP + -0x30) != unaff_EBX) {
        (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      if (*(int **)(unaff_EBP + -0x38) != unaff_EBX) {
        (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      if (*(int **)(unaff_EBP + -0x14) != unaff_EBX) {
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      if (*(int **)(unaff_EBP + -0x20) != unaff_EBX) {
        (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      if (*(int **)(unaff_EBP + -0x28) != unaff_EBX) {
        (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      if (*(int **)(unaff_EBP + 8) != unaff_EBX) {
        (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iVar2 = FUN_00402bc3();
      if (iVar2 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      if (*(int **)(unaff_EBP + -0x3c) != unaff_EBX) {
        FUN_004030b1();
        *(int **)(unaff_EBP + -0x3c) = unaff_EBX;
      }
    }
  }
  *(undefined1 **)(unaff_EBP + 8) = &stack0xfffffff8;
  FUN_00679e4e(&stack0xfffffff8);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_0040263d();
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x3c;
  iVar2 = FUN_00412550();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iVar6 = FUN_00402bc3();
  if (iVar6 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  iVar6 = *(int *)(unaff_EBP + 0x10);
  if (((int *)(uint)(iVar2 != 0) != unaff_EBX) &&
     (piVar3 = *(int **)(iVar6 + 0x10), piVar3 != unaff_EBX)) {
    do {
      if ((piVar3 != *(int **)(iVar6 + 0xc)) && (piVar3 != *(int **)(iVar6 + 0x10))) {
        FUN_0041164c();
      }
      iVar2 = *(int *)((-(uint)(piVar3 != (int *)0x0) & (uint)(piVar3 + -4)) + 8);
      piVar3 = (int *)(-(uint)(iVar2 != 0) & iVar2 + 0x10U);
    } while (piVar3 != (int *)0x0);
  }
  FUN_0041389d();
  FUN_00412673();
  iVar2 = *(int *)(unaff_EBP + -0x18);
  uVar5 = FUN_004118ec();
  *(undefined4 *)(iVar2 + 0x30) = uVar5;
  iVar2 = *(int *)(unaff_EBP + -0x18);
  uVar5 = FUN_00414b16();
  *(undefined4 *)(iVar2 + 0x2c) = uVar5;
  iVar2 = *(int *)(unaff_EBP + -0x18);
  uVar5 = (*DAT_0097b704)();
  *(undefined4 *)(iVar2 + 0x28) = uVar5;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int **)(unaff_EBP + -0x50) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x50) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int **)(unaff_EBP + 0xc) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int **)(unaff_EBP + -0x58) != unaff_EBX) {
    FUN_00412fcf();
    *(int **)(unaff_EBP + -0x58) = unaff_EBX;
  }
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  if (*(int **)(unaff_EBP + -0x18) != unaff_EBX) {
    FUN_00412ffd();
    *(int **)(unaff_EBP + -0x18) = unaff_EBX;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x40) != unaff_EBX) {
    FUN_00412ffd();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


