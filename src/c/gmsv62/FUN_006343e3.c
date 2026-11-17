/* FUN_006343e3 - 0x006343e3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006343e3(void)

{
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  uint uVar2;
  uint uVar3;
  int unaff_EBP;
  int iStack_24;
  int local_20;
  
  FUN_00879bb8();
  uVar3 = *(uint *)(extraout_ECX + 0x24);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  do {
    if (uVar3 == 0) {
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    iVar1 = *(int *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 4);
    uVar2 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(uVar3 + 4);
    local_20 = 0x63442e;
    FUN_00635848();
    local_20 = *(int *)(unaff_EBP + -0x18);
    iVar1 = *(int *)(local_20 + 0x30);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 == 1) {
      iVar1 = *(int *)(local_20 + 0x28);
      if ((iVar1 != 0) && (*(int *)(unaff_EBP + 8) != iVar1 && -1 < *(int *)(unaff_EBP + 8) - iVar1)
         ) {
        *(undefined4 *)(local_20 + 0x28) = 0;
        local_20 = *(undefined4 *)(unaff_EBP + -0x18);
        *(int **)(unaff_EBP + -0x14) = &iStack_24;
        iStack_24 = iVar1;
        FUN_00635848();
        FUN_006345e0();
        local_20 = *(int *)(unaff_EBP + -0x18);
        if (*(int *)(local_20 + 0x30) != 0) {
          *(uint *)(local_20 + 0x30) = (*(int *)(local_20 + 0x24) == -2) + 2;
          goto LAB_00634559;
        }
      }
      goto LAB_0063455c;
    }
    if (iVar1 == 2) {
      if (*(int *)(local_20 + 0x38) == 0) {
        local_20 = 0x80004003;
        iStack_24 = 0x6344e9;
        FUN_00878dfb();
      }
      local_20 = 0x6344f0;
      iVar1 = FUN_00432a57();
      if (iVar1 == 0) {
        local_20 = *(undefined4 *)(unaff_EBP + -0x18);
        *(int **)(unaff_EBP + -0x14) = &iStack_24;
        iStack_24 = extraout_ECX_01;
        FUN_00635848();
        FUN_006345e0();
        *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x30) = 0;
      }
LAB_00634559:
      local_20 = *(int *)(unaff_EBP + -0x18);
    }
    else if (iVar1 == 3) {
      if (*(int *)(local_20 + 0x24) != -2) {
        *(undefined4 *)(local_20 + 0x30) = 2;
        goto LAB_00634559;
      }
    }
    else if ((iVar1 == 4) &&
            (iVar1 = *(int *)(local_20 + 0x28), -1 < *(int *)(unaff_EBP + 8) - iVar1)) {
      if (iVar1 != 0) {
        *(int **)(unaff_EBP + -0x14) = &iStack_24;
        iStack_24 = iVar1;
        FUN_00635848();
        FUN_006345e0();
        *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x28) = 0;
        local_20 = *(int *)(unaff_EBP + -0x18);
      }
      if (*(int *)(local_20 + 0x38) == 0) {
        local_20 = 0x80004003;
        iStack_24 = 0x634493;
        FUN_00878dfb();
      }
      local_20 = 0x63449a;
      iVar1 = FUN_00432a57();
      if (iVar1 == 0) {
        local_20 = *(undefined4 *)(unaff_EBP + -0x18);
        *(int **)(unaff_EBP + -0x14) = &iStack_24;
        iStack_24 = extraout_ECX_00;
        FUN_00635848();
        FUN_0063458a();
      }
      goto LAB_00634559;
    }
LAB_0063455c:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar3 = uVar2;
    if (local_20 != 0) {
      local_20 = 0;
      iStack_24 = 0x634571;
      FUN_00635891();
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    }
  } while( true );
}


