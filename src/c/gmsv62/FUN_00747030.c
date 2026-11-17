/* FUN_00747030 - 0x00747030 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00747030(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int unaff_EBP;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piStack_44;
  int local_40;
  
  FUN_00879bb8();
  iVar1 = DAT_00978368;
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar5 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar5 == 0) {
    local_40 = unaff_EBP + -0x10;
    piStack_44 = (int *)0x7471a3;
    FUN_0085c828();
    if ((*(int *)(unaff_EBP + -0x10) != 0) &&
       (iVar5 = *(int *)(*(int *)(unaff_EBP + -0x10) + -4), iVar5 != 0)) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *(undefined4 *)(unaff_EBP + 8) = 3;
      goto LAB_00747205;
    }
    *(int ***)(unaff_EBP + 8) = &piStack_44;
    local_40 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_44 = extraout_ECX_03;
    FUN_00679d22(unaff_EBP + -0x28,0xa4);
    uVar8 = 0;
    uVar7 = 0xffffffff;
    uVar6 = 0xc;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    uVar3 = FUN_00449713(0xc,0xffffffff,0);
    FUN_00743a59(uVar3,uVar6,uVar7,uVar8);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else {
    if (iVar5 == 1) {
      local_40 = unaff_EBP + -0x10;
      piStack_44 = (int *)0x747135;
      FUN_0085c67a();
      if ((*(int *)(unaff_EBP + -0x10) == 0) ||
         (iVar5 = *(int *)(*(int *)(unaff_EBP + -0x10) + -4), iVar5 == 0)) {
        *(int ***)(unaff_EBP + 8) = &piStack_44;
        local_40 = 0;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        piStack_44 = extraout_ECX_02;
        FUN_00679d22(unaff_EBP + -0x24,0xa2);
        uVar8 = 0;
        uVar7 = 0xffffffff;
        uVar6 = 0xc;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        uVar3 = FUN_00449713(0xc,0xffffffff,0);
        FUN_00743a59(uVar3,uVar6,uVar7,uVar8);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        goto LAB_007472e4;
      }
      *(undefined4 *)(unaff_EBP + -0x18) = 1;
      *(undefined4 *)(unaff_EBP + 8) = 2;
    }
    else if (iVar5 == 2) {
      local_40 = unaff_EBP + -0x10;
      piStack_44 = (int *)0x7470c4;
      FUN_008568b2();
      if ((*(int *)(unaff_EBP + -0x10) == 0) ||
         (iVar5 = *(int *)(*(int *)(unaff_EBP + -0x10) + -4), iVar5 == 0)) {
        *(int ***)(unaff_EBP + 8) = &piStack_44;
        local_40 = 0;
        *(undefined1 *)(unaff_EBP + -4) = 7;
        piStack_44 = extraout_ECX_01;
        FUN_00679d22(unaff_EBP + -0x20,0xa5);
        uVar8 = 0;
        uVar7 = 0xffffffff;
        uVar6 = 0xc;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        uVar3 = FUN_00449713(0xc,0xffffffff,0);
        FUN_00743a59(uVar3,uVar6,uVar7,uVar8);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        goto LAB_007472e4;
      }
      *(undefined4 *)(unaff_EBP + -0x18) = 2;
      *(undefined4 *)(unaff_EBP + 8) = 4;
    }
    else if (iVar5 == 3) {
      local_40 = unaff_EBP + -0x10;
      *(undefined4 *)(unaff_EBP + -0x18) = 3;
      *(undefined4 *)(unaff_EBP + 8) = 5;
      piStack_44 = (int *)0x747086;
      FUN_0085820d();
      if ((*(int *)(unaff_EBP + -0x10) == 0) ||
         (iVar5 = *(int *)(*(int *)(unaff_EBP + -0x10) + -4), iVar5 == 0)) {
        *(int ***)(unaff_EBP + 8) = &piStack_44;
        local_40 = 0;
        piStack_44 = extraout_ECX_00;
        FUN_00743a59(s_There_are_no_guild_alliance_you_j_0096b6e4,0xc,0xffffffff,0);
        goto LAB_007472e9;
      }
    }
    else {
      iVar5 = *(int *)(unaff_EBP + 8);
    }
LAB_00747205:
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    iVar1 = *(int *)(iVar1 + 0x2098);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (iVar1 == 0) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
    }
    else {
      *(int *)(unaff_EBP + -0x14) = iVar1 + 4;
    }
    local_40 = 0x707;
    piStack_44 = (int *)(unaff_EBP + -0x2c);
    puVar4 = (undefined4 *)FUN_00679d22();
    piVar2 = *(int **)(unaff_EBP + 0xc);
    local_40 = *piVar2;
    uVar3 = *puVar4;
    piStack_44 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_00434e21(unaff_EBP + -0x1c,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    local_40 = 0x74725b;
    FUN_00414ebb();
    local_40 = *(int *)(unaff_EBP + 8);
    piStack_44 = (int *)(unaff_EBP + -0x1c);
    FUN_00471102();
    local_40 = 0;
    piStack_44 = (int *)0x0;
    FUN_0060142b(0x6b);
    local_40 = *(int *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    piStack_44 = (int *)0x747284;
    FUN_00457cda();
    piStack_44 = (int *)0x74728d;
    local_40 = iVar5;
    FUN_00457cda();
    *(undefined4 *)(unaff_EBP + 8) = 0;
    if (0 < iVar5) {
      do {
        local_40 = *(int *)(*(int *)(unaff_EBP + -0x10) + *(int *)(unaff_EBP + 8) * 4);
        piStack_44 = (int *)0x7472a5;
        FUN_00457d37();
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
      } while (*(int *)(unaff_EBP + 8) < iVar5);
    }
    *(int **)(unaff_EBP + 8) = &local_40;
    local_40 = 0;
    piStack_44 = piVar2;
    FUN_00414f8b();
    piStack_44 = (int *)0x7472c3;
    FUN_00459cb5();
    local_40 = unaff_EBP + -0x3c;
    piStack_44 = (int *)0x7472d2;
    FUN_004751b2();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    local_40 = 0x7472de;
    FUN_0045ebca();
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
LAB_007472e4:
  local_40 = 0x7472e9;
  FUN_00414ebb();
LAB_007472e9:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_40 = 0x7472f5;
  FUN_0047cf76();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


