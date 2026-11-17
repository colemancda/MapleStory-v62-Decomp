/* ptr_0045c600 - 0x0045c600 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0045c600(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int unaff_EBP;
  int iVar8;
  undefined1 auStack_14 [4];
  int iStack_10;
  int iStack_c;
  
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_c = 0x45c61b;
  FUN_0045efbb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    FUN_00434e38();
  }
  if (3 < *(int *)(unaff_EBP + -0x20)) {
    iStack_c = unaff_EBP + -0x28;
    iStack_10 = 0x45c649;
    FUN_0045e053();
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_c = 0x45c65e;
    FUN_00414edd();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_c = 0x45c66f;
    FUN_0045e02d();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_c = 0x45c689;
    FUN_0045efbb();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (*(int *)(unaff_EBP + -0x30) != 0) {
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      FUN_00434e38();
    }
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00403191();
  iStack_c = unaff_EBP + -0x5c;
  iStack_10 = unaff_EBP + -0x6c;
  *(undefined1 **)(unaff_EBP + -0x38) = auStack_14;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00679e4e(auStack_14,0x568);
  iVar4 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00405a1d(iVar4);
  FUN_00402660();
  FUN_00404a02(iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_c = 0x45c72f;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x30) = uVar3;
  iVar4 = FUN_00404b30();
  if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  iVar4 = *(int *)(unaff_EBP + -0x1c);
  piVar7 = (int *)(iVar4 + 0x44);
  iStack_c = unaff_EBP + -0x2c;
  *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffff8;
  iStack_10 = 0x45c7ad;
  FUN_00424dbc();
  iStack_c = 0x45c7b2;
  FUN_004695e1();
  FUN_0084aa92();
  *(undefined4 *)(unaff_EBP + -0x28) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xffffffff;
  uVar5 = 0;
  piVar1 = (int *)(DAT_00978368 + 0x3278);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  while ((iVar6 = *piVar1, iVar6 != 0 && (uVar5 < *(uint *)(iVar6 + -4)))) {
    iVar4 = *(int *)(iVar6 + 4 + uVar5 * 8);
    iVar6 = *(int *)(iVar4 + 0xc);
    if ((9999999 < iVar6) && (iVar6 < 80000000)) {
      iVar6 = (iVar6 / 10000000) % 10;
      iVar4 = (*(int *)(iVar4 + 0xc) / 100000) % 100;
      if ((iVar6 == *(int *)(unaff_EBP + -0x28)) && (iVar4 == *(int *)(unaff_EBP + -0x24))) {
        iStack_c = 0x45c83f;
        iVar4 = FUN_0045c1ad();
        iVar4 = iVar4 * 0x1c;
        piVar2 = (int *)(iVar4 + 0x14 + *piVar7);
        *piVar2 = *piVar2 + 1;
        uVar5 = *(uint *)(unaff_EBP + -0x10);
        iVar6 = *piVar1;
      }
      else {
        *(int *)(unaff_EBP + -0x28) = iVar6;
        *(int *)(unaff_EBP + -0x24) = iVar4;
        iStack_c = 0x45c863;
        iVar4 = FUN_0045c1ad();
        if (iVar4 == -1) {
          *(undefined4 *)(unaff_EBP + -0x38) = 0x22000006;
          *(undefined4 *)(unaff_EBP + 8) = 0x22000006;
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
                    /* WARNING: Subroutine does not return */
          iStack_c = 0x45c8bd;
          __CxxThrowException_8();
        }
        iVar4 = iVar4 * 0x1c;
        uVar5 = *(uint *)(unaff_EBP + -0x10);
        *(uint *)(iVar4 + 0x10 + *piVar7) = uVar5;
        *(undefined4 *)(iVar4 + 0x14 + *piVar7) = 1;
        iVar6 = *piVar1;
      }
      if (*(int *)(*(int *)(iVar6 + 4 + uVar5 * 8) + 0x40) == 0) {
        piVar2 = (int *)(iVar4 + 0x18 + *piVar7);
        *piVar2 = *piVar2 + 1;
      }
    }
    iVar4 = *(int *)(unaff_EBP + -0x1c);
    uVar5 = uVar5 + 1;
    *(uint *)(unaff_EBP + -0x10) = uVar5;
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  while ((iVar6 = *piVar1, iVar6 != 0 && (*(uint *)(unaff_EBP + -0x10) < *(uint *)(iVar6 + -4)))) {
    iVar8 = *(uint *)(unaff_EBP + -0x10) * 8;
    iVar4 = *(int *)(iVar8 + 4 + iVar6);
    iVar6 = *(int *)(iVar4 + 0xc);
    if ((79999999 < iVar6) && ((iVar6 < 90000000 && (*(int *)(iVar4 + 0x40) != 0)))) {
      do {
        if ((*piVar7 == 0) ||
           (iVar4 = *(int *)(*piVar7 + -4), *(int *)(unaff_EBP + -0x30) = iVar4, iVar4 == 0)) {
          uVar3 = FUN_004133f0();
          *(undefined4 *)(unaff_EBP + -0x20) = uVar3;
        }
        else {
          uVar5 = FUN_004133f0();
          *(uint *)(unaff_EBP + -0x20) = uVar5 % *(uint *)(unaff_EBP + -0x30);
        }
        iVar4 = *(int *)(*(int *)(unaff_EBP + -0x20) * 0x1c + 0x14 + *piVar7);
        *(int *)(unaff_EBP + -0x30) = iVar4;
      } while (iVar4 == 0);
      iVar4 = *(int *)(*piVar1 + iVar8 + 4);
      *(int *)(unaff_EBP + -0x60) = iVar4;
      if (iVar4 != 0) {
        InterlockedIncrement((LONG *)(iVar4 + 4));
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      FUN_0045f31f();
      iVar4 = *(int *)(unaff_EBP + -0x20);
      FUN_004133f0();
      iStack_c = 0x45c998;
      FUN_0045f28f();
      FUN_0045e10e();
      piVar2 = (int *)(iVar4 * 0x1c + 0x14 + *piVar7);
      *piVar2 = *piVar2 + 1;
      uVar5 = *(int *)(unaff_EBP + -0x20) + 1;
      iVar4 = uVar5 * 0x1c;
      for (; (iVar6 = *piVar7, iVar6 != 0 && (uVar5 < *(uint *)(iVar6 + -4))); uVar5 = uVar5 + 1) {
        piVar2 = (int *)(iVar4 + 0x10 + iVar6);
        *piVar2 = *piVar2 + 1;
        iVar4 = iVar4 + 0x1c;
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_0045e46f();
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    iVar4 = *(int *)(unaff_EBP + -0x1c);
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  while ((iVar6 = *piVar7, iVar6 != 0 && (*(uint *)(unaff_EBP + -0x10) < *(uint *)(iVar6 + -4)))) {
    iVar6 = *(int *)(unaff_EBP + -0x28) + iVar6;
    iVar4 = *(int *)(iVar6 + 0x10);
    *(int *)(unaff_EBP + -0x30) = iVar4;
    if ((iVar4 != -1) &&
       (iVar6 = *(int *)(iVar6 + 0x14) + iVar4, *(int *)(unaff_EBP + -0x18) = iVar6,
       iVar4 < iVar6 + -1)) {
      iVar6 = iVar4 + 1;
      *(int *)(unaff_EBP + -0x20) = iVar4 << 3;
      *(int *)(unaff_EBP + -0x24) = iVar6;
      do {
        iVar4 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x20) + 4 + *piVar1) + 0xc);
        if (((iVar4 < 80000000) || (89999999 < iVar4)) &&
           (*(int *)(unaff_EBP + -0x14) = iVar6, iVar6 < *(int *)(unaff_EBP + -0x18))) {
          do {
            iVar4 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x14) * 8 + 4 + *piVar1) + 0xc);
            if ((iVar4 < 80000000) || (89999999 < iVar4)) {
              *(undefined4 *)(unaff_EBP + -0x34) =
                   *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 4 + *piVar1);
              uVar3 = FUN_0045e2eb();
              *(undefined4 *)(unaff_EBP + -0x38) = uVar3;
              iVar4 = FUN_0045e2eb();
              if (*(int *)(unaff_EBP + -0x38) < iVar4) {
                iVar4 = *(int *)(*(int *)(unaff_EBP + -0x20) + *piVar1 + 4);
                *(int *)(unaff_EBP + -0x40) = iVar4;
                if (iVar4 != 0) {
                  InterlockedIncrement((LONG *)(iVar4 + 4));
                }
                *(undefined1 *)(unaff_EBP + -4) = 0xe;
                FUN_0045e10e();
                FUN_0045e10e();
                *(undefined1 *)(unaff_EBP + -4) = 1;
                if (*(int *)(unaff_EBP + -0x40) != 0) {
                  FUN_0045e794();
                  *(undefined4 *)(unaff_EBP + -0x40) = 0;
                }
              }
            }
            *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
          } while (*(int *)(unaff_EBP + -0x14) < *(int *)(unaff_EBP + -0x18));
        }
        iVar4 = *(int *)(unaff_EBP + -0x24);
        *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 8;
        iVar6 = iVar4 + 1;
        iVar8 = *(int *)(unaff_EBP + -0x18) + -1;
        *(int *)(unaff_EBP + -0x24) = iVar6;
      } while (iVar4 < iVar8);
      iVar4 = *(int *)(unaff_EBP + -0x30);
      if (iVar4 < iVar8) {
        iVar6 = iVar4 + 1;
        *(int *)(unaff_EBP + -0x20) = iVar4 << 3;
        *(int *)(unaff_EBP + -0x24) = iVar6;
        do {
          *(int *)(unaff_EBP + -0x14) = iVar6;
          while (iVar6 < *(int *)(unaff_EBP + -0x18)) {
            iVar4 = *piVar1;
            if (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x20) + 4 + iVar4) + 0x40) <
                *(int *)(*(int *)(*(int *)(unaff_EBP + -0x14) * 8 + 4 + iVar4) + 0x40)) {
              iVar4 = *(int *)(*(int *)(unaff_EBP + -0x20) + iVar4 + 4);
              *(int *)(unaff_EBP + -0x50) = iVar4;
              if (iVar4 != 0) {
                InterlockedIncrement((LONG *)(iVar4 + 4));
              }
              *(undefined1 *)(unaff_EBP + -4) = 0xf;
              FUN_0045e10e();
              FUN_0045e10e();
              *(undefined1 *)(unaff_EBP + -4) = 1;
              if (*(int *)(unaff_EBP + -0x50) != 0) {
                FUN_0045e794();
                *(undefined4 *)(unaff_EBP + -0x50) = 0;
              }
            }
            *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
            iVar6 = *(int *)(unaff_EBP + -0x14);
          }
          iVar4 = *(int *)(unaff_EBP + -0x24);
          *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 8;
          iVar6 = iVar4 + 1;
          iVar8 = *(int *)(unaff_EBP + -0x18) + -1;
          *(int *)(unaff_EBP + -0x24) = iVar6;
        } while (iVar4 < iVar8);
        iVar4 = *(int *)(unaff_EBP + -0x30);
        if (iVar4 < iVar8) {
          *(int *)(unaff_EBP + -0x20) = iVar4 << 3;
          *(int *)(unaff_EBP + -0x24) = iVar4 + 1;
          do {
            iVar4 = *(int *)(*(int *)(unaff_EBP + -0x20) + 4 + *piVar1);
            if ((*(int *)(iVar4 + 0x40) != 0) &&
               ((iVar4 = *(int *)(iVar4 + 0xc), iVar4 < 80000000 || (89999999 < iVar4)))) {
              iVar4 = *(int *)(unaff_EBP + -0x24);
              while (*(int *)(unaff_EBP + -0x14) = iVar4, iVar4 < *(int *)(unaff_EBP + -0x18)) {
                iVar4 = *(int *)(iVar4 * 8 + 4 + *piVar1);
                if ((*(int *)(iVar4 + 0x40) != 0) &&
                   (((*(int *)(iVar4 + 0xc) < 80000000 || (89999999 < *(int *)(iVar4 + 0xc))) &&
                    (iVar6 = *piVar1 + *(int *)(unaff_EBP + -0x20),
                    *(int *)(*(int *)(iVar6 + 4) + 0x24) < *(int *)(iVar4 + 0x24))))) {
                  iVar4 = *(int *)(iVar6 + 4);
                  *(int *)(unaff_EBP + -0x60) = iVar4;
                  if (iVar4 != 0) {
                    InterlockedIncrement((LONG *)(iVar4 + 4));
                  }
                  *(undefined1 *)(unaff_EBP + -4) = 0x10;
                  FUN_0045e10e();
                  FUN_0045e10e();
                  *(undefined1 *)(unaff_EBP + -4) = 1;
                  if (*(int *)(unaff_EBP + -0x60) != 0) {
                    FUN_0045e794();
                    *(undefined4 *)(unaff_EBP + -0x60) = 0;
                  }
                }
                iVar4 = *(int *)(unaff_EBP + -0x14) + 1;
              }
            }
            *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
            *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 8;
          } while (*(int *)(unaff_EBP + -0x24) + -1 < *(int *)(unaff_EBP + -0x18) + -1);
        }
      }
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 0x1c;
    iVar4 = *(int *)(unaff_EBP + -0x1c);
  }
  iStack_c = 0x45cce2;
  FUN_004245d2();
  FUN_0045d48f();
  FUN_0045d4d6();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  do {
    iVar6 = *piVar1;
    if ((iVar6 == 0) || (*(uint *)(iVar6 + -4) <= *(uint *)(unaff_EBP + -0x10))) {
      FUN_0045f3be();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    *(undefined4 *)(*(int *)(iVar6 + 4 + *(uint *)(unaff_EBP + -0x10) * 8) + 0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    while ((iVar6 = *(int *)(iVar4 + 0x4c), iVar6 != 0 &&
           (*(uint *)(unaff_EBP + -0x28) < *(uint *)(iVar6 + -4)))) {
      piVar7 = (int *)(*(int *)(unaff_EBP + -0x24) + iVar6);
      if ((piVar7 != (int *)0x0) && (iVar6 = FUN_0045e2eb(), iVar6 == *piVar7)) {
        *(undefined4 *)(unaff_EBP + 8) = 0;
        do {
          piVar7 = piVar7 + 1;
          if (*piVar7 == 0) break;
          iVar6 = *(int *)(*piVar1 + 4 + *(int *)(unaff_EBP + -0x10) * 8);
          if (*piVar7 == *(int *)(iVar6 + 0xc)) {
            *(undefined4 *)(iVar6 + 0x48) = 1;
          }
          *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
        } while (*(int *)(unaff_EBP + 8) < 10);
      }
      *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
      *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 0x68;
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
  } while( true );
}


