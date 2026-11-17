/* ptr_00626c6a - 0x00626c6a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00626c6a(void)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  int *unaff_EBX;
  int unaff_EBP;
  uint uVar8;
  
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0041354c();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int **)(unaff_EBP + -0x9c) != unaff_EBX) {
    FUN_00403384();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uVar2 = FUN_00411641();
  *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffffec;
  FUN_004033a1(uVar2);
  iVar4 = unaff_EBP + -0x1a0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00405a1d(iVar4);
  FUN_00402660();
  FUN_00404a02(iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piVar3 = (int *)FUN_004032b4();
  *(int **)(unaff_EBP + -0xa0) = piVar3;
  *(int **)(unaff_EBP + 8) = unaff_EBX;
  if (((piVar3 != unaff_EBX) && (iVar4 = FUN_00404b30(), iVar4 < (int)unaff_EBX)) &&
     (iVar4 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iVar4 = FUN_00402bc3();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iVar4 = FUN_00402bc3();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar4 = FUN_00402bc3();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  cVar7 = (char)unaff_EBX;
  if (*(int **)(unaff_EBP + 8) == unaff_EBX) {
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (*(int **)(unaff_EBP + -0x88) != unaff_EBX) {
      FUN_00403384();
    }
  }
  else {
    *(int **)(unaff_EBP + -0x40) = unaff_EBX;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    *(int **)(unaff_EBP + -0x1c) = unaff_EBX;
    while( true ) {
      if (*(int **)(unaff_EBP + 8) == unaff_EBX) {
        FUN_00878dfb();
      }
      uVar8 = FUN_0040cf4d();
      if (uVar8 <= *(uint *)(unaff_EBP + -0x1c)) break;
      FUN_0087a1b0();
      FUN_00412335();
      *(undefined1 **)(unaff_EBP + -0x20) = &stack0xfffffff4;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      piVar3 = (int *)FUN_004032b4();
      *(int **)(unaff_EBP + -0x8c) = piVar3;
      *(int **)(unaff_EBP + -0x48) = unaff_EBX;
      if (((piVar3 != unaff_EBX) && (iVar4 = FUN_00404b30(), iVar4 < (int)unaff_EBX)) &&
         (iVar4 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iVar4 = FUN_00402bc3();
      if (iVar4 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 **)(unaff_EBP + -0x20) = &stack0xfffffff8;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iVar4 = FUN_00412550();
      *(int *)(unaff_EBP + -0x6c) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iVar5 = FUN_00402bc3();
      if (iVar5 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 **)(unaff_EBP + -0x20) = &stack0xfffffff8;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      uVar2 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + -0x68) = uVar2;
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iVar5 = FUN_00402bc3();
      if (iVar5 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      if (((int)unaff_EBX < *(int *)(unaff_EBP + -0x68)) && (iVar5 = FUN_0055443a(), iVar5 != 0)) {
        *(int **)(unaff_EBP + -0x44) = unaff_EBX;
        *(undefined4 *)(unaff_EBP + -0x4c) = 1;
        *(int *)(unaff_EBP + -0x20) = iVar4 / 1000000;
        *(int *)(unaff_EBP + -0x94) = *(int *)(unaff_EBP + -0x34) + 0x3e3 + (iVar4 / 1000000) * 4;
        while( true ) {
          if ((int *)**(undefined4 **)(unaff_EBP + -0x94) == unaff_EBX) {
            iVar5 = 0;
          }
          else {
            iVar5 = ((int *)**(undefined4 **)(unaff_EBP + -0x94))[-1];
          }
          if (iVar5 + -1 < *(int *)(unaff_EBP + -0x4c)) break;
          iVar4 = FUN_00458c4f();
          piVar3 = *(int **)(iVar4 + 4);
          FUN_0046575e();
          if ((piVar3 != unaff_EBX) &&
             (iVar4 = FUN_0045e2eb(), iVar4 == *(int *)(unaff_EBP + -0x6c))) {
            iVar4 = (**(code **)(*piVar3 + 0x18))();
            *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + -0x44) + iVar4;
          }
          *(int *)(unaff_EBP + -0x4c) = *(int *)(unaff_EBP + -0x4c) + 1;
          iVar4 = *(int *)(unaff_EBP + -0x6c);
        }
        iVar5 = FUN_0054e7b3();
        if (iVar5 != 0) {
          FUN_0044da62();
          FUN_00458c4f();
          *(undefined1 *)(unaff_EBP + -4) = 0x16;
          if ((*(int **)(unaff_EBP + -0xdc) != unaff_EBX) &&
             (iVar5 = FUN_0045e2eb(), iVar5 == iVar4)) {
            *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + -0x44) + 1;
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          FUN_0046575e();
        }
        if (*(int *)(unaff_EBP + -0x68) != *(int *)(unaff_EBP + -0x44) &&
            -1 < *(int *)(unaff_EBP + -0x68) - *(int *)(unaff_EBP + -0x44)) {
          piVar3 = (int *)FUN_0045f1e3();
          *piVar3 = iVar4;
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      FUN_004027eb();
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
    }
    if ((*(int **)(unaff_EBP + -0x40) != unaff_EBX) &&
       ((int *)(*(int **)(unaff_EBP + -0x40))[-1] != unaff_EBX)) {
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (*(int **)(unaff_EBP + -0x80) != unaff_EBX) {
        FUN_00403384();
      }
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      uVar2 = FUN_00411641();
      *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffffec;
      FUN_004033a1(uVar2);
      iVar4 = unaff_EBP + -0x160;
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      FUN_00405a1d(iVar4);
      FUN_00402660();
      FUN_00404a02(iVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      uVar2 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x98) = uVar2;
      iVar4 = FUN_00404b30();
      if ((iVar4 < (int)unaff_EBX) && (iVar4 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      iVar4 = FUN_00402bc3();
      if (iVar4 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      iVar4 = FUN_00402bc3();
      if (iVar4 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iVar4 = FUN_00402bc3();
      if (iVar4 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      if (*(int **)(unaff_EBP + -0x14) == unaff_EBX) {
        FUN_00679d86();
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        FUN_00419192();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        if (*(int **)(unaff_EBP + -0x74) != unaff_EBX) {
          FUN_00403384();
        }
        FUN_00679d86();
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        FUN_0041354c();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        if (*(int **)(unaff_EBP + -0xa8) != unaff_EBX) {
          FUN_00403384();
        }
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        uVar2 = FUN_00411641();
        *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffffec;
        FUN_004033a1(uVar2);
        iVar4 = unaff_EBP + -0x180;
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        FUN_00405a1d(iVar4);
        FUN_00402660();
        FUN_00404a02(iVar4);
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
        uVar2 = FUN_004032b4();
        *(undefined4 *)(unaff_EBP + -0x90) = uVar2;
        iVar4 = FUN_00404b30();
        if ((iVar4 < (int)unaff_EBX) && (iVar4 != -0x7fffbffe)) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        iVar4 = FUN_00402bc3();
        if (iVar4 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        iVar4 = FUN_00402bc3();
        if (iVar4 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        iVar4 = FUN_00402bc3();
        if (iVar4 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
      }
      *(int **)(unaff_EBP + -0x3c) = unaff_EBX;
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      cVar1 = FUN_00411581();
      if (cVar1 == '\0') {
        if (*(int **)(unaff_EBP + -0x14) == unaff_EBX) {
          FUN_00878dfb();
        }
        FUN_00404960();
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        FUN_004035f5();
        FUN_004027b3();
        VariantInit((VARIANTARG *)(unaff_EBP + -0xb8));
        *(undefined1 *)(unaff_EBP + -4) = 0x27;
        *(int **)(unaff_EBP + -0x2c) = unaff_EBX;
        while( true ) {
          if (*(int **)(unaff_EBP + -0x34) == unaff_EBX) {
            FUN_00878dfb();
          }
          iVar4 = (**(code **)(**(int **)(unaff_EBP + -0x34) + 0xc))();
          if (iVar4 != 0) break;
          *(undefined1 **)(unaff_EBP + -0x20) = &stack0xfffffff8;
          FUN_004033a1();
          *(undefined1 *)(unaff_EBP + -4) = 0x27;
          FUN_0040263d();
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x29;
          FUN_004343c5();
          *(int **)(unaff_EBP + -0x1c) = unaff_EBX;
          FUN_00454081();
          *(undefined1 *)(unaff_EBP + -4) = 0x2b;
          iVar4 = FUN_00402bc3();
          if (iVar4 < (int)unaff_EBX) {
            FUN_00878dfb();
          }
          if ((*(int **)(unaff_EBP + -0x1c) != unaff_EBX) &&
             ((char)**(int **)(unaff_EBP + -0x1c) != cVar7)) {
            FUN_004655d4();
            FUN_00414f8b();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x27;
          FUN_00414ebb();
          iVar4 = FUN_00402bc3();
          if (iVar4 < (int)unaff_EBX) {
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        iVar4 = FUN_00402bc3();
        if (iVar4 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        if (*(int **)(unaff_EBP + -0x34) != unaff_EBX) {
          (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
        }
      }
      else {
        FUN_005f3a71();
        FUN_004655d4();
        FUN_00414f8b();
      }
      uVar8 = 0;
      do {
        if ((*(int **)(unaff_EBP + -0x3c) == unaff_EBX) ||
           ((uint)(*(int **)(unaff_EBP + -0x3c))[-1] <= uVar8)) break;
        piVar3 = (int *)FUN_004029b9();
        *(int **)(unaff_EBP + -0x2c) = piVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        if (piVar3 == unaff_EBX) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_007e62e9();
        }
        uVar6 = -(uint)(iVar4 != 0) & iVar4 + 8U;
        *(uint *)(unaff_EBP + -0x20) = -(uint)(uVar6 != 0) & uVar6 - 8;
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        FUN_004c26c4();
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
        FUN_004726fc();
        *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xfffffff4;
        FUN_00450368();
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
        FUN_004c2677();
        FUN_007eddac();
        FUN_007edf11();
        FUN_007e6e3c();
        iVar4 = FUN_004bc6a2();
        if (iVar4 == 0x2000) {
          uVar8 = uVar8 - 1;
        }
        else {
          if (iVar4 != 0x2001) {
            *(undefined1 *)(unaff_EBP + -4) = 0x23;
            FUN_004c26e1();
            goto LAB_0062784f;
          }
          uVar8 = uVar8 + 1;
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        FUN_004c26e1();
      } while ((int)unaff_EBX <= (int)uVar8);
      FUN_0060142b();
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      FUN_00457cda();
      FUN_0045d247();
      FUN_00457d37();
      FUN_00457fa0();
      FUN_004751b2();
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      FUN_0045ebca();
LAB_0062784f:
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      FUN_0045f10c();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      FUN_00445a30();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int **)(unaff_EBP + 8) != unaff_EBX) {
        (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
      }
      goto LAB_00627bfd;
    }
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (*(int **)(unaff_EBP + -0xa4) != unaff_EBX) {
      FUN_00403384();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00445a30();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_004027eb();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x38;
  FUN_0041354c();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  VariantInit((VARIANTARG *)(unaff_EBP + -200));
  iVar4 = FUN_00402e32();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x39;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
  iVar4 = FUN_00402e32();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
  uVar2 = FUN_00411641();
  *(undefined1 **)(unaff_EBP + -0x50) = &stack0xffffffec;
  FUN_004033a1(uVar2);
  iVar4 = unaff_EBP + -0xd8;
  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
  FUN_00405a1d(iVar4);
  FUN_00402660();
  FUN_00404a02(iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0x3c;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar2;
  iVar4 = FUN_00404b30();
  if ((iVar4 < (int)unaff_EBX) && (iVar4 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
  iVar4 = FUN_00402bc3();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x39;
  iVar4 = FUN_00402bc3();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar4 = FUN_00402bc3();
  if (iVar4 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(int **)(unaff_EBP + -0x38) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  if (*(int **)(unaff_EBP + -0x14) == unaff_EBX) {
    FUN_005f3a71();
    FUN_004655d4();
    FUN_00414f8b();
  }
  else {
    FUN_00404960();
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    FUN_004035f5();
    *(undefined1 *)(unaff_EBP + -4) = 0x40;
    if (*(int **)(unaff_EBP + -0x50) != unaff_EBX) {
      (**(code **)(**(int **)(unaff_EBP + -0x50) + 8))();
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
    *(undefined1 *)(unaff_EBP + -4) = 0x41;
    *(int **)(unaff_EBP + -100) = unaff_EBX;
    while( true ) {
      if (*(int **)(unaff_EBP + -0x1c) == unaff_EBX) {
        FUN_00878dfb();
      }
      iVar4 = (**(code **)(**(int **)(unaff_EBP + -0x1c) + 0xc))();
      if (iVar4 != 0) break;
      *(undefined1 **)(unaff_EBP + -0x70) = &stack0xfffffff8;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 0x41;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
      FUN_004343c5();
      *(int **)(unaff_EBP + 8) = unaff_EBX;
      FUN_00454081();
      *(undefined1 *)(unaff_EBP + -4) = 0x45;
      iVar4 = FUN_00402bc3();
      if (iVar4 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      if ((*(int **)(unaff_EBP + 8) != unaff_EBX) && ((char)**(int **)(unaff_EBP + 8) != cVar7)) {
        FUN_004655d4();
        FUN_00414f8b();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x41;
      FUN_00414ebb();
      iVar4 = FUN_00402bc3();
      if (iVar4 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x40;
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    if (*(int **)(unaff_EBP + -0x1c) != unaff_EBX) {
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
  }
  uVar8 = 0;
  do {
    if ((*(int **)(unaff_EBP + -0x38) == unaff_EBX) ||
       ((uint)(*(int **)(unaff_EBP + -0x38))[-1] <= uVar8)) break;
    piVar3 = (int *)FUN_004029b9();
    *(int **)(unaff_EBP + 8) = piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0x46;
    if (piVar3 == unaff_EBX) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_007e62e9();
    }
    uVar6 = -(uint)(iVar4 != 0) & iVar4 + 8U;
    *(uint *)(unaff_EBP + -0x2c) = -(uint)(uVar6 != 0) & uVar6 - 8;
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    FUN_004c26c4();
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    FUN_004726fc();
    *(undefined1 **)(unaff_EBP + 8) = &stack0xfffffff4;
    FUN_00450368();
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    FUN_004c2677();
    FUN_007eddac();
    FUN_007edf11();
    FUN_007e6e3c();
    iVar4 = FUN_004bc6a2();
    if (iVar4 == 0x2000) {
      uVar8 = uVar8 - 1;
    }
    else {
      if (iVar4 != 0x2001) {
        *(undefined1 *)(unaff_EBP + -4) = 0x3d;
        FUN_004c26e1();
        break;
      }
      uVar8 = uVar8 + 1;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    FUN_004c26e1();
  } while ((int)unaff_EBX <= (int)uVar8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0045f10c();
LAB_00627bfd:
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x14) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(char *)(unaff_EBP + -4) = cVar7;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


