/* FUN_006e2dea - 0x006e2dea in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006e2dea(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 8);
  if (-1 < iVar2) {
    iVar3 = 0;
    if (extraout_ECX[0x11] != 0) {
      iVar3 = *(int *)(extraout_ECX[0x11] + -4);
    }
    if (iVar2 < iVar3) {
      *(int *)(unaff_EBP + -0x28) = iVar2 * 8;
      iVar3 = *(int *)(iVar2 * 8 + extraout_ECX[0x11] + 4);
      *(int *)(unaff_EBP + -0x2c) = iVar3;
      if (iVar3 != 0) {
        InterlockedIncrement((LONG *)(iVar3 + 4));
      }
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if ((*(int *)(*(int *)(unaff_EBP + -0x2c) + 0xc) != 0) && (iVar2 != extraout_ECX[0xd])) {
        *(undefined4 *)(*(int *)(extraout_ECX[0x11] + 4 + extraout_ECX[0xd] * 8) + 0x10) = 1;
        if (-1 < extraout_ECX[0xe]) {
          *(undefined4 *)(*(int *)(extraout_ECX[0x11] + 4 + extraout_ECX[0xe] * 8) + 0x10) = 1;
        }
        VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
        iVar2 = FUN_00402e32(unaff_EBP + -0x40,&DAT_00980690);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        iVar2 = extraout_ECX[0xf];
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (iVar2 == 0) {
          FUN_00878dfb(0x80004003);
        }
        FUN_00425067(unaff_EBP + -0x10,unaff_EBP + -0x40);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x40);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        iVar2 = *(int *)(extraout_ECX[0x11] + 4 + extraout_ECX[0xd] * 8);
        iVar3 = FUN_006e3164(extraout_ECX[0xd]);
        piVar1 = (int *)(iVar3 * 0x10 + 0x14 + iVar2);
        *(int *)(unaff_EBP + -0x18) = (piVar1[2] - *piVar1) + 1;
        *(int *)(unaff_EBP + -0x14) = (piVar1[3] - piVar1[1]) + 1;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
        iVar2 = FUN_00402e32(unaff_EBP + -0x50,&DAT_00980690);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        *(int *)(unaff_EBP + -0x20) = extraout_ECX[0x10];
        piVar4 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        if (piVar4 == (int *)0x0) {
          FUN_00878dfb(0x80004003);
          piVar4 = *(int **)(unaff_EBP + -0x10);
        }
        iVar2 = piVar1[1];
        *(int *)(unaff_EBP + -0x1c) = *piVar1;
        iVar3 = *piVar4;
        *(int **)(unaff_EBP + -0x24) = piVar4;
        iVar2 = (**(code **)(iVar3 + 0x84))
                          (piVar4,*(undefined4 *)(unaff_EBP + -0x1c),iVar2,
                           *(undefined4 *)(unaff_EBP + -0x20),0xffffffff,
                           *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14),
                           *(undefined4 *)(unaff_EBP + -0x1c),iVar2,
                           *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14),
                           *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                           *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963cc8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x50);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        iVar2 = *(int *)(unaff_EBP + -0x2c);
        iVar3 = FUN_006e3164(*(undefined4 *)(unaff_EBP + 8));
        piVar1 = (int *)(iVar3 * 0x10 + 0x14 + iVar2);
        *(int *)(unaff_EBP + -0x18) = (piVar1[2] - *piVar1) + 1;
        *(int *)(unaff_EBP + -0x1c) = (piVar1[3] - piVar1[1]) + 1;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
        iVar2 = FUN_00402e32(unaff_EBP + -0x50,&DAT_00980690);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        *(int *)(unaff_EBP + -0x24) = extraout_ECX[0x10];
        piVar4 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (piVar4 == (int *)0x0) {
          FUN_00878dfb(0x80004003);
          piVar4 = *(int **)(unaff_EBP + -0x10);
        }
        iVar2 = piVar1[1];
        *(int *)(unaff_EBP + -0x14) = *piVar1;
        iVar3 = *piVar4;
        *(int **)(unaff_EBP + -0x20) = piVar4;
        iVar2 = (**(code **)(iVar3 + 0x84))
                          (piVar4,*(undefined4 *)(unaff_EBP + -0x14),iVar2,
                           *(undefined4 *)(unaff_EBP + -0x24),0xffffffff,
                           *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x1c),
                           *(undefined4 *)(unaff_EBP + -0x14),iVar2,
                           *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x1c),
                           *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                           *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x20),&DAT_00963cc8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x50);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        (**(code **)(*extraout_ECX + 0x24))(extraout_ECX[0xd],0);
        iVar2 = *(int *)(unaff_EBP + 8);
        iVar3 = *(int *)(unaff_EBP + -0x28);
        extraout_ECX[0xd] = iVar2;
        extraout_ECX[0xe] = iVar2;
        *(undefined4 *)(*(int *)(iVar3 + 4 + extraout_ECX[0x11]) + 0x10) = 1;
        (**(code **)(*extraout_ECX + 0x24))(extraout_ECX[0xd],0);
        FUN_004b3daf();
        (**(code **)(*(int *)extraout_ECX[9] + 0x1c))(extraout_ECX[5],500,extraout_ECX[0xd]);
        piVar1 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x2c) != 0) {
        FUN_006eadbe(0);
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


