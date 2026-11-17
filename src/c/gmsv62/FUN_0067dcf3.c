/* FUN_0067dcf3 - 0x0067dcf3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0067dcf3(void)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  cVar3 = FUN_0042452b();
  if ((((cVar3 == '\0') || (cVar3 == '\x03')) || (cVar3 == '\x04')) ||
     ((cVar3 == '\x02' &&
      ((*(int *)(extraout_ECX + 0xa0) == 0x2f785a || (*(int *)(extraout_ECX + 0xa0) == 0x30fefa)))))
     ) {
    uVar7 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0xd8) = uVar7;
    FUN_0067b45c();
LAB_0067dd7a:
    FUN_0067f3c2();
  }
  else if ((*(int *)(extraout_ECX + 0xa0) == 0x4f837a) &&
          (iVar4 = FUN_00413367(extraout_ECX + 0xd0,*(undefined4 *)(extraout_ECX + 0xd8)),
          -1 < iVar4)) goto LAB_0067dd7a;
  FUN_005d6574(0,-(uint)(extraout_ECX != 0) & extraout_ECX + 4U);
  iVar4 = FUN_0064d61f(*(undefined4 *)(extraout_ECX + 0xa0));
  iVar5 = (**(code **)(**(int **)(extraout_ECX + 0x9c) + 8))();
  if ((iVar5 == 0) || (iVar4 == 0)) goto LAB_0067e073;
  if (cVar3 == '\0') {
    puVar6 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x1c,0xec8);
    uVar7 = *puVar6;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    uVar1 = *(undefined4 *)(iVar4 + 4);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uVar7 = FUN_00434e21(unaff_EBP + -0x14,uVar7,uVar1,0xc);
    FUN_00471102(uVar7);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + -0x14) + -0xc);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar4 = *(int *)(unaff_EBP + -0x1c);
LAB_0067de87:
    if (iVar4 != 0) {
      FUN_00434e38(iVar4 + -0xc);
    }
  }
  else if (cVar3 == '\x03') {
    puVar6 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0xec9);
    uVar7 = *puVar6;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    uVar1 = *(undefined4 *)(iVar4 + 4);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uVar7 = FUN_00434e21(unaff_EBP + -0x10,uVar7,uVar1,0xc);
    FUN_00471102(uVar7);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + -0x10) + -0xc);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar4 = *(int *)(unaff_EBP + -0x18);
    goto LAB_0067de87;
  }
  iVar4 = *(int *)(extraout_ECX + 0x90);
  if (iVar4 != 0) {
    while( true ) {
      iVar5 = *(int *)((-(uint)(iVar4 != 0) & iVar4 - 0x10U) + 4);
      iVar2 = *(int *)(iVar4 + 0x1c);
      *(uint *)(unaff_EBP + -0x14) = -(uint)(iVar5 != 0) & iVar5 + 0x10U;
      if (iVar2 != 0) {
        *(undefined4 *)(unaff_EBP + 8) = 0;
        *(undefined4 *)(unaff_EBP + -4) = 4;
        puVar6 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x1c,0x3b1);
        uVar7 = *puVar6;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_00437222(uVar7,unaff_EBP + 8,0);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        if (*(int *)(unaff_EBP + -0x1c) != 0) {
          FUN_00403384(*(int *)(unaff_EBP + -0x1c) + -0xc);
        }
        FUN_0040ee87(*(undefined4 *)(unaff_EBP + 8),1);
        iVar5 = *(int *)(iVar4 + 0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (iVar5 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar8 = (int *)FUN_004113e5(unaff_EBP + -0x10);
        iVar5 = *piVar8;
        *(undefined1 *)(unaff_EBP + -4) = 7;
        if (iVar5 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar8 = (int *)*piVar8;
        iVar5 = *piVar8;
        *(int **)(unaff_EBP + -0x18) = piVar8;
        iVar5 = (**(code **)(iVar5 + 100))
                          (piVar8,*(undefined4 *)(unaff_EBP + -0x2c),
                           *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                           *(undefined4 *)(unaff_EBP + -0x20));
        if (iVar5 < 0) {
          FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
        }
        FUN_004125d9();
        *(undefined1 *)(unaff_EBP + -4) = 4;
        iVar5 = FUN_00402bc3(unaff_EBP + -0x2c);
        if (iVar5 < 0) {
          FUN_00878dfb(iVar5);
        }
        FUN_00403191(&DAT_00980690);
        iVar4 = *(int *)(iVar4 + 0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (iVar4 == 0) {
          FUN_00878dfb(0x80004003);
        }
        iVar4 = FUN_0042a378();
        FUN_004031b7(iVar4 + 200,3);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (*(int *)(unaff_EBP + 8) == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar8 = *(int **)(unaff_EBP + 8);
        iVar4 = (**(code **)(*piVar8 + 0x90))
                          (piVar8,0xffffff01,0,*(undefined4 *)(unaff_EBP + -0x3c),
                           *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                           *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x4c),
                           *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                           *(undefined4 *)(unaff_EBP + -0x40));
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,piVar8,&DAT_00963de8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x3c);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 4;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x4c);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        piVar8 = *(int **)(unaff_EBP + 8);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 8))(piVar8);
        }
      }
      if (*(int *)(unaff_EBP + -0x14) == 0) break;
      iVar4 = *(int *)(unaff_EBP + -0x14);
    }
  }
LAB_0067e073:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


