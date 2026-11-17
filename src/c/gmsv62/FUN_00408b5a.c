/* FUN_00408b5a - 0x00408b5a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00408b5a(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  int unaff_EBP;
  undefined1 *puStack_110;
  int *piStack_10c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  else {
    uVar2 = FUN_00409205();
    *(undefined4 *)(unaff_EBP + -0x24) = uVar2;
  }
  *(int *)(unaff_EBP + -100) = extraout_ECX + 0x124;
  iVar3 = FUN_00414ce3();
  if (iVar3 == 0) {
    FUN_00412a12();
    FUN_0041358f();
    FUN_0041366d();
    piStack_10c = (int *)0x408be9;
    _memset(*(void **)(*(int *)(unaff_EBP + -0x28) + 0x10),0,0x6e0);
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00403191();
    piStack_10c = (int *)(unaff_EBP + -0x8c);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    puStack_110 = (undefined1 *)0x408c29;
    uVar2 = FUN_004091f9();
    *(undefined1 ***)(unaff_EBP + -0x4c) = &puStack_110;
    puStack_110 = extraout_ECX_00;
    FUN_004033a1(uVar2);
    iVar3 = unaff_EBP + -0xcc;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00405a1d(iVar3);
    FUN_00402660();
    FUN_00404a02(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x5c) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    if (iVar3 != 0) {
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    cVar1 = FUN_00411581();
    if (cVar1 == '\0') {
      *(undefined4 *)(unaff_EBP + -0x40) = 0;
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
      do {
        *(undefined1 **)(unaff_EBP + -0x34) = &stack0xffffff00;
        piStack_10c = (int *)0x408cfc;
        FUN_004833ff();
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_0040263d();
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_00412348();
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        FUN_00417232();
        FUN_004027b3();
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          *(undefined1 *)(unaff_EBP + -4) = 7;
          FUN_004027eb();
        }
        else {
          puStack_110 = &stack0xfffffef8;
          *(undefined1 **)(unaff_EBP + -0x34) = &stack0xfffffef8;
          piStack_10c = (int *)0x3ba;
          FUN_00679e4e();
          piStack_10c = (int *)(unaff_EBP + -0xec);
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          puStack_110 = (undefined1 *)0x408d9b;
          FUN_0040263d();
          puStack_110 = (undefined1 *)0x408da2;
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iVar3 = FUN_004032b4();
          *(int *)(unaff_EBP + -0x50) = iVar3;
          *(undefined4 *)(unaff_EBP + -0x20) = 0;
          if (iVar3 != 0) {
            iVar3 = FUN_0041a4e5();
            if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
              FUN_00878dfb();
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            FUN_00878dfb();
          }
          puStack_110 = &stack0xfffffef8;
          *(undefined1 **)(unaff_EBP + -0x34) = &stack0xfffffef8;
          piStack_10c = (int *)0x3bb;
          FUN_00679e4e();
          piStack_10c = (int *)(unaff_EBP + -0xbc);
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          puStack_110 = (undefined1 *)0x408e17;
          FUN_0040263d();
          puStack_110 = (undefined1 *)0x408e1e;
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          iVar3 = FUN_004032b4();
          *(int *)(unaff_EBP + -0x6c) = iVar3;
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          if (iVar3 != 0) {
            iVar3 = FUN_0041a4e5();
            if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
              FUN_00878dfb();
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            FUN_00878dfb();
          }
          cVar1 = FUN_004115ad();
          if (cVar1 == '\0') {
            cVar1 = FUN_004115ad();
            if (cVar1 != '\0') goto LAB_00408f03;
            if (*(int *)(unaff_EBP + -0x18) == 0) {
              FUN_00878dfb();
              if (*(int *)(unaff_EBP + -0x18) == 0) {
                FUN_00878dfb();
              }
            }
            *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x18);
            if (*(int *)(unaff_EBP + -0x20) == 0) {
              FUN_00878dfb();
            }
            *(int *)(unaff_EBP + -0x48) = *(int *)(unaff_EBP + -0x20);
            if (*(int *)(unaff_EBP + -0x20) == 0) {
              FUN_00878dfb();
            }
            *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x20);
            iVar3 = *(int *)(*(int *)(unaff_EBP + -0x28) + 0x10);
            iVar4 = *(int *)(unaff_EBP + -0x30);
            FUN_00404abb();
            FUN_00404a94();
            FUN_00404abb();
            piStack_10c = (int *)0x408ef7;
            piStack_10c = (int *)FUN_00404a94();
            puStack_110 = (undefined1 *)(iVar3 + iVar4);
            FUN_004114f3();
          }
          else {
LAB_00408f03:
            puStack_110 = (undefined1 *)
                          (*(int *)(*(int *)(unaff_EBP + -0x28) + 0x10) +
                          *(int *)(unaff_EBP + -0x30));
            piStack_10c = (int *)0x0;
            FUN_004114f3();
          }
          *(undefined4 *)(unaff_EBP + -0x34) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          if (*(int *)(unaff_EBP + -0x14) == 0) {
            FUN_00878dfb();
          }
          FUN_00404960();
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          FUN_004035f5();
          FUN_004027b3();
          VariantInit((VARIANTARG *)(unaff_EBP + -0x7c));
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          *(undefined4 *)(unaff_EBP + -0x60) = 0;
          while( true ) {
            if (*(int *)(unaff_EBP + -0x24) == 0) {
              FUN_00878dfb();
            }
            piStack_10c = *(int **)(unaff_EBP + -0x24);
            puStack_110 = (undefined1 *)0x408f80;
            iVar3 = (**(code **)(*piStack_10c + 0xc))();
            if (iVar3 != 0) goto LAB_00409119;
            FUN_00405a23();
            piStack_10c = (int *)(unaff_EBP + -0x38);
            *(undefined1 **)(unaff_EBP + -0x48) = &stack0xfffffef8;
            *(undefined1 *)(unaff_EBP + -4) = 0x1d;
            puStack_110 = (undefined1 *)0x408fac;
            FUN_004059fd();
            piStack_10c = (int *)(unaff_EBP + -0xdc);
            *(undefined1 *)(unaff_EBP + -4) = 0x1d;
            puStack_110 = (undefined1 *)0x408fbf;
            FUN_0040263d();
            puStack_110 = (undefined1 *)0x408fc6;
            FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x1f;
            iVar3 = FUN_004032b4();
            *(int *)(unaff_EBP + -0x54) = iVar3;
            *(undefined4 *)(unaff_EBP + -0x44) = 0;
            if (iVar3 != 0) {
              iVar3 = FUN_00404b30();
              if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
                FUN_00878dfb();
              }
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x21;
            iVar3 = FUN_00402bc3();
            if (iVar3 < 0) {
              FUN_00878dfb();
            }
            if (*(int *)(unaff_EBP + -0x44) != 0) break;
            *(undefined1 *)(unaff_EBP + -4) = 0x1c;
            FUN_00402fa6();
            iVar3 = FUN_00402bc3();
            if (iVar3 < 0) {
              FUN_00878dfb();
            }
          }
          uVar2 = FUN_0040cf4d();
          *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
          FUN_0041725e();
          iVar3 = 0;
          if (0 < *(int *)(unaff_EBP + -0x1c)) {
            do {
              FUN_0087a1b0();
              puStack_110 = (undefined1 *)0x409081;
              piStack_10c = (int *)iVar3;
              piStack_10c = (int *)FUN_00412335();
              *(undefined1 **)(unaff_EBP + -0x48) = &stack0xfffffef8;
              puStack_110 = (undefined1 *)0x40908d;
              FUN_004033a1();
              piStack_10c = (int *)(unaff_EBP + -0xfc);
              *(undefined1 *)(unaff_EBP + -4) = 0x21;
              puStack_110 = (undefined1 *)0x4090a0;
              FUN_0040263d();
              puStack_110 = (undefined1 *)0x4090a7;
              FUN_004048a4();
              *(undefined1 *)(unaff_EBP + -4) = 0x23;
              uVar2 = FUN_004032b4();
              *(undefined4 *)(unaff_EBP + -0x4c) = uVar2;
              iVar4 = FUN_0041a581();
              if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x21;
              iVar4 = FUN_00402bc3();
              if (iVar4 < 0) {
                FUN_00878dfb();
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(unaff_EBP + -0x1c));
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          if (*(int **)(unaff_EBP + -0x44) != (int *)0x0) {
            (**(code **)(**(int **)(unaff_EBP + -0x44) + 8))();
          }
          if (*(int *)(unaff_EBP + -0x38) != 0) {
            FUN_004030b1();
            *(undefined4 *)(unaff_EBP + -0x38) = 0;
          }
LAB_00409119:
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
            (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
            (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
            (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 7;
          if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
            (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
          }
        }
        *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + 0x30;
        *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + -0x40) + 1;
      } while (*(int *)(unaff_EBP + -0x30) < 0x14a0);
    }
    if (*(int *)(unaff_EBP + 8) == 0) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    }
    else {
      uVar2 = FUN_00409205();
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
    }
    FUN_00414d70();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int **)(unaff_EBP + -0x3c) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x3c) + 8))();
    }
  }
  iVar3 = *(int *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (iVar3 != 0) {
    FUN_0041302b();
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}


