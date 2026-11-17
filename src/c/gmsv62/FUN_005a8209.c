/* FUN_005a8209 - 0x005a8209 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_005a8209(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int unaff_EBP;
  int *piStack_28;
  int *piStack_24;
  int *piStack_20;
  int *piStack_1c;
  int *piStack_18;
  
  FUN_00879bb8();
  uVar8 = 0;
  piStack_18 = (int *)0x0;
  piStack_1c = (int *)(unaff_EBP + 8);
  piStack_20 = (int *)0x5a822a;
  piVar2 = (int *)FUN_005aa390();
  if (piVar2 == (int *)0x0) {
LAB_005a8244:
    uVar8 = 0;
  }
  else {
    if (*(uint *)(unaff_EBP + 0xc) != 0xffffffff) {
      if ((piVar2[1] == 0) || (*(uint *)(piVar2[1] + -4) <= *(uint *)(unaff_EBP + 0xc)))
      goto LAB_005a8244;
      if (*(int *)(piVar2[1] + 8 + *piVar2 * 0xc) == 0) {
        piStack_18 = (int *)0x80004003;
        piStack_1c = (int *)0x5a8267;
        FUN_00878dfb();
      }
      piStack_18 = (int *)(unaff_EBP + -0x10);
      piStack_1c = (int *)0x5a8272;
      piVar3 = (int *)FUN_004113e5();
      iVar5 = *piVar3;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar5 == 0) {
        piStack_18 = (int *)0x80004003;
        piStack_1c = (int *)0x5a8285;
        FUN_00878dfb();
      }
      piVar3 = (int *)*piVar3;
      piStack_18 = (int *)0x0;
      piStack_1c = (int *)0x0;
      piStack_24 = (int *)0x5a828f;
      piStack_20 = piVar3;
      piVar4 = (int *)(**(code **)(*piVar3 + 0x40))();
      if ((int)piVar4 < 0) {
        piStack_18 = (int *)&DAT_00963d08;
        piStack_24 = (int *)0x5a829f;
        piStack_20 = piVar4;
        piStack_1c = piVar3;
        FUN_00878e09();
      }
      piStack_18 = *(int **)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piStack_18 != (int *)0x0) {
        piStack_1c = (int *)0x5a82b0;
        (**(code **)(*piStack_18 + 8))();
      }
      *piVar2 = *(int *)(unaff_EBP + 0xc);
    }
    iVar5 = piVar2[1] + *piVar2 * 0xc;
    *(int *)(unaff_EBP + 0xc) = iVar5;
    piVar2 = (int *)(iVar5 + 8);
    if (*piVar2 == 0) {
      piStack_18 = (int *)0x80004003;
      piStack_1c = (int *)0x5a82d4;
      FUN_00878dfb();
    }
    piStack_18 = (int *)(unaff_EBP + -0x14);
    piStack_1c = (int *)0x5a82df;
    piVar3 = (int *)FUN_004113e5();
    iVar5 = *piVar3;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if (iVar5 == 0) {
      piStack_18 = (int *)0x80004003;
      piStack_1c = (int *)0x5a82f6;
      FUN_00878dfb();
    }
    piVar3 = (int *)*piVar3;
    piStack_18 = (int *)0x0;
    piStack_1c = (int *)0xff;
    piStack_24 = (int *)0x5a8304;
    piStack_20 = piVar3;
    iVar5 = (**(code **)(*piVar3 + 0x40))();
    if (iVar5 < 0) {
      piStack_24 = (int *)&DAT_00963d08;
      piStack_28 = piVar3;
      FUN_00878e09(iVar5);
    }
    piStack_24 = *(int **)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_24 != (int *)0x0) {
      piStack_28 = (int *)0x5a8325;
      (**(code **)(*piStack_24 + 8))();
    }
    piVar3 = *(int **)(*(int *)(unaff_EBP + 0xc) + 4);
    if ((piVar3 == (int *)0x0) || (iVar5 = *piVar3, iVar5 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(iVar5 + -4) >> 1;
    }
    if (uVar6 != 0) {
      if (*piVar2 == 0) {
        piStack_24 = (int *)0x80004003;
        piStack_28 = (int *)0x5a8350;
        FUN_00878dfb();
      }
      iVar5 = *piVar2;
      *(int *)(unaff_EBP + -0x10) = iVar5;
      if (iVar5 == 0) {
        piStack_24 = (int *)0x80004003;
        piStack_28 = (int *)0x5a8363;
        FUN_00878dfb();
      }
      puVar1 = *(undefined4 **)(*(int *)(unaff_EBP + 0xc) + 4);
      if (puVar1 != (undefined4 *)0x0) {
        uVar8 = *puVar1;
      }
      piStack_24 = (int *)0x5a8379;
      piStack_24 = (int *)FUN_00404abb();
      piStack_28 = (int *)0x5a8381;
      piStack_28 = (int *)FUN_00404a94();
      uVar7 = FUN_007d3c48();
      FUN_007d4970(uVar8,uVar7);
    }
    piStack_24 = (int *)**(undefined4 **)(unaff_EBP + 0xc);
    *(int ***)(unaff_EBP + 0xc) = &piStack_28;
    FUN_0041160e(piVar2);
    FUN_005a8715();
    uVar8 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar8;
}


