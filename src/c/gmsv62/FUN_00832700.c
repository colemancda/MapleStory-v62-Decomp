/* FUN_00832700 - 0x00832700 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00832700(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int aiStack_40 [2];
  undefined1 *puStack_38;
  int iStack_34;
  undefined4 local_30;
  
  FUN_00879bb8();
  local_30 = 0x4d4;
  iStack_34 = unaff_EBP + -0x14;
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  puStack_38 = (undefined1 *)0x832728;
  puVar1 = (undefined4 *)FUN_00679d86();
  local_30 = *puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_34 = 0x832734;
  FUN_007d3cdd();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_30 = 0x832741;
  FUN_00402676();
  local_30 = 0xf8;
  iStack_34 = 0x832752;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    local_30 = 0x832767;
    iVar2 = FUN_006ce9ad();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
  *(uint *)(unaff_EBP + -0x20) = -(uint)(uVar3 != 0) & uVar3 - 8;
  local_30 = 0x83278e;
  FUN_0083dfdd();
  *(undefined4 *)(unaff_EBP + -4) = 2;
  local_30 = 0x83279d;
  iVar2 = FUN_004bc6a2();
  if (iVar2 != 1) goto LAB_00832a4b;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x20) + 0xf4);
  if (iVar2 == 0) {
    local_30 = 0x832957;
    iVar4 = FUN_00429303();
    iVar2 = *(int *)(unaff_EBP + -0x10);
    if (*(int *)(iVar2 + 0x3294) == 0) {
      if (*(int *)(iVar2 + 0x3298) == 0) {
        if ((iVar4 == 0) || ((*(byte *)(iVar4 + 0x108) & 0x10) == 0)) {
          local_30 = 0xb8;
          iStack_34 = 0x8329fa;
          iVar2 = FUN_004029b9();
          *(int *)(unaff_EBP + -0x14) = iVar2;
          *(undefined1 *)(unaff_EBP + -4) = 5;
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            local_30 = 0x832a0c;
            iVar2 = FUN_007dd46c();
          }
          uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
          *(uint *)(unaff_EBP + -0x28) = -(uint)(uVar3 != 0) & uVar3 - 8;
          *(undefined1 *)(unaff_EBP + -4) = 2;
          local_30 = 0x832a33;
          FUN_0083e010();
          *(undefined1 *)(unaff_EBP + -4) = 6;
          local_30 = 0x832a3f;
          FUN_004bc6a2();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          local_30 = 0x832a4b;
          FUN_0083e02d();
        }
        else {
          local_30 = 0;
          iStack_34 = 0;
          puStack_38 = (undefined1 *)0x0;
          aiStack_40[1] = 0;
          *(int **)(unaff_EBP + -0x14) = aiStack_40;
          aiStack_40[0] = iVar2;
          FUN_00679d22(aiStack_40,0x122);
          FUN_007db3ad();
        }
        goto LAB_00832a4b;
      }
      local_30 = 0xf0d;
      iStack_34 = unaff_EBP + -0x1c;
      puStack_38 = (undefined1 *)0x8329a1;
      iStack_34 = FUN_00679d22();
      local_30 = 0xc;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      puStack_38 = (undefined1 *)0x8329ad;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 2;
    }
    else {
      local_30 = 0xc1b;
      iStack_34 = unaff_EBP + -0x18;
      puStack_38 = (undefined1 *)0x832972;
      iStack_34 = FUN_00679d22();
      local_30 = 0xc;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      puStack_38 = (undefined1 *)0x83297e;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 2;
    }
    local_30 = 0x8329bb;
    FUN_00414ebb();
    goto LAB_00832a4b;
  }
  if (iVar2 == 1) {
    local_30 = 0x14c;
    iStack_34 = 0x8328fc;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x14) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      local_30 = 0x83290e;
      iVar2 = FUN_00832a66();
    }
    uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
    *(uint *)(unaff_EBP + -0x28) = -(uint)(uVar3 != 0) & uVar3 - 8;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    local_30 = 0x832935;
    FUN_0083e043();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    local_30 = 0x832941;
    FUN_004bc6a2();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    local_30 = 0x83294d;
    FUN_0083e060();
    goto LAB_00832a4b;
  }
  if (iVar2 == 2) {
    local_30 = 0x14c;
    iStack_34 = 0x83289a;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x14) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      local_30 = 0x8328ac;
      iVar2 = FUN_006b1be4();
    }
    uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
    *(uint *)(unaff_EBP + -0x28) = -(uint)(uVar3 != 0) & uVar3 - 8;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    local_30 = 0x8328d3;
    FUN_006b4182();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    local_30 = 0x8328df;
    FUN_004bc6a2();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    local_30 = 0x8328eb;
    FUN_006b419f();
    goto LAB_00832a4b;
  }
  if (iVar2 == 3) {
    if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x2084) == 0) {
      local_30 = 0x832889;
      FUN_00849684();
      goto LAB_00832a4b;
    }
    local_30 = 0;
    iStack_34 = 0;
    puStack_38 = (undefined1 *)0x0;
    aiStack_40[1] = 0;
    *(int **)(unaff_EBP + -0x1c) = aiStack_40;
    aiStack_40[0] = *(int *)(unaff_EBP + -0x10);
    FUN_0045f0f3(s_Thanks_for_playing__Would_you_li_0096c748,0xffffffff);
    iVar2 = FUN_007db891();
    if (iVar2 != 6) {
      *(undefined4 **)(unaff_EBP + -0x14) = &local_30;
      iStack_34 = 0xffffffff;
      puStack_38 = &DAT_00978474;
      local_30 = 0;
      aiStack_40[1] = 0x832855;
      FUN_00414edd();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_34 = 0x83285e;
      FUN_0056a74b();
      iStack_34 = 0x832865;
      FUN_0056786b();
    }
    local_30 = 0x18;
    iStack_34 = 0x83286e;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x14) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (iVar2 != 0) goto LAB_008327e6;
LAB_008327ed:
    iStack_34 = 0;
  }
  else {
    if (iVar2 != 5) goto LAB_00832a4b;
    local_30 = 0x18;
    iStack_34 = 0x8327d9;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x14) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (iVar2 == 0) goto LAB_008327ed;
LAB_008327e6:
    local_30 = 0x8327eb;
    iStack_34 = FUN_0052899a();
  }
  local_30 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_38 = (undefined1 *)0x8327fa;
  FUN_0065ce47();
  local_30 = 0x832807;
  FUN_00831151();
  local_30 = 0;
  iStack_34 = 0x83280e;
  (*DAT_0097b514)();
LAB_00832a4b:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_30 = 0x832a57;
  FUN_0083dffa();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


