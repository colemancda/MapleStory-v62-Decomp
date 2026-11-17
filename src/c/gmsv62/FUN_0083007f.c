/* FUN_0083007f - 0x0083007f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0083007f(void)

{
  double dVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int extraout_ECX;
  int *piVar9;
  int unaff_EBP;
  float10 fVar10;
  
  FUN_00879bb8();
  iVar7 = DAT_00978358;
  if (DAT_00978358 == 0) goto LAB_008304fd;
  *(int *)(unaff_EBP + -0x10) = DAT_00978358;
  iVar3 = FUN_00455c59(unaff_EBP + -0x3c);
  iVar3 = *(int *)(iVar3 + 4);
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    FUN_0045e7c2(0);
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  iVar4 = FUN_00429303();
  dVar1 = *(double *)(iVar4 + 0x110);
  iVar4 = *(int *)(iVar3 + 0xff);
  *(double *)(unaff_EBP + -0x2c) = dVar1;
  if ((iVar4 != 0) && (_DAT_008e8a78 < dVar1)) {
    uVar5 = FUN_0045e2eb();
    iVar4 = FUN_0054e7b3(uVar5);
    if (iVar4 != 0) {
      fVar10 = (float10)FUN_004f1993(iVar4 + 0x138,*(undefined4 *)(iVar4 + 0x148));
      *(double *)(unaff_EBP + -0x2c) = (double)(fVar10 * (float10)*(double *)(unaff_EBP + -0x2c));
    }
  }
  uVar6 = FUN_0043f90a(0);
  uVar5 = *(undefined4 *)(iVar7 + 0x1ef8);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = uVar6;
  iVar7 = FUN_004cd670(iVar7 + 0x1ef0,uVar5);
  if (iVar7 != 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 2;
    *(double *)(unaff_EBP + -0x2c) = *(double *)(unaff_EBP + -0x2c) * _DAT_008ed708;
  }
  uVar5 = *(undefined4 *)(iVar3 + 0x3d);
  *(undefined4 *)(unaff_EBP + -0x18) = 1;
  *(undefined4 *)(unaff_EBP + -0x1c) = 10000;
  sVar2 = FUN_0045f084(iVar3 + 0x39,uVar5);
  if (((int)sVar2 / 100 == 1) && (iVar7 = FUN_00650dae(iVar3,1000000,0), iVar7 != 0)) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 5000;
  }
  sVar2 = FUN_0045f084(iVar3 + 0x61,*(undefined4 *)(iVar3 + 0x65));
  if (sVar2 == 0) {
LAB_0083035d:
    FUN_0045e3a0(0);
    if (*(int *)(unaff_EBP + -0x18) != 0) goto LAB_00830370;
  }
  else {
    uVar6 = FUN_00413367(extraout_ECX + 0x20fc,*(undefined4 *)(extraout_ECX + 0x2104));
    uVar5 = *(undefined4 *)(iVar3 + 0x65);
    *(undefined4 *)(unaff_EBP + -0x24) = uVar6;
    sVar2 = FUN_0045f084(iVar3 + 0x61,uVar5);
    if (*(int *)(unaff_EBP + -0x24) <= (int)sVar2) goto LAB_0083035d;
    iVar7 = *(int *)(unaff_EBP + -0x10);
    iVar4 = FUN_004bed04();
    if (iVar4 != 0) goto LAB_0083035d;
    piVar9 = (int *)(iVar7 + 4);
    uVar5 = (**(code **)(*(int *)(iVar7 + 4) + 0x14))();
    *(undefined4 *)(unaff_EBP + -0x24) = uVar5;
    piVar8 = (int *)(**(code **)(*piVar9 + 0x10))();
    if (*piVar8 != **(int **)(unaff_EBP + -0x24)) goto LAB_0083035d;
    uVar5 = (**(code **)(*piVar9 + 0x14))();
    iVar7 = *piVar9;
    *(undefined4 *)(unaff_EBP + -0x24) = uVar5;
    iVar7 = (**(code **)(iVar7 + 0x10))();
    if (*(int *)(iVar7 + 4) != *(int *)(*(int *)(unaff_EBP + -0x24) + 4)) goto LAB_0083035d;
    iVar7 = *(int *)(unaff_EBP + -0x10);
    if ((*(int *)(iVar7 + 0x4e0) == 0) && (*(int *)(iVar7 + 0x4f4) == 0)) {
      iVar4 = *(int *)(unaff_EBP + -0x20);
      if ((((iVar4 != 0x24) && (iVar4 != 0x25)) && (iVar4 != 0x69)) && (iVar4 != 0x68))
      goto LAB_00830265;
LAB_00830302:
      iVar4 = FUN_0065321e(iVar3);
      *(int *)(unaff_EBP + -0x1c) = iVar4;
      if (iVar4 < 1) goto LAB_0083035d;
      *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
    }
    else {
      iVar4 = *(int *)(unaff_EBP + -0x20);
      if ((iVar4 == 9) || (iVar4 == 10)) goto LAB_00830302;
LAB_00830265:
      if (((iVar4 < 2) || (3 < iVar4)) && ((iVar4 != 0x27 && (iVar4 != 100)))) goto LAB_0083035d;
    }
    uVar5 = FUN_00413367(iVar7 + 0x2408,*(undefined4 *)(iVar7 + 0x2410));
    iVar7 = FUN_00554bde(uVar5,1);
    *(int *)(unaff_EBP + -0x24) = iVar7;
    if (iVar7 != 0) {
      iVar7 = FUN_0045e2eb();
      FUN_0045e3a0(iVar7 + 0x1e);
      if (*(int *)(unaff_EBP + -0x1c) <= iVar7 + 0x1e) {
        iVar7 = *(int *)(unaff_EBP + -0x24);
        goto LAB_0083033d;
      }
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      goto LAB_0083035d;
    }
    iVar7 = FUN_0045e2eb();
    FUN_0045e3a0(iVar7 + 0x1e);
    if (*(int *)(unaff_EBP + -0x1c) <= iVar7 + 0x1e) {
      iVar7 = FUN_00652fa8(iVar3);
      *(int *)(unaff_EBP + -0x24) = iVar7 + 10;
      iVar7 = __ftol();
LAB_0083033d:
      if (0 < iVar7) {
        FUN_00845756(iVar7,0,*(undefined4 *)(unaff_EBP + -0x14));
        FUN_0078c08d(iVar7);
      }
      goto LAB_0083035d;
    }
LAB_00830370:
    FUN_0045e3a0(0);
  }
  uVar5 = *(undefined4 *)(iVar3 + 0x65);
  *(undefined4 *)(unaff_EBP + -0x18) = 1;
  sVar2 = FUN_0045f084(iVar3 + 0x61,uVar5);
  if (sVar2 == 0) {
LAB_0083047e:
    FUN_0045e3a0(0);
    if (*(int *)(unaff_EBP + -0x18) != 0) goto LAB_00830491;
  }
  else {
    iVar7 = FUN_00413367(extraout_ECX + 0x2108,*(undefined4 *)(extraout_ECX + 0x2110));
    sVar2 = FUN_0045f084(iVar3 + 0x71,*(undefined4 *)(iVar3 + 0x75));
    if ((iVar7 <= sVar2) || (iVar7 = FUN_004bed04(), iVar7 != 0)) goto LAB_0083047e;
    uVar5 = FUN_00413367(*(int *)(unaff_EBP + -0x10) + 0x2408,
                         *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x2410));
    iVar7 = FUN_00554bde(uVar5,0);
    *(int *)(unaff_EBP + -0x24) = iVar7;
    if (iVar7 != 0) {
      iVar7 = FUN_0045e2eb();
      FUN_0045e3a0(iVar7 + 0x1e);
      if (9999 < iVar7 + 0x1e) {
        iVar7 = *(int *)(unaff_EBP + -0x24);
        goto LAB_00830467;
      }
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      goto LAB_0083047e;
    }
    iVar7 = FUN_0045e2eb();
    FUN_0045e3a0(iVar7 + 0x1e);
    if (9999 < iVar7 + 0x1e) {
      iVar7 = FUN_0065308e(iVar3);
      *(int *)(unaff_EBP + -0x24) = iVar7 + 3;
      iVar7 = __ftol();
LAB_00830467:
      if (0 < iVar7) {
        FUN_00845756(0,iVar7,*(undefined4 *)(unaff_EBP + -0x14));
      }
      goto LAB_0083047e;
    }
LAB_00830491:
    FUN_0045e3a0(0);
  }
  uVar5 = FUN_00413367(*(int *)(unaff_EBP + -0x10) + 0x2408,
                       *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x2410));
  iVar7 = FUN_00554cc6(uVar5);
  if ((iVar7 == 0) && (iVar7 = FUN_007ae78e(), iVar7 != 0)) {
    FUN_0060142b(0x45,0,0);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_004751b2(unaff_EBP + -0x34);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045ebca();
  }
LAB_008304fd:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


