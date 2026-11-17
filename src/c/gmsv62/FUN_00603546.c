/* FUN_00603546 - 0x00603546 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00603546(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int iVar5;
  int unaff_EBP;
  int aiStack_54 [5];
  
  FUN_00879bb8();
  aiStack_54[4] = 0x603560;
  uVar1 = FUN_0042452b();
  uVar1 = uVar1 & 0xff;
  if (uVar1 != 0) {
    *(uint *)(unaff_EBP + -0x10) = uVar1;
    do {
      *(undefined4 *)(unaff_EBP + -0x34) = 0;
      aiStack_54[4] = 0x603577;
      FUN_00609c3e();
      aiStack_54[4] = *(undefined4 *)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      aiStack_54[3] = 0x603585;
      FUN_004b649a();
      aiStack_54[4] = unaff_EBP + -0x38;
      aiStack_54[3] = 0xffffffff;
      aiStack_54[2] = 0x603592;
      FUN_00609d92();
      aiStack_54[3] = 0x603599;
      FUN_00609c0f();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      aiStack_54[4] = 0x6035a5;
      FUN_00609c8e();
      piVar3 = (int *)(unaff_EBP + -0x10);
      *piVar3 = *piVar3 + -1;
    } while (*piVar3 != 0);
  }
  if ((*(int *)(extraout_ECX[3] + 0x78) == 2) || (uVar1 != 0)) {
    aiStack_54[4] = 0;
  }
  else {
    aiStack_54[4] = 1;
  }
  *(int *)(extraout_ECX[3] + 0x84) = aiStack_54[4];
  aiStack_54[3] = 0x6035d2;
  FUN_004b2699();
  if (*extraout_ECX == 0) {
    aiStack_54[3] = 0;
  }
  else {
    aiStack_54[3] = *(undefined4 *)(*extraout_ECX + -4);
  }
  aiStack_54[4] = extraout_ECX[2];
  aiStack_54[2] = 0x6035eb;
  FUN_00609419();
  aiStack_54[4] = 0x6035f3;
  uVar1 = FUN_0042452b();
  if ((uVar1 & 0xff) != 0) {
    *(uint *)(unaff_EBP + -0x20) = uVar1 & 0xff;
    do {
      *(undefined4 *)(unaff_EBP + -0x3c) = 0;
      aiStack_54[4] = 0x603611;
      FUN_00609c3e();
      aiStack_54[4] = *(undefined4 *)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 1;
      aiStack_54[3] = 0x603623;
      FUN_004b649a();
      iVar5 = *(int *)(unaff_EBP + -0x3c);
      aiStack_54[4] = 0xee0;
      aiStack_54[3] = unaff_EBP + -0x24;
      aiStack_54[2] = 0x603636;
      puVar2 = (undefined4 *)FUN_00679d22();
      aiStack_54[3] = *puVar2;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      aiStack_54[4] = iVar5 + 4;
      aiStack_54[2] = unaff_EBP + -0x14;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      aiStack_54[1] = 0x60364d;
      aiStack_54[4] = FUN_00434e21();
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      aiStack_54[3] = 0x60365c;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      aiStack_54[4] = extraout_ECX_00;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        aiStack_54[4] = *(int *)(unaff_EBP + -0x14) + -0xc;
        aiStack_54[3] = 0x603670;
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        aiStack_54[4] = *(int *)(unaff_EBP + -0x24) + -0xc;
        aiStack_54[3] = 0x603685;
        FUN_00434e38();
      }
      iVar5 = *(int *)(unaff_EBP + -0x3c);
      if (*(int *)(iVar5 + 0x11) != 0) {
        aiStack_54[4] = 0xee1;
        aiStack_54[3] = unaff_EBP + -0x28;
        aiStack_54[2] = 0x60369e;
        puVar2 = (undefined4 *)FUN_00679d22();
        aiStack_54[3] = *puVar2;
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        aiStack_54[4] = *(undefined4 *)(iVar5 + 0x11);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        aiStack_54[2] = unaff_EBP + -0x18;
        aiStack_54[1] = 0x6036b4;
        piVar3 = (int *)FUN_00434e21();
        aiStack_54[3] = *piVar3;
        if (aiStack_54[3] == 0) {
          aiStack_54[4] = 0;
        }
        else {
          aiStack_54[4] = *(undefined4 *)(aiStack_54[3] + -4);
        }
        aiStack_54[2] = 0x6036ce;
        FUN_0045efbb();
        *(undefined1 *)(unaff_EBP + -4) = 7;
        aiStack_54[4] = extraout_ECX_01;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          aiStack_54[4] = *(int *)(unaff_EBP + -0x18) + -0xc;
          aiStack_54[3] = 0x6036e2;
          FUN_00434e38();
        }
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (*(int *)(unaff_EBP + -0x28) != 0) {
          aiStack_54[4] = *(int *)(unaff_EBP + -0x28) + -0xc;
          aiStack_54[3] = 0x6036f7;
          FUN_00434e38();
        }
      }
      iVar5 = aiStack_54[4];
      if (*(int *)(*(int *)(unaff_EBP + -0x3c) + 0xee) != 0) {
        aiStack_54[4] = 0x603718;
        aiStack_54[4] = FUN_0045e2eb();
        aiStack_54[3] = unaff_EBP + -0x30;
        aiStack_54[2] = 0x603724;
        puVar2 = (undefined4 *)FUN_0045a1d8();
        aiStack_54[4] = 0xee2;
        aiStack_54[3] = unaff_EBP + -0x2c;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        aiStack_54[2] = 0x60373a;
        puVar4 = (undefined4 *)FUN_00679d22();
        aiStack_54[3] = *puVar4;
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        aiStack_54[4] = *puVar2;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        aiStack_54[2] = unaff_EBP + -0x1c;
        aiStack_54[1] = 0x60374f;
        piVar3 = (int *)FUN_00434e21();
        aiStack_54[3] = *piVar3;
        if (aiStack_54[3] == 0) {
          aiStack_54[4] = 0;
        }
        else {
          aiStack_54[4] = *(undefined4 *)(aiStack_54[3] + -4);
        }
        aiStack_54[2] = 0x603769;
        FUN_0045efbb();
        *(undefined1 *)(unaff_EBP + -4) = 10;
        aiStack_54[4] = 0x603775;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        aiStack_54[4] = 0x603781;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 5;
        aiStack_54[4] = 0x60378d;
        FUN_00414ebb();
        iVar5 = extraout_ECX_02;
      }
      aiStack_54[4] = 0;
      aiStack_54[3] = 0;
      aiStack_54[2] = 0;
      aiStack_54[1] = 0;
      *(int **)(unaff_EBP + -0x34) = aiStack_54;
      aiStack_54[0] = iVar5;
      FUN_00450368(unaff_EBP + -0x10);
      FUN_007db3ad();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      aiStack_54[4] = 0x6037b4;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x3c) != 0) {
        aiStack_54[4] = 0;
        aiStack_54[3] = 0x6037c6;
        FUN_00609cba();
        *(undefined4 *)(unaff_EBP + -0x3c) = 0;
      }
      piVar3 = (int *)(unaff_EBP + -0x20);
      *piVar3 = *piVar3 + -1;
    } while (*piVar3 != 0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


