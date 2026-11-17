/* FUN_0074b48d - 0x0074b48d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined4 * FUN_0074b48d(void)

{
  short *psVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int *piVar5;
  int extraout_ECX_00;
  int unaff_EBP;
  undefined1 *puStack_88;
  undefined1 *puStack_84;
  int iStack_80;
  int iStack_7c;
  int *piStack_78;
  
  FUN_00879bb8();
  piStack_78 = *(int **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iStack_7c = 0x74b4aa;
  iVar2 = FUN_0044dddc();
  if (iVar2 == 0) {
    puVar4 = *(undefined4 **)(unaff_EBP + 8);
    *puVar4 = 0;
    goto LAB_0074b76a;
  }
  piStack_78 = *(int **)(unaff_EBP + 0xc);
  iStack_7c = unaff_EBP + -0x18;
  iStack_80 = 0x74b4c5;
  FUN_0054e2c6();
  psVar1 = *(short **)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if ((psVar1 == (short *)0x0) || (*psVar1 == 0)) {
    puVar4 = *(undefined4 **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *puVar4 = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 1;
    if (psVar1 != (short *)0x0) {
      piStack_78 = (int *)(psVar1 + -6);
      iStack_7c = 0x74b4f6;
      FUN_00403384();
    }
    goto LAB_0074b76a;
  }
  piStack_78 = &DAT_00980690;
  iStack_7c = 0x74b50a;
  FUN_00403191();
  piStack_78 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_7c = 0x74b517;
  FUN_00403191();
  piStack_78 = (int *)0x0;
  iStack_7c = 0;
  iStack_80 = unaff_EBP + -0x44;
  puStack_84 = (undefined1 *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_88 = (undefined1 *)0x74b52d;
  uVar3 = FUN_00411641();
  *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_88;
  FUN_004033a1(uVar3);
  iVar2 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_80 = 0x74b55f;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + 0xc) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar2 != 0) {
    piStack_78 = (int *)(unaff_EBP + 0xc);
    iStack_7c = 0x74b575;
    piStack_78 = (int *)FUN_00404b30();
    if (((int)piStack_78 < 0) && (piStack_78 != (int *)0x80004002)) {
      iStack_7c = 0x74b586;
      FUN_00878dfb();
    }
  }
  piStack_78 = (int *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_7c = 0x74b593;
  piStack_78 = (int *)FUN_00402bc3();
  if ((int)piStack_78 < 0) {
    iStack_7c = 0x74b59e;
    FUN_00878dfb();
  }
  piStack_78 = (int *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_7c = 0x74b5ab;
  piStack_78 = (int *)FUN_00402bc3();
  if ((int)piStack_78 < 0) {
    iStack_7c = 0x74b5b6;
    FUN_00878dfb();
  }
  piStack_78 = (int *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_7c = 0x74b5c3;
  iVar2 = FUN_00402bc3();
  piVar5 = piStack_78;
  if (iVar2 < 0) {
    iStack_7c = 0x74b5ce;
    piStack_78 = (int *)iVar2;
    FUN_00878dfb();
    piVar5 = (int *)extraout_ECX;
  }
  piStack_78 = (int *)0x0;
  iStack_7c = 0;
  puStack_88 = (undefined1 *)&iStack_80;
  *(int **)(unaff_EBP + -0x24) = &iStack_80;
  puStack_84 = (undefined1 *)0x3b4;
  iStack_80 = (int)piVar5;
  FUN_00679e4e();
  puStack_84 = (undefined1 *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_88 = (undefined1 *)0x74b5f8;
  FUN_0040263d();
  puStack_88 = (undefined1 *)0x74b5ff;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_80 = 0x74b60a;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x20) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar2 != 0) {
    piStack_78 = (int *)(unaff_EBP + -0x20);
    iStack_7c = 0x74b620;
    piStack_78 = (int *)FUN_00404b30();
    if (((int)piStack_78 < 0) && (piStack_78 != (int *)0x80004002)) {
      iStack_7c = 0x74b631;
      FUN_00878dfb();
    }
  }
  piStack_78 = (int *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_7c = 0x74b63e;
  iVar2 = FUN_00402bc3();
  iStack_7c = (int)piStack_78;
  if (iVar2 < 0) {
    iStack_7c = 0x74b649;
    piStack_78 = (int *)iVar2;
    FUN_00878dfb();
    iStack_7c = extraout_ECX_00;
  }
  piStack_78 = (int *)0x6;
  puStack_84 = (undefined1 *)&iStack_7c;
  *(int **)(unaff_EBP + -0x24) = &iStack_7c;
  iStack_80 = 0x47b;
  puStack_88 = (undefined1 *)0x74b65e;
  FUN_00679e4e();
  iStack_80 = unaff_EBP + -0x74;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  puStack_84 = (undefined1 *)0x74b66e;
  FUN_0040263d();
  puStack_84 = (undefined1 *)0x74b675;
  iStack_7c = FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_80 = 0x74b67f;
  uVar3 = FUN_00412550();
  *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
  iStack_80 = unaff_EBP + -0x74;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  puStack_84 = (undefined1 *)0x74b68f;
  piStack_78 = (int *)FUN_00402bc3();
  if ((int)piStack_78 < 0) {
    iStack_7c = 0x74b69c;
    FUN_00878dfb();
  }
  switch(*(undefined4 *)(unaff_EBP + -0x24)) {
  case 0:
  case 1:
    piStack_78 = (int *)0x28c;
    iStack_7c = *(int *)(unaff_EBP + 8);
    iStack_80 = 0x74b6be;
    FUN_00679d22();
    *(undefined4 *)(unaff_EBP + -0x1c) = 1;
    piStack_78 = (int *)0x74b6c9;
    FUN_004027eb();
    piStack_78 = (int *)0x74b6d1;
    FUN_004027eb();
    goto LAB_0074b722;
  case 2:
  case 3:
    piStack_78 = (int *)0x28d;
    break;
  case 4:
  case 5:
    piStack_78 = (int *)0x28e;
    break;
  case 6:
    piStack_78 = (int *)0x28f;
    break;
  case 7:
  case 8:
  case 0xb:
  case 0xc:
    piStack_78 = (int *)0x290;
    break;
  case 9:
  case 10:
    piStack_78 = (int *)0x291;
    break;
  default:
    piStack_78 = *(int **)(unaff_EBP + -0x10);
    puVar4 = *(undefined4 **)(unaff_EBP + 8);
    *puVar4 = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (piStack_78 != (int *)0x0) {
      iStack_7c = 0x74b74c;
      (**(code **)(*piStack_78 + 8))();
    }
    piStack_78 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (piStack_78 != (int *)0x0) {
      iStack_7c = 0x74b75c;
      (**(code **)(*piStack_78 + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piStack_78 = (int *)0x74b768;
    FUN_00402676();
    goto LAB_0074b76a;
  }
  iStack_7c = *(int *)(unaff_EBP + 8);
  iStack_80 = 0x74b6fe;
  FUN_00679d22();
  piStack_78 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x1c) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (piStack_78 != (int *)0x0) {
    iStack_7c = 0x74b712;
    (**(code **)(*piStack_78 + 8))();
  }
  piStack_78 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piStack_78 != (int *)0x0) {
    iStack_7c = 0x74b722;
    (**(code **)(*piStack_78 + 8))();
  }
LAB_0074b722:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_78 = (int *)0x74b72e;
  FUN_00402676();
  puVar4 = *(undefined4 **)(unaff_EBP + 8);
LAB_0074b76a:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar4;
}


