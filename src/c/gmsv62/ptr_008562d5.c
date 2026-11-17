/* ptr_008562d5 - 0x008562d5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Type propagation algorithm not settling */

void ptr_008562d5(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  int aiStack_14 [5];
  
  aiStack_14[4] = 0x8562dc;
  uVar2 = FUN_0042452b();
  aiStack_14[4] = 0x8562e6;
  iVar3 = FUN_0042459a();
  if (iVar3 == 0) {
    *(int **)(unaff_EBP + -0x24) = aiStack_14 + 1;
    aiStack_14[0] = iVar3;
    FUN_006f5500();
    aiStack_14[0] = 1;
    FUN_00684963(3);
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    if (iVar3 == 1) {
      aiStack_14[4] = 0xd93;
      aiStack_14[3] = unaff_EBP + -0xb8;
      aiStack_14[2] = 0x8563a9;
      puVar4 = (undefined4 *)FUN_00679d22();
      uVar1 = *puVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x4a;
      aiStack_14[3] = 0x8563b7;
      aiStack_14[4] = uVar2 & 0xff;
      aiStack_14[4] = FUN_004ec897();
      aiStack_14[2] = unaff_EBP + -0x18;
      aiStack_14[1] = 0x8563c2;
      aiStack_14[3] = uVar1;
      FUN_00434e21();
      iVar3 = *(int *)(unaff_EBP + -0xb8);
      *(undefined1 *)(unaff_EBP + -4) = 0x49;
    }
    else if (iVar3 == 2) {
      aiStack_14[4] = 0xd94;
      aiStack_14[3] = unaff_EBP + -0xb0;
      aiStack_14[2] = 0x85636b;
      puVar4 = (undefined4 *)FUN_00679d22();
      uVar1 = *puVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      aiStack_14[3] = 0x856379;
      aiStack_14[4] = uVar2 & 0xff;
      aiStack_14[4] = FUN_004ec897();
      aiStack_14[2] = unaff_EBP + -0x18;
      aiStack_14[1] = 0x856384;
      aiStack_14[3] = uVar1;
      FUN_00434e21();
      iVar3 = *(int *)(unaff_EBP + -0xb0);
      *(undefined1 *)(unaff_EBP + -4) = 0x49;
    }
    else {
      aiStack_14[4] = 0xd95;
      aiStack_14[3] = unaff_EBP + -0xa8;
      aiStack_14[2] = 0x856334;
      puVar4 = (undefined4 *)FUN_00679d22();
      aiStack_14[3] = *puVar4;
      aiStack_14[4] = iVar3 + -1;
      aiStack_14[2] = unaff_EBP + -0x18;
      *(undefined1 *)(unaff_EBP + -4) = 0x4c;
      aiStack_14[1] = 0x856346;
      FUN_00434e21();
      iVar3 = *(int *)(unaff_EBP + -0xa8);
      *(undefined1 *)(unaff_EBP + -4) = 0x49;
    }
    if (iVar3 != 0) {
      aiStack_14[4] = iVar3 + -0xc;
      aiStack_14[3] = 0x8563dc;
      FUN_00434e38();
    }
    aiStack_14[4] = 0;
    aiStack_14[3] = unaff_EBP + -0x18;
    *(int **)(unaff_EBP + -0x24) = aiStack_14 + 4;
    aiStack_14[2] = 0x8563ef;
    FUN_00414f8b();
    *(int **)(unaff_EBP + -0x10) = aiStack_14;
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    FUN_006f5500(0);
    FUN_00684733(3,1,0x7fffffff);
    aiStack_14[3] = unaff_EBP + -0x18;
    aiStack_14[4] = 0xc;
    aiStack_14[2] = 0x856421;
    FUN_00471102();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      aiStack_14[4] = *(int *)(unaff_EBP + -0x18) + -0xc;
      aiStack_14[3] = 0x856437;
      FUN_00434e38();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) != 0) {
    aiStack_14[4] = *(int *)(unaff_EBP + 8) + -0xc;
    aiStack_14[3] = 0x85644c;
    FUN_00434e38();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    aiStack_14[4] = *(int *)(unaff_EBP + -0x14) + -0xc;
    aiStack_14[3] = 0x856465;
    FUN_00434e38();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


