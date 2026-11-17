/* FUN_00684733 - 0x00684733 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00684733(void)

{
  int iVar1;
  int extraout_ECX;
  uint uVar2;
  int unaff_EBP;
  int iStack_44;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  int iStack_38;
  uint local_34;
  
  FUN_00879bb8();
  local_34 = *(uint *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_38 = 0x684751;
  iVar1 = FUN_0065439b();
  if (iVar1 == 0) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    local_34 = *(uint *)(extraout_ECX + 0x10);
    *(undefined1 *)(unaff_EBP + -4) = 1;
LAB_00684769:
    while (local_34 != 0) {
      *(uint *)(unaff_EBP + -0x10) = local_34;
      iVar1 = *(int *)((-(uint)(local_34 != 0) & local_34 - 0x10) + 4);
      uVar2 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
      iStack_38 = 0x68479a;
      FUN_006868ac();
      *(undefined1 **)(unaff_EBP + -0x14) = auStack_40;
      iStack_44 = 0x80;
      FUN_006f5512(unaff_EBP + 0x14);
      iStack_44 = unaff_EBP + -0x30;
      local_34 = FUN_006f5dd4();
      iStack_38 = 0x6847c1;
      FUN_0068686b();
      iStack_38 = 0x6847cb;
      FUN_006f5ab7();
      local_34 = uVar2;
      if (*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x1c) != 3) goto LAB_006847e8;
      if ((*(int *)(unaff_EBP + 8) == 3) &&
         (*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x20) == *(int *)(unaff_EBP + 0xc)))
      goto LAB_006847fa;
    }
    local_34 = 0x40;
    iStack_38 = 0x684816;
    iVar1 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x10) = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar1 == 0) {
      local_34 = 0;
    }
    else {
      iStack_38 = unaff_EBP + 0x24;
      *(uint **)(unaff_EBP + -0x14) = &local_34;
      local_34 = 0;
      uStack_3c = 0x684834;
      FUN_00414f8b();
      *(int **)(unaff_EBP + -0x18) = &iStack_44;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_006f5512(unaff_EBP + 0x14,0x80);
      local_34 = FUN_0068531f(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                              *(undefined4 *)(unaff_EBP + 0x10));
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_38 = 0x68486c;
    FUN_0068686f();
    if (*(int *)(unaff_EBP + 8) == 3) {
      local_34 = 0x68487a;
      FUN_00686963();
    }
    else {
      local_34 = 0x684881;
      FUN_00686925();
    }
    local_34 = unaff_EBP - 0x20;
    iStack_38 = 0x68488c;
    FUN_006868ac();
    local_34 = 0x684893;
    FUN_00684df7();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      local_34 = 0;
      iStack_38 = 0x6848a5;
      FUN_006868f7();
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_34 = 0x6848b4;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
LAB_006847e8:
  local_34 = 0;
  iStack_38 = 0x6847f2;
  iVar1 = FUN_006f563a();
  local_34 = uVar2;
  if (iVar1 == 0) {
LAB_006847fa:
    local_34 = *(uint *)(unaff_EBP + -0x10);
    iStack_38 = 0x684805;
    FUN_006869a6();
    local_34 = uVar2;
  }
  goto LAB_00684769;
}


