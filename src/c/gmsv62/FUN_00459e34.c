/* FUN_00459e34 - 0x00459e34 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00459e34(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int unaff_EBP;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  char *pcStack_5c;
  int local_58;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x40) == 0) {
    local_58 = 0x99;
    pcStack_5c = (char *)0x459e57;
    FUN_00464f0d();
    goto LAB_0045a1c7;
  }
  if (*(int *)(extraout_ECX + 0x18) != 0) goto LAB_0045a1c7;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  local_58 = *(int *)(unaff_EBP + 8);
  pcStack_5c = (char *)(unaff_EBP + -0x3c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_60 = 0x459e7d;
  FUN_0084a5e4();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    local_58 = 0x459e90;
    iVar1 = FUN_0045e2eb();
    if (iVar1 / 10000 != 0x38e) {
      local_58 = 0;
      pcStack_5c = (char *)0x0;
      iStack_60 = 0;
      iStack_64 = 0;
      iStack_68 = 10000;
      *(int **)(unaff_EBP + -0x2c) = &iStack_68;
      iStack_6c = 0x239;
      FUN_00679d22(&iStack_68);
      iStack_6c = 0x459ebe;
      iVar1 = FUN_007db3ad();
      if (iVar1 != 0) goto LAB_00459edd;
    }
    local_58 = 0x459ed0;
    FUN_0045e2eb();
    iVar1 = *(int *)(*(int *)(unaff_EBP + -0x38) + 0x20);
    *(int *)(unaff_EBP + -0x20) = iVar1;
    if (iVar1 != 0) {
      local_58 = 0x459f14;
      local_58 = FUN_0045e2eb();
      pcStack_5c = (char *)(unaff_EBP + -0x14);
      iStack_60 = 0x459f20;
      FUN_00556acf();
      local_58 = *(int *)(extraout_ECX + 0x3c);
      pcStack_5c = (char *)(extraout_ECX + 0x34);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      *(undefined4 *)(unaff_EBP + -0x28) = 4;
      iStack_60 = 0x459f37;
      iVar2 = FUN_00413367();
      iVar1 = local_58;
      if (iVar2 < *(int *)(unaff_EBP + -0x20)) {
        local_58 = 0;
        pcStack_5c = (char *)0x0;
        iStack_60 = 0;
        iStack_64 = 0;
        iStack_68 = iVar1;
        *(int **)(unaff_EBP + 8) = &iStack_68;
        iStack_6c = -1;
        FUN_0045f0f3(s_You_don_t_have_enough_Nexon_Game_009643cc);
        iStack_6c = 0x459f59;
        FUN_007db3ad();
LAB_00459f6a:
        *(undefined1 *)(unaff_EBP + -4) = 1;
        local_58 = 0x459f76;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        local_58 = 0x459f81;
        FUN_0045e46f();
      }
      else {
        local_58 = 0x459f63;
        iVar1 = FUN_007ee7a2();
        *(int *)(unaff_EBP + -0x2c) = iVar1;
        if (iVar1 < 0) goto LAB_00459f6a;
        local_58 = 0xf52;
        pcStack_5c = (char *)(unaff_EBP + -0x24);
        iStack_60 = 0x459f99;
        puVar3 = (undefined4 *)FUN_00679d22();
        local_58 = *(int *)(unaff_EBP + -0x14);
        pcStack_5c = (char *)*puVar3;
        iStack_60 = unaff_EBP + -0x10;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iStack_64 = 0x459fac;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        local_58 = 0x459fbb;
        FUN_00414ebb();
        local_58 = 0;
        pcStack_5c = (char *)0x0;
        iStack_60 = 0;
        iStack_64 = 0;
        iStack_6c = unaff_EBP + -0x10;
        *(int **)(unaff_EBP + -0x30) = &iStack_68;
        iStack_68 = extraout_ECX_00;
        FUN_00450368();
        iStack_6c = 0x459fd3;
        iVar1 = FUN_007db791();
        if (iVar1 == 6) {
          local_58 = 0xac;
          pcStack_5c = (char *)0x459fee;
          iVar1 = FUN_004029b9();
          *(int *)(unaff_EBP + -0x30) = iVar1;
          *(undefined1 *)(unaff_EBP + -4) = 4;
          if (iVar1 == 0) {
            iVar1 = 0;
          }
          else {
            local_58 = 0x45a000;
            iVar1 = FUN_0069b917();
          }
          uVar4 = -(uint)(iVar1 != 0) & iVar1 + 8U;
          *(uint *)(unaff_EBP + -0x40) = -(uint)(uVar4 != 0) & uVar4 - 8;
          *(undefined1 *)(unaff_EBP + -4) = 2;
          local_58 = 0x45a027;
          FUN_0045e725();
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 7;
          do {
            local_58 = 0x45a03e;
            iVar1 = FUN_004bc6a2();
            if (iVar1 != 1) {
              local_58 = 0;
              pcStack_5c = (char *)0x0;
              iStack_60 = 0;
              iStack_64 = 0;
              *(int **)(unaff_EBP + 8) = &iStack_68;
              iStack_6c = -1;
              iStack_68 = extraout_ECX_01;
              FUN_0045f0f3(s_Not_ready_to_gift_items__Please_c_009643f8);
              iStack_6c = 0x45a0d8;
              FUN_007db3ad();
              goto LAB_0045a177;
            }
            local_58 = -1;
            pcStack_5c = &DAT_00978474;
            iStack_60 = 0x45a04e;
            FUN_00414edd();
            local_58 = -1;
            pcStack_5c = &DAT_00978474;
            iStack_60 = 0x45a059;
            FUN_00414edd();
            local_58 = unaff_EBP + -0x18;
            pcStack_5c = (char *)(unaff_EBP + -0x1c);
            iStack_60 = 0x45a069;
            FUN_0069c81a();
            local_58 = *(int *)(unaff_EBP + -0x20);
            iStack_60 = unaff_EBP + -0x10;
            pcStack_5c = s_You_will_spend__d_Nexon_Game_Car_009644bc;
            iStack_64 = 0x45a07a;
            FUN_00434e21();
            local_58 = 0;
            iStack_64 = unaff_EBP + -0x3c;
            *(int **)(unaff_EBP + -0x30) = &iStack_60;
            iStack_68 = 0x45a08e;
            iStack_60 = extraout_ECX_02;
            pcStack_5c = (char *)extraout_ECX_02;
            FUN_0045e0ed();
            iStack_64 = unaff_EBP + -0x28;
            iStack_68 = 2;
            *(int **)(unaff_EBP + -0x34) = &iStack_6c;
            *(undefined1 *)(unaff_EBP + -4) = 8;
            iStack_6c = extraout_ECX_03;
            FUN_00450368(unaff_EBP + -0x10);
            *(undefined1 *)(unaff_EBP + -4) = 7;
            iVar1 = FUN_004592e2();
          } while (iVar1 != 1);
          local_58 = 0;
          pcStack_5c = (char *)0x0;
          iStack_60 = 0xc6;
          iStack_64 = 0x45a0ef;
          FUN_0060142b();
          local_58 = 0x1d;
          *(undefined1 *)(unaff_EBP + -4) = 9;
          pcStack_5c = (char *)0x45a0fd;
          FUN_00457cda();
          local_58 = *(int *)(unaff_EBP + -0x2c);
          pcStack_5c = (char *)0x45a108;
          FUN_00457d37();
          iVar1 = *(int *)(unaff_EBP + 8);
          pcStack_5c = (char *)0x45a114;
          local_58 = iVar1;
          FUN_00457d37();
          pcStack_5c = (char *)(unaff_EBP + -0x1c);
          *(int **)(unaff_EBP + 8) = &local_58;
          local_58 = 0;
          iStack_60 = 0x45a125;
          FUN_00414f8b();
          pcStack_5c = (char *)0x45a12d;
          FUN_00459cb5();
          pcStack_5c = (char *)(unaff_EBP + -0x18);
          *(int **)(unaff_EBP + 8) = &local_58;
          local_58 = 0;
          iStack_60 = 0x45a13e;
          FUN_00414f8b();
          pcStack_5c = (char *)0x45a146;
          FUN_00459cb5();
          local_58 = unaff_EBP + -0x54;
          pcStack_5c = (char *)0x45a155;
          FUN_004751b2();
          *(undefined4 *)(extraout_ECX + 0x18) = 1;
          if (*(int *)(extraout_ECX + 0x500) == 9) {
            *(int *)(extraout_ECX + 0x4c4) = iVar1;
          }
          *(undefined1 *)(unaff_EBP + -4) = 7;
          local_58 = 0x45a177;
          FUN_0045ebca();
LAB_0045a177:
          *(undefined1 *)(unaff_EBP + -4) = 6;
          local_58 = 0x45a183;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 5;
          local_58 = 0x45a18f;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          local_58 = 0x45a19b;
          FUN_0045e742();
        }
        *(undefined1 *)(unaff_EBP + -4) = 1;
        local_58 = 0x45a1a7;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x38) != 0) {
          local_58 = 0;
          pcStack_5c = (char *)0x45a1b8;
          FUN_0045e794();
          *(undefined4 *)(unaff_EBP + -0x38) = 0;
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      local_58 = 0x45a1c7;
      FUN_00414ebb();
      goto LAB_0045a1c7;
    }
  }
LAB_00459edd:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  local_58 = 0x459ee8;
  FUN_0045e46f();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    local_58 = *(int *)(unaff_EBP + -0x10) + -0xc;
    pcStack_5c = (char *)0x459f00;
    FUN_00434e38();
  }
LAB_0045a1c7:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


