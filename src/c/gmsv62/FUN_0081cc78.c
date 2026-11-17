/* FUN_0081cc78 - 0x0081cc78 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0081cc78(void)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int *in_EAX;
  uint uVar10;
  int *unaff_EBX;
  int unaff_EBP;
  undefined4 uStack_14;
  char *pcStack_10;
  
  if (in_EAX != unaff_EBX) {
    (**(code **)(*in_EAX + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (*(int **)(unaff_EBP + -0x24) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  do {
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
    while( true ) {
      if (*(int **)(unaff_EBP + -0x18) == unaff_EBX) {
        FUN_00878dfb();
      }
      uVar4 = FUN_0040cf4d();
      if (*(uint *)(unaff_EBP + -0x20) < uVar4) break;
      if (*(int **)(unaff_EBP + -0x48) == unaff_EBX) {
        puVar9 = *(undefined4 **)(unaff_EBP + 8);
        *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) | 1;
        *puVar9 = unaff_EBX;
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        FUN_00438c5b();
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_00445a30();
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (*(int **)(unaff_EBP + -0x18) != unaff_EBX) {
          (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (*(int **)(unaff_EBP + -0x40) != unaff_EBX) {
          (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
        }
        piVar5 = *(int **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 1;
LAB_0081cda6:
        if (piVar5 != unaff_EBX) {
          (**(code **)(*piVar5 + 8))();
        }
        *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
        if (*(int **)(unaff_EBP + -0x1c) != unaff_EBX) {
          (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
        }
LAB_0081cdc0:
        ExceptionList = *(void **)(unaff_EBP + -0xc);
        return puVar9;
      }
      bVar2 = false;
      uVar4 = 0;
      while( true ) {
        if (*(int **)(unaff_EBP + -0x18) == unaff_EBX) {
          FUN_00878dfb();
        }
        uVar10 = FUN_0040cf4d();
        if (uVar10 <= uVar4) goto LAB_0081cd43;
        if (*(int *)(*(int *)(unaff_EBP + -0x30) + uVar4 * 4) == *(int *)(unaff_EBP + -0x48)) break;
        uVar4 = uVar4 + 1;
      }
      piVar5 = *(int **)(*(int *)(unaff_EBP + -0x34) + uVar4 * 4);
      piVar1 = *(int **)(unaff_EBP + -0x14);
      if (piVar1 != piVar5) {
        *(int **)(unaff_EBP + -0x14) = piVar5;
        FUN_004125cc();
        if (piVar1 != unaff_EBX) {
          (**(code **)(*piVar1 + 8))();
        }
      }
      bVar2 = true;
LAB_0081cd43:
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_00438c5b();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_00445a30();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (*(int **)(unaff_EBP + -0x18) != unaff_EBX) {
        (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
      }
      if (!bVar2) {
        piVar5 = *(int **)(unaff_EBP + -0x14);
        puVar9 = *(undefined4 **)(unaff_EBP + 8);
        *puVar9 = piVar5;
        if (piVar5 != unaff_EBX) {
          (**(code **)(*piVar5 + 4))();
          piVar5 = *(int **)(unaff_EBP + -0x14);
        }
        *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) | 1;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (*(int **)(unaff_EBP + -0x40) != unaff_EBX) {
          (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
          piVar5 = *(int **)(unaff_EBP + -0x14);
        }
        *(undefined1 *)(unaff_EBP + -4) = 1;
        goto LAB_0081cda6;
      }
      *(undefined1 **)(unaff_EBP + -0x20) = &stack0xfffffff4;
      pcStack_10 = s_MapLink_0096c478;
      uStack_14 = 0x81c804;
      FUN_00448a17();
      pcStack_10 = (char *)(unaff_EBP + -0x94);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      uStack_14 = 0x81c817;
      FUN_0040263d();
      uStack_14 = 0x81c81e;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      piVar5 = (int *)FUN_004032b4();
      *(int **)(unaff_EBP + -0x60) = piVar5;
      *(int **)(unaff_EBP + -0x18) = unaff_EBX;
      if (((piVar5 != unaff_EBX) && (iVar6 = FUN_00404b30(), iVar6 < (int)unaff_EBX)) &&
         (iVar6 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iVar6 = FUN_00402bc3();
      if (iVar6 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      if (*(int **)(unaff_EBP + -0x18) == unaff_EBX) {
        puVar9 = *(undefined4 **)(unaff_EBP + 8);
        *puVar9 = *(undefined4 *)(unaff_EBP + -0x14);
        FUN_004125cc();
        FUN_004027eb();
        FUN_004027eb();
        FUN_004027eb();
        FUN_004027eb();
        goto LAB_0081cdc0;
      }
      FUN_0040cf4d();
      *(int **)(unaff_EBP + -0x30) = unaff_EBX;
      FUN_0056a92f();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      if (*(int **)(unaff_EBP + -0x18) == unaff_EBX) {
        FUN_00878dfb();
      }
      FUN_0040cf4d();
      *(int **)(unaff_EBP + -0x34) = unaff_EBX;
      FUN_00445c8d();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      *(int **)(unaff_EBP + -0x20) = unaff_EBX;
    }
    FUN_0087a1b0();
    pcStack_10 = *(char **)(unaff_EBP + -0x20);
    uStack_14 = 0x81c90a;
    pcStack_10 = (char *)FUN_0048b981();
    *(undefined1 **)(unaff_EBP + -0x3c) = &stack0xfffffff4;
    uStack_14 = 0x81c916;
    FUN_00448a17();
    pcStack_10 = (char *)(unaff_EBP + -0xa4);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    uStack_14 = 0x81c929;
    FUN_0040263d();
    uStack_14 = 0x81c930;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    piVar5 = (int *)FUN_004032b4();
    *(int **)(unaff_EBP + -0x58) = piVar5;
    *(int **)(unaff_EBP + -0x24) = unaff_EBX;
    if (((piVar5 != unaff_EBX) && (iVar6 = FUN_00404b30(), iVar6 < (int)unaff_EBX)) &&
       (iVar6 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iVar6 = FUN_00402bc3();
    if (iVar6 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    if (*(int **)(unaff_EBP + -0x24) != unaff_EBX) {
      *(undefined1 **)(unaff_EBP + -0x3c) = &stack0xfffffff4;
      pcStack_10 = &DAT_0096c470;
      uStack_14 = 0x81c998;
      FUN_00448a17();
      pcStack_10 = (char *)(unaff_EBP + -0xc4);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      uStack_14 = 0x81c9ab;
      FUN_0040263d();
      uStack_14 = 0x81c9b2;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      piVar5 = (int *)FUN_004032b4();
      *(int **)(unaff_EBP + -100) = piVar5;
      *(int **)(unaff_EBP + -0x2c) = unaff_EBX;
      if (((piVar5 != unaff_EBX) && (iVar6 = FUN_00404b30(), iVar6 < (int)unaff_EBX)) &&
         (iVar6 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iVar6 = FUN_00402bc3();
      if (iVar6 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      if (*(int **)(unaff_EBP + -0x2c) != unaff_EBX) {
        *(int **)(unaff_EBP + -0x28) = unaff_EBX;
        FUN_00414edd();
        *(undefined1 **)(unaff_EBP + -0x3c) = &stack0xfffffff8;
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        pcStack_10 = (char *)0x81ca48;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        pcStack_10 = (char *)0x81ca5b;
        FUN_0040263d();
        pcStack_10 = (char *)0x81ca62;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        FUN_004343c5();
        *(int **)(unaff_EBP + -0x38) = unaff_EBX;
        FUN_00454081();
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        FUN_0045efbb();
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        if (*(int **)(unaff_EBP + -0x38) != unaff_EBX) {
          FUN_00434e38();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        iVar6 = FUN_00402bc3();
        if (iVar6 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        _strlen(&DAT_0096c450);
        FUN_0045efbb();
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        FUN_00403191();
        pcStack_10 = (char *)(unaff_EBP + -0x74);
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        uStack_14 = 0x81cb19;
        uVar7 = FUN_00449713();
        *(undefined4 **)(unaff_EBP + -0x3c) = &uStack_14;
        FUN_00448a17(uVar7);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        FUN_00405a1d();
        FUN_00402660();
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        FUN_00404a02(unaff_EBP + -0xd4);
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        uVar7 = FUN_004032b4();
        *(undefined4 *)(unaff_EBP + -0x50) = uVar7;
        iVar6 = *(int *)(unaff_EBP + -0x20);
        iVar8 = FUN_00404b30();
        if ((iVar8 < (int)unaff_EBX) && (iVar8 != -0x7fffbffe)) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        iVar8 = FUN_00402bc3();
        if (iVar8 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        iVar8 = FUN_00402bc3();
        if (iVar8 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        iVar8 = FUN_00402bc3();
        if (iVar8 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        iVar8 = *(int *)(unaff_EBP + -0x54);
        *(int **)(iVar6 * 4 + *(int *)(unaff_EBP + -0x30)) = unaff_EBX;
        uVar4 = 0;
        piVar5 = *(int **)(iVar8 + 8);
        *(undefined4 *)(unaff_EBP + -4) = 0x16;
        if (unaff_EBX < piVar5) {
          do {
            FUN_005d1241();
            FUN_00820ec7();
            *(undefined1 **)(unaff_EBP + -0x3c) = &stack0xfffffff8;
            pcStack_10 = (char *)0x81cc03;
            FUN_00424dbc();
            piVar5 = (int *)FUN_0081bfca();
            if (piVar5 != unaff_EBX) {
              *(undefined1 **)(unaff_EBP + -0x3c) = &stack0xfffffffc;
              if (*(int **)(unaff_EBP + -0x1c) != unaff_EBX) {
                (**(code **)(**(int **)(unaff_EBP + -0x1c) + 4))();
              }
              cVar3 = FUN_00820ed3();
              if (cVar3 != (char)unaff_EBX) {
                *(int *)(unaff_EBP + -0x48) = *(int *)(unaff_EBP + -0x48) + 1;
              }
              piVar5 = (int *)(*(int *)(unaff_EBP + -0x30) + *(int *)(unaff_EBP + -0x20) * 4);
              *piVar5 = *piVar5 + 1;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)(iVar8 + 8));
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        puVar9 = (undefined4 *)FUN_0081cc78();
        return puVar9;
      }
      FUN_004027eb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_004027eb();
  } while( true );
}


