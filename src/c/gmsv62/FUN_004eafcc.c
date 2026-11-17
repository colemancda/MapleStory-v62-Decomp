/* FUN_004eafcc - 0x004eafcc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004eafcc(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  int aiStack_4c [5];
  
  FUN_00879bb8();
  aiStack_4c[3] = unaff_EBP + 8;
  aiStack_4c[4] = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  aiStack_4c[2] = 0x4eafeb;
  iVar1 = FUN_007d1e11();
  if (iVar1 == 0) {
    aiStack_4c[0] = aiStack_4c[4];
    *(int **)(unaff_EBP + -0x10) = aiStack_4c;
    uVar3 = 0xac;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined2 *)(unaff_EBP + -0x24) = 0;
    aiStack_4c[3] = aiStack_4c[4];
    aiStack_4c[2] = unaff_EBP + 8;
    *(int **)(unaff_EBP + -0x10) = aiStack_4c + 3;
    aiStack_4c[1] = 0x4eb02d;
    aiStack_4c[4] = unaff_EBP + -0x38;
    FUN_00450368();
    aiStack_4c[2] = 0x4eb034;
    FUN_0085c794();
    if ((*(int *)(unaff_EBP + -0x38) == 0) || (*(char *)(unaff_EBP + -0x27) == '\x01')) {
      if (*(int *)(DAT_00978368 + 0x2098) == 0) {
        aiStack_4c[4] = 0;
      }
      else {
        aiStack_4c[4] = *(int *)(DAT_00978368 + 0x2098) + 4;
      }
      if (aiStack_4c[4] == 0) {
        aiStack_4c[4] = DAT_00980dfc;
      }
      aiStack_4c[3] = DAT_00980dfc;
      if (*(int *)(unaff_EBP + 8) != 0) {
        aiStack_4c[3] = *(int *)(unaff_EBP + 8);
      }
      aiStack_4c[2] = 0x4eb082;
      iVar2 = FUN_008858f0();
      iVar1 = aiStack_4c[4];
      aiStack_4c[4] = 0;
      if (iVar2 != 0) {
        aiStack_4c[3] = 0;
        aiStack_4c[2] = 0x76;
        aiStack_4c[1] = 0x4eb0b8;
        FUN_0060142b();
        aiStack_4c[4] = 1;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        aiStack_4c[3] = 0x4eb0c6;
        FUN_00457cda();
        aiStack_4c[3] = unaff_EBP + 8;
        *(int **)(unaff_EBP + -0x10) = aiStack_4c + 4;
        aiStack_4c[4] = 0;
        aiStack_4c[2] = 0x4eb0d7;
        FUN_00414f8b();
        aiStack_4c[3] = 0x4eb0df;
        FUN_00459cb5();
        aiStack_4c[4] = unaff_EBP + -0x20;
        aiStack_4c[3] = 0x4eb0ee;
        FUN_004751b2();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        aiStack_4c[4] = 0x4eb0f9;
        FUN_0045ebca();
        goto LAB_004eb0f9;
      }
      aiStack_4c[0] = iVar1;
      *(int **)(unaff_EBP + -0x10) = aiStack_4c;
      uVar3 = 0x180;
    }
    else {
      *(int **)(unaff_EBP + -0x10) = aiStack_4c;
      uVar3 = 0x17f;
      aiStack_4c[0] = extraout_ECX;
    }
  }
  aiStack_4c[4] = 0;
  aiStack_4c[3] = 1;
  aiStack_4c[2] = 0;
  aiStack_4c[1] = 0;
  FUN_00679d22(aiStack_4c,uVar3);
  FUN_007db3ad();
LAB_004eb0f9:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  aiStack_4c[4] = 0x4eb105;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


