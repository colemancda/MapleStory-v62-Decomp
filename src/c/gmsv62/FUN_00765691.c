/* FUN_00765691 - 0x00765691 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00765691(void)

{
  int iVar1;
  BOOL BVar2;
  uint uVar3;
  undefined4 uVar4;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if ((extraout_ECX[0x185] != 1) && (extraout_ECX[0x185] != 2)) {
LAB_007659b7:
    FUN_0074d6fb();
LAB_007659c2:
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return 0;
  }
  iVar1 = 0xae;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xae;
  do {
    *(int *)(unaff_EBP + -0x30) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0x93;
    *(undefined4 *)(unaff_EBP + -0x34) = 0xf7;
    *(int *)(unaff_EBP + -0x38) = iVar1 + -0xd;
    BVar2 = PtInRect((RECT *)(unaff_EBP + -0x3c),*(POINT *)(unaff_EBP + 8));
    if (BVar2 != 0) {
      uVar3 = *(int *)(extraout_ECX[0x176] + 0x38) + *(int *)(unaff_EBP + -0x20);
      if (extraout_ECX[0x185] == 1) {
        if ((extraout_ECX[extraout_ECX[0x18e] + 0x17d] == 0) ||
           (*(uint *)(extraout_ECX[extraout_ECX[0x18e] + 0x17d] + -4) <= uVar3)) goto LAB_007659c2;
        FUN_0045a1d8();
        *(undefined4 *)(unaff_EBP + -4) = 0;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        uVar4 = FUN_00449713();
        *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffff9c;
        FUN_00448a17(uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        FUN_007d4a9a(unaff_EBP + -0x24,1);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_0044974c();
        uVar3 = FUN_00448ebb();
        *(bool *)(unaff_EBP + -0xd) = 100 < uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          FUN_00878dfb();
        }
        if (*(char *)(unaff_EBP + -0xd) != '\0') {
          FUN_00679d22();
          *(undefined4 *)(unaff_EBP + -0x20) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 6;
          FUN_00434e21(unaff_EBP + -0x20);
          (**(code **)(*extraout_ECX + 0x30))();
          iVar1 = (**(code **)(*extraout_ECX + 0x2c))();
          FUN_0074d755(iVar1 + *(int *)(unaff_EBP + 8));
          *(undefined1 *)(unaff_EBP + -4) = 5;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0;
          FUN_00414ebb();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_00765940:
          FUN_00414ebb();
          goto LAB_007659c2;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
      else {
        if ((extraout_ECX[0x180] == 0) || (*(uint *)(extraout_ECX[0x180] + -4) <= uVar3))
        goto LAB_007659c2;
        FUN_0045a1d8();
        *(undefined4 *)(unaff_EBP + -4) = 7;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
        iVar1 = FUN_00402e32();
        if (iVar1 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        uVar4 = FUN_00449713();
        *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffff9c;
        FUN_00448a17(uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        FUN_007d4a9a(unaff_EBP + -0x28,1);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_0044974c();
        uVar3 = FUN_00448ebb();
        *(bool *)(unaff_EBP + -0xd) = 100 < uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          FUN_00878dfb();
        }
        if (*(char *)(unaff_EBP + -0xd) != '\0') {
          FUN_00679d22();
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          FUN_00434e21(unaff_EBP + -0x14);
          (**(code **)(*extraout_ECX + 0x30))();
          iVar1 = (**(code **)(*extraout_ECX + 0x2c))();
          FUN_0074d755(iVar1 + *(int *)(unaff_EBP + 8));
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 7;
          FUN_00414ebb();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          goto LAB_00765940;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
      FUN_00414ebb();
    }
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x26;
    if (0x11f < *(int *)(unaff_EBP + -0x14)) goto LAB_007659b7;
    iVar1 = *(int *)(unaff_EBP + -0x14);
  } while( true );
}


