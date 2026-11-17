/* FUN_00759e1f - 0x00759e1f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00759e1f(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    FUN_004027eb();
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x94) = 0;
    *(undefined4 *)(unaff_EBP + -0x90) = 0x1f;
    *(undefined4 *)(unaff_EBP + -0x8c) = 0;
    *(undefined ***)(unaff_EBP + -0x98) = &PTR_FUN_008f1074;
    FUN_005e1eea();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    *(int *)(unaff_EBP + -0x44) = extraout_ECX + 4;
    FUN_004f1b19();
    *(int *)(unaff_EBP + -0x4c) = extraout_ECX + 8;
    FUN_004f1b19();
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      FUN_00878dfb();
    }
    FUN_0040cf4d();
    FUN_0075bb4e();
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      FUN_00878dfb();
    }
    FUN_0040cf4d();
    FUN_0075bb4e();
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      FUN_00878dfb();
    }
    FUN_00404960();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_004035f5();
    FUN_004027b3();
    VariantInit((VARIANTARG *)(unaff_EBP + -0x80));
    *(undefined1 *)(unaff_EBP + -4) = 5;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x30) == 0) {
        FUN_00878dfb();
      }
      iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x30) + 0xc))();
      if (iVar2 != 0) break;
      FUN_00405a23();
      *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffff1c;
      FUN_004059fd();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x40) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (((iVar2 != 0) && (iVar2 = FUN_00404b30(), iVar2 < 0)) && (iVar2 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffff24;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffff24;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffff24;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffff24;
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        FUN_00409205();
      }
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      FUN_00414edd();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(unaff_EBP + -0x18) + -4);
      }
      if (iVar2 < 4) {
LAB_0075a168:
        iVar2 = *(int *)(unaff_EBP + -0x24);
        iVar1 = **(int **)(unaff_EBP + -0x44);
        iVar3 = FUN_00403213();
        iVar4 = FUN_00403213();
        iVar5 = FUN_00403213();
        iVar6 = FUN_00403213();
        SetRect((LPRECT)(iVar1 + iVar2 * 0x18),iVar6,iVar5,iVar4,iVar3);
        if (*(int *)(unaff_EBP + -0x1c) != 0) {
          FUN_00409205();
        }
        *(undefined4 *)(unaff_EBP + -0x28) = 0;
        FUN_00414edd();
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        FUN_005e0a8a();
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        if (*(int *)(unaff_EBP + -0x28) != 0) {
          FUN_00434e38();
        }
        *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
      }
      else {
        FUN_0045e08c();
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        iVar2 = FUN_004a3109();
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        if (*(int *)(unaff_EBP + -0x38) != 0) {
          FUN_00434e38();
        }
        if (iVar2 != 0) goto LAB_0075a168;
        iVar2 = *(int *)(unaff_EBP + -0x20);
        iVar1 = **(int **)(unaff_EBP + -0x4c);
        iVar3 = FUN_00403213();
        iVar4 = FUN_00403213();
        iVar5 = FUN_00403213();
        iVar6 = FUN_00403213();
        SetRect((LPRECT)(iVar1 + iVar2 * 0x18),iVar6,iVar5,iVar4,iVar3);
        FUN_005e0a8a();
        *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        FUN_00878dfb();
      }
      FUN_004027eb();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00402fa6();
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        FUN_00878dfb();
      }
    }
    FUN_0075bba0();
    FUN_0075bba0();
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    if (*(int *)(unaff_EBP + -0x38) != 0) {
      FUN_00403384();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    uVar7 = FUN_00411641();
    *(undefined1 **)(unaff_EBP + 8) = &stack0xffffff14;
    FUN_004033a1(uVar7);
    iVar2 = unaff_EBP + -200;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    FUN_00405a1d(iVar2);
    FUN_00402660();
    FUN_00404a02(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x38) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    if (((iVar2 != 0) && (iVar2 = FUN_00404b30(), iVar2 < 0)) && (iVar2 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x34) == 0) {
      FUN_00878dfb();
    }
    FUN_00404960();
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    iVar2 = FUN_00404c0e();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    FUN_004027b3();
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x30) == 0) {
        FUN_00878dfb();
      }
      iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x30) + 0xc))();
      if (iVar2 != 0) break;
      FUN_00405a23();
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      if (*(int *)(unaff_EBP + 8) != 0) {
        FUN_00409205();
      }
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      FUN_00414edd();
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      iVar2 = FUN_005e0a3a();
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        FUN_00434e38();
      }
      if (iVar2 == 0) {
LAB_0075a6de:
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        FUN_00402fa6();
      }
      else {
        *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffff1c;
        FUN_004059fd();
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        FUN_0040263d();
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        iVar2 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x40) = iVar2;
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        if (((iVar2 != 0) && (iVar2 = FUN_00404b30(), iVar2 < 0)) && (iVar2 != -0x7fffbffe)) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffff24;
        FUN_00679e4e();
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        FUN_0040263d();
        FUN_004048a4();
        *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffff24;
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        FUN_00679e4e();
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        FUN_0040263d();
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        FUN_00454081();
        FUN_00454081();
        if (*(int *)(unaff_EBP + 8) != 0) {
          FUN_00409205();
        }
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        FUN_00414edd();
        *(undefined1 *)(unaff_EBP + -4) = 0x2b;
        FUN_004653c5();
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x2b;
        if (*(int *)(unaff_EBP + -0x2c) != 0) {
          FUN_00434e38();
        }
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        FUN_00414edd();
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
        iVar2 = FUN_005e0a3a();
        *(undefined1 *)(unaff_EBP + -4) = 0x2b;
        if (*(int *)(unaff_EBP + -0x1c) != 0) {
          FUN_00434e38();
        }
        if (iVar2 == 0) {
          *(undefined1 *)(unaff_EBP + -4) = 0x2a;
          if (*(int *)(unaff_EBP + -0x14) != 0) {
            FUN_00434e38();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x28;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x26;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
            (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
          }
          goto LAB_0075a6de;
        }
        FUN_00454081();
        FUN_00454081();
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        if (*(int *)(unaff_EBP + 8) != 0) {
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + 8) = 0;
        }
      }
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00402676();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined ***)(unaff_EBP + -0x98) = &PTR_FUN_008f1074;
    FUN_0075bccf();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


