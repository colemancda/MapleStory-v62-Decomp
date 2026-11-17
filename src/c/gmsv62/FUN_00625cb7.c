/* FUN_00625cb7 - 0x00625cb7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00625cb7(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  int unaff_EBP;
  undefined4 uVar5;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  int *piStack_70;
  
  FUN_00879bb8();
  piStack_70 = *(int **)(unaff_EBP + 8);
  puStack_78 = (undefined1 *)(extraout_ECX + 0x18);
  *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_74;
  FUN_00424dbc();
  puStack_78 = (undefined1 *)0x625ce2;
  FUN_00624903();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  do {
    if ((**(int **)(unaff_EBP + 8) == 0) ||
       (uVar3 = *(uint *)(**(int **)(unaff_EBP + 8) + -4), uVar3 <= *(uint *)(unaff_EBP + -0x10)))
    break;
    if (*(int *)(unaff_EBP + -0x10) != uVar3 - 1) {
      piStack_70 = (int *)0x69c;
      puStack_74 = (undefined1 *)0x625d19;
      iVar2 = FUN_004029b9();
      *(int *)(unaff_EBP + -0x28) = iVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        piStack_70 = (int *)0x625d2a;
        iVar2 = FUN_007e62e9();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
      *(uint *)(unaff_EBP + -0x30) = -(uint)(uVar3 != 0) & uVar3 - 8;
      piStack_70 = (int *)0x625d51;
      FUN_004c26c4();
      piStack_70 = (int *)0x0;
      puStack_74 = (undefined1 *)0x0;
      puStack_78 = *(undefined1 **)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -4) = 1;
      uVar4 = FUN_004726fc();
      *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_78;
      puStack_78 = extraout_ECX_00;
      FUN_00450368(uVar4);
      uVar4 = *(undefined4 *)(extraout_ECX + 0x10);
      uVar5 = 4;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_004c2677(4,uVar4);
      FUN_007eddac(uVar5,uVar4);
      piStack_70 = (int *)0x625d90;
      FUN_007ee0f6();
      piStack_70 = (int *)0x625d98;
      FUN_007e6e3c();
      piStack_70 = (int *)0x625da0;
      iVar2 = FUN_004bc6a2();
      if ((iVar2 == 1) &&
         (puVar1 = *(undefined1 **)(*(int *)(unaff_EBP + -0x30) + 0xd8), -1 < (int)puVar1)) {
        piStack_70 = (int *)0x0;
        puStack_74 = (undefined1 *)0x0;
        *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_78;
        FUN_00679e4e(&puStack_78,0xc41);
        iVar2 = unaff_EBP + -0x4c;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_0040263d(iVar2);
        FUN_004048a4(iVar2);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        puStack_78 = (undefined1 *)0x625df3;
        iVar2 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x20) = iVar2;
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        if (iVar2 != 0) {
          piStack_70 = (int *)(unaff_EBP + -0x20);
          puStack_74 = (undefined1 *)0x625e09;
          piStack_70 = (int *)FUN_00404b30();
          if (((int)piStack_70 < 0) && (piStack_70 != (int *)0x80004002)) {
            puStack_74 = (undefined1 *)0x625e1a;
            FUN_00878dfb();
          }
        }
        piStack_70 = (int *)(unaff_EBP + -0x4c);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        puStack_74 = (undefined1 *)0x625e27;
        piStack_70 = (int *)FUN_00402bc3();
        if ((int)piStack_70 < 0) {
          puStack_74 = (undefined1 *)0x625e32;
          FUN_00878dfb();
        }
        piStack_70 = (int *)0x625e3a;
        FUN_0087a1b0();
        piStack_70 = (int *)0x0;
        puStack_74 = (undefined1 *)0x0;
        puStack_78 = &stack0xffffff94;
        uVar4 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x10));
        *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_78;
        FUN_004033a1(uVar4);
        iVar2 = unaff_EBP + -0x5c;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        FUN_0040263d(iVar2);
        FUN_004048a4(iVar2);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        puStack_78 = (undefined1 *)0x625e75;
        iVar2 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x24) = iVar2;
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        if (iVar2 != 0) {
          piStack_70 = (int *)(unaff_EBP + -0x24);
          puStack_74 = (undefined1 *)0x625e8b;
          piStack_70 = (int *)FUN_00404b30();
          if (((int)piStack_70 < 0) && (piStack_70 != (int *)0x80004002)) {
            puStack_74 = (undefined1 *)0x625e9c;
            FUN_00878dfb();
          }
        }
        piStack_70 = (int *)(unaff_EBP + -0x5c);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        puStack_74 = (undefined1 *)0x625ea9;
        piStack_70 = (int *)FUN_00402bc3();
        if ((int)piStack_70 < 0) {
          puStack_74 = (undefined1 *)0x625eb4;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          piStack_70 = (int *)0x625ec5;
          FUN_0087a1b0();
          piStack_70 = (int *)&DAT_0097812c;
          puStack_78 = puVar1;
          puStack_74 = &stack0xffffff94;
          puStack_78 = (undefined1 *)FUN_00412335();
          *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_74;
          FUN_004033a1();
          puStack_78 = (undefined1 *)(unaff_EBP + -0x6c);
          *(undefined1 *)(unaff_EBP + -4) = 10;
          FUN_0040263d();
          puStack_74 = (undefined1 *)FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          puStack_78 = (undefined1 *)0x625f00;
          puStack_74 = (undefined1 *)FUN_004343c5();
          piStack_70 = (int *)0xffffffff;
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
          puStack_78 = (undefined1 *)0x625f10;
          FUN_00454081();
          piStack_70 = (int *)(unaff_EBP + -0x6c);
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          puStack_74 = (undefined1 *)0x625f1d;
          piStack_70 = (int *)FUN_00402bc3();
          if ((int)piStack_70 < 0) {
            puStack_74 = (undefined1 *)0x625f28;
            FUN_00878dfb();
          }
          if ((*(char **)(unaff_EBP + -0x14) == (char *)0x0) ||
             (**(char **)(unaff_EBP + -0x14) == '\0')) {
            *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
            *(undefined1 *)(unaff_EBP + -4) = 10;
            piStack_70 = (int *)0x625f46;
            FUN_00414ebb();
            piStack_70 = *(int **)(unaff_EBP + -0x18);
            *(undefined1 *)(unaff_EBP + -4) = 6;
            if (piStack_70 != (int *)0x0) {
              puStack_74 = (undefined1 *)0x625f57;
              (**(code **)(*piStack_70 + 8))();
            }
            piStack_70 = *(int **)(unaff_EBP + -0x1c);
            *(undefined1 *)(unaff_EBP + -4) = 1;
            if (piStack_70 != (int *)0x0) {
              puStack_74 = (undefined1 *)0x625f68;
              (**(code **)(*piStack_70 + 8))();
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            goto LAB_0062602a;
          }
          piStack_70 = (int *)0x69c;
          puStack_74 = (undefined1 *)0x62607f;
          iVar2 = FUN_004029b9();
          *(int *)(unaff_EBP + 8) = iVar2;
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            piStack_70 = (int *)0x626091;
            iVar2 = FUN_007e62e9();
          }
          uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
          *(uint *)(unaff_EBP + -0x28) = -(uint)(uVar3 != 0) & uVar3 - 8;
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          piStack_70 = (int *)0x6260b8;
          FUN_004c26c4();
          piStack_70 = (int *)0x0;
          puStack_74 = (undefined1 *)0x0;
          *(undefined1 ***)(unaff_EBP + 8) = &puStack_78;
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          FUN_00450368(unaff_EBP + -0x14);
          uVar4 = *(undefined4 *)(extraout_ECX + 0x10);
          uVar5 = 0;
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          FUN_004c2677(0,uVar4);
          FUN_007eddac(uVar5,uVar4);
          piStack_70 = (int *)0x0;
          puStack_74 = (undefined1 *)0x0;
          puStack_78 = (undefined1 *)0x6260ee;
          FUN_007edf11();
          piStack_70 = (int *)0x6260f6;
          FUN_007e6e3c();
          piStack_70 = (int *)0x6260fe;
          FUN_004bc6a2();
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          piStack_70 = (int *)0x62610a;
          FUN_004c26e1();
          *(undefined1 *)(unaff_EBP + -4) = 10;
          piStack_70 = (int *)0x626116;
          FUN_00414ebb();
          piStack_70 = *(int **)(unaff_EBP + -0x18);
          *(undefined1 *)(unaff_EBP + -4) = 6;
          if (piStack_70 != (int *)0x0) {
            puStack_74 = (undefined1 *)0x62612b;
            (**(code **)(*piStack_70 + 8))();
          }
        }
        piStack_70 = *(int **)(unaff_EBP + -0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (piStack_70 != (int *)0x0) {
          puStack_74 = (undefined1 *)0x626067;
          (**(code **)(*piStack_70 + 8))();
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_0062604a:
      piStack_70 = (int *)0x62604f;
      FUN_004c26e1();
      uVar4 = 0;
      goto LAB_0062613f;
    }
    if (*(int *)(extraout_ECX + 0x14) == 1) break;
    piStack_70 = (int *)0x69c;
    puStack_74 = (undefined1 *)0x625f8d;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x28) = iVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0x12;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      piStack_70 = (int *)0x625fa2;
      iVar2 = FUN_007e62e9();
    }
    uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
    *(uint *)(unaff_EBP + -0x38) = -(uint)(uVar3 != 0) & uVar3 - 8;
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    piStack_70 = (int *)0x625fcb;
    FUN_004c26c4();
    piStack_70 = (int *)0x1;
    puStack_74 = (undefined1 *)0x0;
    puStack_78 = *(undefined1 **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0x13;
    uVar4 = FUN_004726fc();
    *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_78;
    puStack_78 = extraout_ECX_01;
    FUN_00450368(uVar4);
    uVar4 = *(undefined4 *)(extraout_ECX + 0x10);
    uVar5 = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    FUN_004c2677(1,uVar4);
    FUN_007eddac(uVar5,uVar4);
    piStack_70 = (int *)0x62600c;
    FUN_007edf40();
    piStack_70 = (int *)0x626014;
    FUN_007e6e3c();
    piStack_70 = (int *)0x62601c;
    iVar2 = FUN_004bc6a2();
    if (iVar2 != 6) {
      if (iVar2 == 7) {
        piStack_70 = (int *)0x626137;
        FUN_006258c8();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      goto LAB_0062604a;
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_0062602a:
    piStack_70 = (int *)0x62602f;
    FUN_004c26e1();
  } while (-1 < *(int *)(unaff_EBP + -0x10));
  uVar4 = 1;
LAB_0062613f:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


