/* FUN_00642571 - 0x00642571 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00642571(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  undefined4 uVar4;
  undefined4 uVar5;
  int iStack_5c;
  int iStack_58;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x20) = extraout_ECX;
  iStack_58 = 0x642592;
  FUN_0045cdbc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar2 = FUN_0042452b();
  *(uint *)(unaff_EBP + -0x1c) = uVar2 & 0xff;
  uVar2 = FUN_0042452b();
  iStack_58 = 0;
  iStack_5c = 0x38;
  *(uint *)(unaff_EBP + -0x24) = uVar2 & 0xff;
  FUN_0060142b();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_58 = 0x6425cd;
  FUN_00457cda();
  iStack_58 = 0x6425dc;
  FUN_00455c59();
  FUN_0045e4a2();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (0 < *(int *)(unaff_EBP + -0x1c)) {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x1c);
    do {
      iStack_58 = unaff_EBP + -0x38;
      iStack_5c = 0x642606;
      FUN_004245d2();
      FUN_0042452b();
      iStack_58 = *(undefined4 *)(unaff_EBP + -0x38);
      iStack_5c = 5;
      iVar3 = FUN_00458d57();
      if (0 < iVar3) {
        iStack_58 = 5;
        iStack_5c = unaff_EBP + -0x40;
        iVar3 = FUN_00458c4f();
        uVar5 = *(undefined4 *)(iVar3 + 4);
        FUN_0046575e();
        *(undefined4 *)(unaff_EBP + -0x2c) = uVar5;
        FUN_00642825();
        iStack_58 = 0xffffffff;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iStack_5c = 0x642657;
        FUN_004c2884();
        iStack_58 = 0x64265e;
        FUN_004c2596();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        FUN_004c267b();
      }
      piVar1 = (int *)(unaff_EBP + -0x18);
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
  }
  if ((int)(uint)(*(int *)(unaff_EBP + -0x24) == 0) < *(int *)(unaff_EBP + -0x1c)) {
    if ((*(char **)(unaff_EBP + -0x14) == (char *)0x0) || (**(char **)(unaff_EBP + -0x14) == '\0'))
    {
      iStack_58 = 0x642795;
      FUN_00457cda();
      iStack_58 = *(undefined4 *)(unaff_EBP + -0x10);
      iStack_5c = 0x6427a2;
      FUN_00457fa0();
    }
    else {
      iStack_58 = 0x6426a5;
      iVar3 = FUN_004029b9();
      *(int *)(unaff_EBP + 0x10) = iVar3;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (iVar3 != 0) {
        FUN_007e62e9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_58 = 0x6426c8;
      iVar3 = FUN_005154ad();
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(iVar3 + 4);
      FUN_004c26c4();
      iStack_58 = 0;
      *(int **)(unaff_EBP + 0x10) = &iStack_5c;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_5c = extraout_ECX_00;
      FUN_00450368(unaff_EBP + -0x14);
      uVar5 = *(undefined4 *)(unaff_EBP + 0xc);
      uVar4 = 6;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_004c2677(6,uVar5);
      FUN_007eddac(uVar4,uVar5);
      iStack_58 = 0x64270f;
      FUN_007ee33f();
      FUN_007e6e3c();
      iVar3 = FUN_004bc6a2();
      if (iVar3 == 1) {
        iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) +
                         *(int *)(*(int *)(unaff_EBP + -0x24) + 0x124) * 8 + 4);
        *(int *)(unaff_EBP + -0x34) = iVar3;
        if (iVar3 != 0) {
          iStack_58 = 0x642747;
          InterlockedIncrement((LONG *)(iVar3 + 4));
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        iStack_58 = 0x642755;
        FUN_00457cda();
        iStack_58 = *(int *)(unaff_EBP + -0x34) + 0x18;
        iStack_5c = 0x642766;
        FUN_00457fa0();
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_004c267b();
      }
      else {
        iStack_58 = 0x64277d;
        FUN_00457cda();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_004c26e1();
    }
  }
  else {
    iStack_58 = 0x6427ae;
    FUN_00457cda();
  }
  iStack_58 = 0x6427bd;
  FUN_004751b2();
  FUN_004c26e1();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004c2848();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045ebca();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


