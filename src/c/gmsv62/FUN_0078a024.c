/* FUN_0078a024 - 0x0078a024 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0078a024(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  
  FUN_00879bb8();
  iVar4 = *(int *)(extraout_ECX + 0x564);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar4 != 0) {
    if ((*(short **)(unaff_EBP + 0xc) == (short *)0x0) || (**(short **)(unaff_EBP + 0xc) == 0)) {
      iStack_30 = unaff_EBP + -0x14;
      iStack_34 = 0x78a063;
      puVar1 = (undefined4 *)FUN_0078a2f0();
      iStack_30 = 0x857;
      iStack_34 = unaff_EBP + -0x10;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_38 = 0x78a079;
      puVar2 = (undefined4 *)FUN_00679d86();
      iStack_30 = *puVar1;
      iStack_34 = *puVar2;
      iStack_38 = unaff_EBP + 0xc;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_30 = 0x78a09a;
      FUN_00402676();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_30 = 0x78a0a6;
      FUN_00402676();
    }
    if (*(int *)(extraout_ECX + 0x554) == 0xb) {
      iStack_30 = 0xe55;
      iStack_34 = unaff_EBP + -0x14;
      iStack_38 = 0x78a0c1;
      iStack_30 = FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_34 = 0x78a0ce;
      FUN_00419192();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_30 = 0x78a0da;
      FUN_00402676();
    }
    iStack_30 = *(undefined4 *)(extraout_ECX + 0x56c);
    iStack_34 = *(undefined4 *)(extraout_ECX + 0x568);
    iStack_38 = 0x78a0ee;
    uVar3 = FUN_00411641();
    *(int **)(unaff_EBP + -0x18) = &iStack_38;
    iStack_38 = extraout_ECX_00;
    FUN_004033a1(uVar3);
    FUN_008163ca();
  }
  iVar4 = *(int *)(extraout_ECX + 0x558);
  if (iVar4 == 0) goto LAB_0078a1fb;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  if (iVar4 == 1) {
    iStack_30 = 0x721;
    iStack_34 = unaff_EBP + -0x18;
    iStack_38 = 0x78a184;
    iStack_30 = FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_34 = 0x78a191;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 4;
LAB_0078a198:
    iStack_30 = 0x78a19d;
    FUN_00402676();
  }
  else {
    if (iVar4 == 2) {
      iStack_30 = 0x612;
      iStack_34 = unaff_EBP + -0x10;
      iStack_38 = 0x78a15e;
      iStack_30 = FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_34 = 0x78a16b;
      FUN_00419192();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      goto LAB_0078a198;
    }
    if (iVar4 == 3) {
      iStack_30 = 0x9f7;
      iStack_34 = unaff_EBP + -0x14;
      iStack_38 = 0x78a138;
      iStack_30 = FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_34 = 0x78a145;
      FUN_00419192();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      goto LAB_0078a198;
    }
  }
  iStack_30 = 0x578;
  iStack_34 = 0x78a1ac;
  iVar4 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x1c) = iVar4;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar4 == 0) {
    iStack_30 = 0;
  }
  else {
    iStack_30 = 0x78a1be;
    iStack_30 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_34 = 0x78a1cf;
  FUN_00450382();
  iStack_30 = unaff_EBP + -0x2c;
  iStack_34 = 2;
  iStack_38 = *(int *)(extraout_ECX + 0x560);
  (**(code **)(**(int **)(extraout_ECX + 0x68) + 0x20))
            (extraout_ECX,1000,*(undefined4 *)(extraout_ECX + 0x55c));
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_30 = 0x78a1fb;
  FUN_00402676();
LAB_0078a1fb:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_30 = 0x78a207;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


