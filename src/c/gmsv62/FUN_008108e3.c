/* FUN_008108e3 - 0x008108e3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008108e3(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar6;
  undefined1 auStack_54 [4];
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  
  FUN_00879bb8();
  uVar1 = *(uint *)(extraout_ECX + 200);
  if ((int)uVar1 < 0) goto LAB_00810ae6;
  if (*(int *)(extraout_ECX + 0xac) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(*(int *)(extraout_ECX + 0xac) + -4);
  }
  if ((uVar3 <= uVar1) || (*(int *)(extraout_ECX + 0xd4) != 0)) goto LAB_00810ae6;
  if ((*(int *)(extraout_ECX + 0xa8) != 0) && (*(int *)(*(int *)(extraout_ECX + 0xa8) + -4) != 0)) {
    iStack_48 = 0;
    iStack_4c = 0;
    uStack_50 = 0;
    *(undefined1 **)(unaff_EBP + -0x28) = auStack_54;
    FUN_00679d22(auStack_54,0x1030);
    FUN_007db3ad();
    goto LAB_00810ae6;
  }
  piVar6 = (int *)(uVar1 * 0x1c + *(int *)(extraout_ECX + 0xac));
  iVar4 = piVar6[6];
  *(int *)(unaff_EBP + -0x2c) = iVar4;
  if (iVar4 != 0) {
    iStack_48 = 0x81097d;
    InterlockedIncrement((LONG *)(iVar4 + 4));
  }
  *(int *)(unaff_EBP + -0x18) = piVar6[2];
  iVar4 = *piVar6;
  *(int *)(unaff_EBP + -0x28) = iVar4;
  iVar2 = piVar6[1];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  *(int *)(unaff_EBP + -0x24) = iVar4 / 1000000;
  iStack_48 = 0x8109a8;
  iVar4 = FUN_004c24cb();
  if (iVar4 == 0) {
    iStack_48 = unaff_EBP + -0x1c;
    iStack_4c = 0x8109c0;
    piVar6 = (int *)FUN_00679d22();
    iStack_4c = *piVar6;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_50 = 0x8109d0;
    iStack_48 = iVar2;
    uVar5 = FUN_0080f2c0();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    if ((0 < *(int *)(unaff_EBP + -0x14)) && (*(int *)(unaff_EBP + -0x14) <= iVar2))
    goto LAB_008109f0;
  }
  else {
LAB_008109f0:
    iStack_48 = 0x8109ff;
    FUN_00455c59();
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      iStack_48 = 0x810a10;
      FUN_0045e7c2();
    }
    if (*(int *)(unaff_EBP + -0x2c) != 0) {
      iStack_4c = unaff_EBP + -0x20;
      iStack_48 = *(undefined4 *)(unaff_EBP + -0x24);
      uStack_50 = 0x810a2a;
      iVar4 = FUN_00458c4f();
      *(bool *)(unaff_EBP + -0xd) = *(int *)(iVar4 + 4) != *(int *)(unaff_EBP + -0x2c);
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        iStack_48 = 0x810a42;
        FUN_00449913();
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      }
      if (*(char *)(unaff_EBP + -0xd) == '\0') {
        iStack_48 = 0;
        iStack_4c = 0;
        uStack_50 = 0;
        *(undefined1 **)(unaff_EBP + -0x24) = auStack_54;
        FUN_00679d22(auStack_54,0x105f);
        iVar4 = FUN_007db791();
        if (iVar4 == 6) {
          iStack_48 = 0;
          iStack_4c = 0x7e;
          uStack_50 = 0x810a81;
          FUN_0060142b();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iStack_48 = 0x810a8f;
          FUN_00457cda();
          iStack_48 = 0x810a9a;
          FUN_0045d247();
          iStack_48 = 0x810aa5;
          FUN_00457d37();
          iStack_48 = 0x810ab0;
          FUN_0045d247();
          iStack_48 = 0x810abf;
          FUN_004751b2();
          *(undefined4 *)(extraout_ECX + 0xd4) = 1;
          *(undefined1 *)(unaff_EBP + -4) = 0;
          FUN_0045ebca();
        }
      }
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    iStack_48 = 0x810ae6;
    FUN_00449913();
  }
LAB_00810ae6:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


