/* FUN_00696f8b - 0x00696f8b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00696f8b(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  undefined4 uVar4;
  int aiStack_28 [5];
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) != 1) {
LAB_00697126:
    if (*(int *)(extraout_ECX + 0x68) == 0) {
      *(undefined4 *)(extraout_ECX + 100) = *(undefined4 *)(unaff_EBP + 8);
      *(undefined4 *)(extraout_ECX + 0x68) = 1;
      if (*(int *)(extraout_ECX + 0x14) != 0) {
        aiStack_28[4] = 0x697144;
        FUN_00815de9();
      }
    }
    goto LAB_00697144;
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  aiStack_28[4] = unaff_EBP + -0x10;
  aiStack_28[3] = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  aiStack_28[2] = 0x696fc2;
  FUN_00697168();
  aiStack_28[4] = 0;
  aiStack_28[3] = 0;
  aiStack_28[2] = 0x696fcc;
  FUN_0045ed72();
  aiStack_28[3] = 0x696fd3;
  FUN_0045ee27();
  aiStack_28[4] = 0;
  aiStack_28[3] = 0;
  aiStack_28[2] = 0x696fdd;
  FUN_0045ed72();
  aiStack_28[3] = 0x696fe4;
  FUN_0045ee27();
  iVar3 = *(int *)(unaff_EBP + -0x14);
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar3 + -4);
  }
  if (iVar2 < 4) {
LAB_00697154:
    *(int **)(unaff_EBP + 8) = aiStack_28;
    uVar4 = 0xa5d;
    aiStack_28[0] = extraout_ECX_00;
  }
  else {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar3 + -4);
    }
    if (0xc < iVar2) goto LAB_00697154;
    if (*(int *)(DAT_00978368 + 0x2098) == 0) {
      aiStack_28[4] = 0;
    }
    else {
      aiStack_28[4] = *(int *)(DAT_00978368 + 0x2098) + 4;
    }
    if (aiStack_28[4] == 0) {
      aiStack_28[4] = DAT_00980dfc;
    }
    aiStack_28[3] = DAT_00980dfc;
    if (iVar3 != 0) {
      aiStack_28[3] = iVar3;
    }
    aiStack_28[2] = 0x69703e;
    iVar3 = FUN_008858f0();
    if (iVar3 == 0) {
      aiStack_28[0] = aiStack_28[4];
      *(int **)(unaff_EBP + 8) = aiStack_28;
      uVar4 = 0xa5f;
    }
    else {
      aiStack_28[4] = 1;
      aiStack_28[3] = 0;
      aiStack_28[2] = 1;
      aiStack_28[1] = 0x400;
      aiStack_28[0] = 0x697067;
      aiStack_28[2] = FUN_00415015();
      aiStack_28[1] = 0x69706d;
      uVar4 = FUN_00471777();
      aiStack_28[4] = 0xffffffff;
      *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
      aiStack_28[3] = 0x69707d;
      FUN_004150c0();
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        *(int **)(unaff_EBP + 8) = aiStack_28;
        uVar4 = 0x11d;
        aiStack_28[0] = extraout_ECX_01;
      }
      else {
        pcVar1 = *(char **)(unaff_EBP + -0x10);
        if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
          *(int **)(unaff_EBP + 8) = aiStack_28;
          uVar4 = 0xa5e;
          aiStack_28[0] = extraout_ECX_01;
        }
        else {
          if (*(int *)(pcVar1 + -4) < 0xc9) {
            aiStack_28[4] = *(undefined4 *)(unaff_EBP + -0x14);
            aiStack_28[3] = 0x697101;
            FUN_004a2fef();
            aiStack_28[4] = *(undefined4 *)(unaff_EBP + -0x10);
            aiStack_28[3] = 0x69710f;
            FUN_004a2fef();
            *(undefined1 *)(unaff_EBP + -4) = 0;
            aiStack_28[4] = 0x69711a;
            FUN_00414ebb();
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            aiStack_28[4] = 0x697126;
            FUN_00414ebb();
            goto LAB_00697126;
          }
          *(int **)(unaff_EBP + 8) = aiStack_28;
          uVar4 = 0xa2d;
          aiStack_28[0] = extraout_ECX_01;
        }
      }
    }
  }
  aiStack_28[4] = 0;
  aiStack_28[3] = 0;
  aiStack_28[2] = 0;
  aiStack_28[1] = 0;
  FUN_00679d22(aiStack_28,uVar4);
  FUN_007db3ad();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  aiStack_28[4] = 0x6970e5;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  aiStack_28[4] = 0x6970f1;
  FUN_00414ebb();
LAB_00697144:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


