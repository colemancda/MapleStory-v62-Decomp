/* FUN_00699f78 - 0x00699f78 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00699f78(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_a4;
  int *piStack_a0;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x28) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  piStack_a0 = (int *)0x0;
  *(int **)(unaff_EBP + -0x1c) = &iStack_a4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00679e4e(&iStack_a4,0x736);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = unaff_EBP + -0x78;
  FUN_0040263d(iVar2);
  FUN_004048a4(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_a4 = 0x699fd5;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x48) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  if (iVar2 != 0) {
    piStack_a0 = (int *)0x699feb;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      piStack_a0 = (int *)0x699ffc;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_a0 = (int *)0x69a009;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_a0 = (int *)0x69a014;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iVar2 = *(int *)(extraout_ECX + 0x3d8);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar2 == 2) {
    piStack_a0 = (int *)0x0;
    iStack_a4 = 0x69a034;
    FUN_004031b7();
    iVar2 = *(int *)(unaff_EBP + -0x28);
    iVar4 = *(int *)(iVar2 + 0x3e4);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (iVar4 == 0) {
      piStack_a0 = (int *)0x69a055;
      FUN_00878dfb();
    }
    piStack_a0 = (int *)(unaff_EBP + -0x18);
    iStack_a4 = 0x69a066;
    puVar3 = (undefined4 *)FUN_00425067();
    piStack_a0 = (int *)0x69a070;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x20),
               (IBinding *)*puVar3);
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    piStack_a0 = (int *)0x69a085;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_a0 = (int *)0x69a090;
      FUN_00878dfb();
    }
    if (2 < *(int *)(iVar2 + 0x3d4)) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      *(int *)(unaff_EBP + -0x18) = iVar2 + 0x7c;
      while( true ) {
        iVar4 = *(int *)(unaff_EBP + -0x10) / 2;
        if (*(int *)(iVar2 + 0x80 + iVar4 * 0x18) == **(int **)(unaff_EBP + -0x18)) {
          ppuVar5 = &PTR_LAB_0096a67c;
          if (*(int *)(unaff_EBP + -0x10) % 2 == 0) {
            ppuVar5 = (undefined **)&DAT_00964d90;
          }
          piStack_a0 = (int *)0x0;
          iStack_a4 = 2;
          *(int **)(unaff_EBP + -0x1c) = &iStack_a4;
          FUN_004033a1(ppuVar5);
          iVar2 = unaff_EBP + -0x68;
          *(undefined1 *)(unaff_EBP + -4) = 5;
          FUN_0040263d(iVar2);
          FUN_004048a4(iVar2);
          *(undefined1 *)(unaff_EBP + -4) = 8;
          iStack_a4 = 0x69a119;
          uVar6 = FUN_004032b4();
          *(undefined4 *)(unaff_EBP + -0x34) = uVar6;
          piStack_a0 = (int *)0x69a128;
          iVar2 = FUN_0041a581();
          if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
            piStack_a0 = (int *)0x69a139;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 5;
          piStack_a0 = (int *)0x69a146;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_a0 = (int *)0x69a151;
            FUN_00878dfb();
          }
          piStack_a0 = (int *)0x69a15e;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 9;
          if (*(int *)(unaff_EBP + -0x14) == 0) {
            piStack_a0 = (int *)0x69a16d;
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + -0x20) == 0) {
            piStack_a0 = (int *)0x69a178;
            FUN_00878dfb();
          }
          piVar1 = *(int **)(unaff_EBP + -0x20);
          *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x14);
          iVar2 = FUN_0040eea9();
          iStack_a4 = *(int *)(unaff_EBP + -0x40);
          piStack_a0 = *(int **)(unaff_EBP + -0x3c);
          iVar2 = (**(code **)(*piVar1 + 0x80))
                            (piVar1,(iVar4 * 0xaf - iVar2) + 0x52,0x139,
                             *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x44));
          if (iVar2 < 0) {
            iStack_a4 = iVar2;
            piStack_a0 = piVar1;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 5;
          piStack_a0 = (int *)0x69a1ce;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_a0 = (int *)0x69a1d9;
            FUN_00878dfb();
          }
        }
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x18;
        if (7 < *(int *)(unaff_EBP + -0x10)) break;
        iVar2 = *(int *)(unaff_EBP + -0x28);
      }
      iVar2 = *(int *)(unaff_EBP + -0x28);
    }
    if (3 < *(int *)(iVar2 + 0x3d4)) {
      iVar2 = 0;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      do {
        if (*(int *)(*(int *)(unaff_EBP + -0x28) + 0x84 + (iVar2 / 2) * 0x18) ==
            *(int *)(*(int *)(unaff_EBP + -0x28) + 0x80 + iVar2 * 0x18)) {
          if (iVar2 == 0) {
            piStack_a0 = (int *)0x0;
            *(int **)(unaff_EBP + -0x1c) = &iStack_a4;
            iStack_a4 = iVar2;
            FUN_004033a1(&DAT_0096a65c);
            iVar4 = unaff_EBP + -0x58;
            *(undefined1 *)(unaff_EBP + -4) = 5;
            FUN_0040263d(iVar4);
            FUN_004048a4(iVar4);
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            iStack_a4 = 0x69a399;
            uVar6 = FUN_004032b4();
            *(undefined4 *)(unaff_EBP + -0x2c) = uVar6;
            piStack_a0 = (int *)0x69a3a8;
            iVar4 = FUN_0041a581();
            if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
              piStack_a0 = (int *)0x69a3b6;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 5;
LAB_0069a3bd:
            piStack_a0 = (int *)0x69a3c3;
            iVar4 = FUN_00402bc3();
            if (iVar4 < 0) {
              piStack_a0 = (int *)0x69a3ce;
              FUN_00878dfb();
            }
          }
          else {
            if (iVar2 + -1 == 0) {
              piStack_a0 = (int *)0x0;
              *(int **)(unaff_EBP + -0x1c) = &iStack_a4;
              iStack_a4 = iVar2 + -1;
              FUN_004033a1(&DAT_0096a664);
              iVar4 = unaff_EBP + -0x88;
              *(undefined1 *)(unaff_EBP + -4) = 5;
              FUN_0040263d(iVar4);
              FUN_004048a4(iVar4);
              *(undefined1 *)(unaff_EBP + -4) = 0xd;
              iStack_a4 = 0x69a33c;
              uVar6 = FUN_004032b4();
              *(undefined4 *)(unaff_EBP + -0x18) = uVar6;
              piStack_a0 = (int *)0x69a34b;
              iVar4 = FUN_0041a581();
              if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
                piStack_a0 = (int *)0x69a359;
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 5;
              goto LAB_0069a3bd;
            }
            if (iVar2 + -2 == 0) {
              piStack_a0 = (int *)0x0;
              *(int **)(unaff_EBP + -0x1c) = &iStack_a4;
              iStack_a4 = iVar2 + -2;
              FUN_004033a1(&DAT_0096a66c);
              iVar4 = unaff_EBP + -0x98;
              *(undefined1 *)(unaff_EBP + -4) = 5;
              FUN_0040263d(iVar4);
              FUN_004048a4(iVar4);
              *(undefined1 *)(unaff_EBP + -4) = 0xf;
              iStack_a4 = 0x69a2d9;
              uVar6 = FUN_004032b4();
              *(undefined4 *)(unaff_EBP + -0x34) = uVar6;
              piStack_a0 = (int *)0x69a2e8;
              iVar4 = FUN_0041a581();
              if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
                piStack_a0 = (int *)0x69a2f6;
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 5;
              goto LAB_0069a3bd;
            }
            if (iVar2 + -3 == 0) {
              piStack_a0 = (int *)0x0;
              *(int **)(unaff_EBP + -0x1c) = &iStack_a4;
              iStack_a4 = iVar2 + -3;
              FUN_004033a1(&DAT_0096a674);
              iVar4 = unaff_EBP + -0x68;
              *(undefined1 *)(unaff_EBP + -4) = 5;
              FUN_0040263d(iVar4);
              FUN_004048a4(iVar4);
              *(undefined1 *)(unaff_EBP + -4) = 0x11;
              iStack_a4 = 0x69a279;
              uVar6 = FUN_004032b4();
              *(undefined4 *)(unaff_EBP + -0x30) = uVar6;
              piStack_a0 = (int *)0x69a288;
              iVar4 = FUN_0041a581();
              if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
                piStack_a0 = (int *)0x69a296;
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 5;
              goto LAB_0069a3bd;
            }
          }
          piStack_a0 = (int *)0x69a3d8;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
          piStack_a0 = (int *)(unaff_EBP + -0x44);
          iStack_a4 = 0x69a3e6;
          iVar4 = FUN_00402e32();
          if (iVar4 < 0) {
            piStack_a0 = (int *)0x69a3f2;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          if (*(int *)(unaff_EBP + -0x14) == 0) {
            piStack_a0 = (int *)0x69a405;
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + -0x20) == 0) {
            piStack_a0 = (int *)0x69a414;
            FUN_00878dfb();
          }
          piVar1 = *(int **)(unaff_EBP + -0x20);
          *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x14);
          iVar4 = FUN_0040eea9();
          iStack_a4 = *(int *)(unaff_EBP + -0x40);
          piStack_a0 = *(int **)(unaff_EBP + -0x3c);
          iVar2 = (**(code **)(*piVar1 + 0x80))
                            (piVar1,((iVar2 / 2) * 0xd7 - iVar4) + 0xec,0xa8,
                             *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x44));
          if (iVar2 < 0) {
            iStack_a4 = iVar2;
            piStack_a0 = piVar1;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 5;
          piStack_a0 = (int *)0x69a46d;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_a0 = (int *)0x69a478;
            FUN_00878dfb();
          }
        }
        iVar2 = *(int *)(unaff_EBP + -0x10) + 1;
        *(int *)(unaff_EBP + -0x10) = iVar2;
      } while (iVar2 < 4);
    }
    iVar2 = *(int *)(unaff_EBP + -0x28);
    if (4 < *(int *)(iVar2 + 0x3d4)) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      *(int *)(unaff_EBP + -0x18) = iVar2 + 0x84;
      while( true ) {
        if (*(int *)(iVar2 + 0x88 + (*(int *)(unaff_EBP + -0x10) / 2) * 0x18) ==
            **(int **)(unaff_EBP + -0x18)) {
          ppuVar5 = &PTR_LAB_0096a654;
          if (*(int *)(unaff_EBP + -0x10) % 2 == 0) {
            ppuVar5 = (undefined **)&DAT_00964304;
          }
          piStack_a0 = (int *)0x0;
          iStack_a4 = 2;
          *(int **)(unaff_EBP + -0x2c) = &iStack_a4;
          FUN_004033a1(ppuVar5);
          iVar2 = unaff_EBP + -0x58;
          *(undefined1 *)(unaff_EBP + -4) = 5;
          FUN_0040263d(iVar2);
          FUN_004048a4(iVar2);
          *(undefined1 *)(unaff_EBP + -4) = 0x14;
          iStack_a4 = 0x69a511;
          uVar6 = FUN_004032b4();
          *(undefined4 *)(unaff_EBP + -0x1c) = uVar6;
          piStack_a0 = (int *)0x69a520;
          iVar2 = FUN_0041a581();
          if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
            piStack_a0 = (int *)0x69a531;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 5;
          piStack_a0 = (int *)0x69a53e;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_a0 = (int *)0x69a549;
            FUN_00878dfb();
          }
          piStack_a0 = (int *)0x69a553;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
          piStack_a0 = (int *)(unaff_EBP + -0x44);
          iStack_a4 = 0x69a561;
          iVar2 = FUN_00402e32();
          if (iVar2 < 0) {
            piStack_a0 = (int *)0x69a56d;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          if (*(int *)(unaff_EBP + -0x14) == 0) {
            piStack_a0 = (int *)0x69a580;
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + -0x20) == 0) {
            piStack_a0 = (int *)0x69a58f;
            FUN_00878dfb();
          }
          piVar1 = *(int **)(unaff_EBP + -0x20);
          *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x14);
          iVar2 = FUN_0040eea9();
          iStack_a4 = *(int *)(unaff_EBP + -0x40);
          piStack_a0 = *(int **)(unaff_EBP + -0x3c);
          iVar2 = (**(code **)(*piVar1 + 0x80))
                            (piVar1,0x158 - iVar2,0x6a,*(undefined4 *)(unaff_EBP + -0x2c),
                             *(undefined4 *)(unaff_EBP + -0x44));
          if (iVar2 < 0) {
            iStack_a4 = iVar2;
            piStack_a0 = piVar1;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 5;
          piStack_a0 = (int *)0x69a5dc;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_a0 = (int *)0x69a5e7;
            FUN_00878dfb();
          }
        }
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x18;
        if (1 < *(int *)(unaff_EBP + -0x10)) break;
        iVar2 = *(int *)(unaff_EBP + -0x28);
      }
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    piStack_a0 = (int *)0x69a609;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
    piStack_a0 = (int *)0x69a61a;
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    piStack_a0 = (int *)0x69a62b;
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


