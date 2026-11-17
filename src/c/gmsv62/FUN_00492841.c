/* FUN_00492841 - 0x00492841 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00492841(void)

{
  undefined4 *puVar1;
  int extraout_ECX;
  int unaff_EBP;
  int iVar2;
  undefined4 uVar3;
  int local_28;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0x210);
  if (*(int *)(iVar2 + 0x500) == 10) {
    *(undefined4 *)(extraout_ECX + 0x738) = 1;
    local_28 = 1;
    iVar2 = *(uint *)(iVar2 + 0x51c) / 10 + 1;
    FUN_004ae18f(iVar2,10,1);
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar2 != 0) {
      do {
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        local_28 = 0x3bc;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18);
        uVar3 = *puVar1;
        local_28 = *(int *)(unaff_EBP + -0x14) + 1;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        *(int *)(unaff_EBP + -0x1c) = local_28;
        FUN_00434e21(unaff_EBP + -0x10,uVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        local_28 = 0x4928da;
        FUN_00414ebb();
        *(int **)(unaff_EBP + -0x24) = &local_28;
        local_28 = 0;
        FUN_00414f8b(unaff_EBP + -0x10);
        uVar3 = *(undefined4 *)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00495c22(uVar3);
        FUN_004ae1d9(uVar3);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        local_28 = 0x49290c;
        FUN_00414ebb();
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x1c);
      } while (*(int *)(unaff_EBP + -0x1c) < iVar2);
    }
  }
  else {
    local_28 = *(int *)(iVar2 + 0x504);
    iVar2 = FUN_0045c1ad(*(int *)(iVar2 + 0x500));
    if (iVar2 < 0) {
      local_28 = 1;
      FUN_004ae18f(0,10,1);
    }
    else {
      iVar2 = iVar2 * 0x1c + *(int *)(*(int *)(extraout_ECX + 0x210) + 0x44);
      iVar2 = ((*(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 0x18)) + 9) / 10;
      local_28 = 1;
      *(int *)(unaff_EBP + -0x10) = iVar2;
      FUN_004ae18f(iVar2,10,1);
      iVar2 = 0;
      if (0 < *(int *)(unaff_EBP + -0x10)) {
        do {
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
          local_28 = 0x3bc;
          *(undefined4 *)(unaff_EBP + -4) = 3;
          puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x20);
          uVar3 = *puVar1;
          local_28 = iVar2 + 1;
          *(undefined1 *)(unaff_EBP + -4) = 4;
          *(int *)(unaff_EBP + -0x1c) = local_28;
          FUN_00434e21(unaff_EBP + -0x14,uVar3);
          *(undefined1 *)(unaff_EBP + -4) = 3;
          local_28 = 0x4929ba;
          FUN_00414ebb();
          *(int **)(unaff_EBP + -0x24) = &local_28;
          local_28 = 0;
          FUN_00414f8b(unaff_EBP + -0x14);
          *(undefined1 *)(unaff_EBP + -4) = 3;
          FUN_00495c22(iVar2);
          FUN_004ae1d9(iVar2);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          local_28 = 0x4929eb;
          FUN_00414ebb();
          iVar2 = *(int *)(unaff_EBP + -0x1c);
        } while (iVar2 < *(int *)(unaff_EBP + -0x10));
      }
    }
  }
  local_28 = 0x4929fb;
  thunk_FUN_004aea12();
  local_28 = 0;
  FUN_008161f1();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


