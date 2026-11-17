/* FUN_00746eda - 0x00746eda in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00746eda(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iStack_38;
  int local_34;
  
  FUN_00879bb8();
  iVar1 = DAT_00978368;
  iStack_38 = *(int *)(DAT_00978368 + 0x2098);
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  if (iStack_38 == 0) {
    iStack_38 = 0;
  }
  else {
    iStack_38 = iStack_38 + 4;
  }
  local_34 = -1;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  FUN_00414edd();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  local_34 = unaff_EBP + -0x20;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_38 = 0x746f29;
  iVar2 = FUN_00455c59();
  iVar2 = *(int *)(iVar2 + 4);
  iStack_38 = extraout_ECX_00;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    local_34 = 0;
    iStack_38 = 0x746f3a;
    FUN_0045e7c2();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    iStack_38 = extraout_ECX_01;
  }
  if (*(int *)(iVar2 + 0x4a7) == 0) {
    *(int **)(unaff_EBP + -0x1c) = &iStack_38;
    local_34 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00679d22(unaff_EBP + 8,0xa3);
    uVar6 = 0;
    uVar5 = 0xffffffff;
    uVar4 = 0xc;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    uVar3 = FUN_00449713(0xc,0xffffffff,0);
    FUN_00743a59(uVar3,uVar4,uVar5,uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    local_34 = 0x747008;
    FUN_00414ebb();
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x4ab);
    iStack_38 = iVar2 + 0x23;
    if (*(int *)(iVar1 + 0x202c) != 0) {
      iStack_38 = iVar2 + 0x16;
    }
    local_34 = -1;
    FUN_00414edd();
    local_34 = 0;
    iStack_38 = 0;
    FUN_0060142b(0x6d);
    iStack_38 = unaff_EBP + -0x10;
    *(int **)(unaff_EBP + -0x18) = &local_34;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    local_34 = 0;
    FUN_00414f8b();
    iStack_38 = 0x746f8d;
    FUN_00459cb5();
    *(int **)(unaff_EBP + -0x18) = &local_34;
    iStack_38 = *(int *)(unaff_EBP + 8);
    local_34 = 0;
    FUN_00414f8b();
    iStack_38 = 0x746fa5;
    FUN_00459cb5();
    local_34 = unaff_EBP + -0x30;
    iStack_38 = 0x746fb4;
    FUN_004751b2();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    local_34 = 0x746fc0;
    FUN_0045ebca();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  local_34 = 0x747013;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_34 = 0x74701f;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


