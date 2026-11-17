/* FUN_00459924 - 0x00459924 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00459924(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  char *extraout_ECX_03;
  int extraout_ECX_04;
  int unaff_EBP;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  char *pcStack_60;
  char *pcStack_5c;
  int local_58;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x40) == 0) {
    local_58 = 0x99;
    pcStack_5c = (char *)0x459947;
    FUN_00464f0d();
  }
  else if (*(int *)(extraout_ECX + 0x18) == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    local_58 = *(int *)(unaff_EBP + 8);
    pcStack_5c = (char *)(unaff_EBP + -0x3c);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    pcStack_60 = (char *)0x45996d;
    FUN_0084a5e4();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    local_58 = 0x45997c;
    local_58 = FUN_0045e2eb();
    pcStack_5c = (char *)(unaff_EBP + -0x14);
    pcStack_60 = (char *)0x45998c;
    FUN_0045a1d8();
    iVar3 = *(int *)(*(int *)(unaff_EBP + -0x38) + 0x20);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    *(int *)(unaff_EBP + -0x24) = iVar3;
    if (iVar3 != 0) {
      local_58 = *(int *)(extraout_ECX + 0x3c);
      pcStack_5c = (char *)(extraout_ECX + 0x34);
      *(undefined4 *)(unaff_EBP + -0x28) = 4;
      pcStack_60 = (char *)0x4599b0;
      iVar2 = FUN_00413367();
      iVar1 = local_58;
      if (iVar2 < iVar3) {
        local_58 = 0;
        pcStack_5c = (char *)0x0;
        pcStack_60 = (char *)0x0;
        iStack_64 = 0;
        iStack_68 = iVar1;
        *(int **)(unaff_EBP + 8) = &iStack_68;
        iStack_6c = -1;
        FUN_0045f0f3(s_You_don_t_have_enough_Nexon_Game_009643cc);
        iStack_6c = 0x4599d1;
        FUN_007db3ad();
      }
      else {
        local_58 = 0x4599db;
        iVar3 = FUN_007ee7a2();
        *(int *)(unaff_EBP + -0x2c) = iVar3;
        if (-1 < iVar3) {
          pcStack_5c = *(char **)(*(int *)(unaff_EBP + -0x38) + 0x1c);
          if (pcStack_5c == (char *)0x1) {
            local_58 = 0xf52;
            pcStack_5c = (char *)(unaff_EBP + -0x20);
            pcStack_60 = (char *)0x459a3e;
            puVar4 = (undefined4 *)FUN_00679d22();
            local_58 = *(int *)(unaff_EBP + -0x14);
            pcStack_5c = (char *)*puVar4;
            pcStack_60 = (char *)(unaff_EBP + -0x10);
            *(undefined1 *)(unaff_EBP + -4) = 3;
            iStack_64 = 0x459a51;
            FUN_00434e21();
            *(undefined1 *)(unaff_EBP + -4) = 2;
            iStack_68 = extraout_ECX_00;
            if (*(int *)(unaff_EBP + -0x20) != 0) {
              local_58 = *(int *)(unaff_EBP + -0x20) + -0xc;
              pcStack_5c = (char *)0x459a68;
              FUN_00434e38();
              iStack_68 = local_58;
            }
          }
          else {
            local_58 = *(int *)(unaff_EBP + -0x14);
            iStack_64 = unaff_EBP + -0x10;
            pcStack_60 = s_Would_you_like_to_gift_this_item_00964484;
            iStack_68 = 0x459a7d;
            FUN_00434e21();
            iStack_68 = extraout_ECX_01;
          }
          local_58 = 0;
          pcStack_5c = (char *)0x0;
          pcStack_60 = (char *)0x0;
          iStack_64 = 0;
          iStack_6c = unaff_EBP + -0x10;
          *(int **)(unaff_EBP + -0x30) = &iStack_68;
          FUN_00450368();
          iStack_6c = 0x459a98;
          iVar3 = FUN_007db791();
          if (iVar3 == 6) {
            local_58 = 0xac;
            pcStack_5c = (char *)0x459acb;
            iVar3 = FUN_004029b9();
            *(int *)(unaff_EBP + -0x30) = iVar3;
            *(undefined1 *)(unaff_EBP + -4) = 4;
            if (iVar3 == 0) {
              iVar3 = 0;
            }
            else {
              local_58 = 0x459add;
              iVar3 = FUN_0069b917();
            }
            uVar5 = -(uint)(iVar3 != 0) & iVar3 + 8U;
            *(uint *)(unaff_EBP + -0x40) = -(uint)(uVar5 != 0) & uVar5 - 8;
            *(undefined1 *)(unaff_EBP + -4) = 2;
            local_58 = 0x459b04;
            FUN_0045e725();
            *(undefined4 *)(unaff_EBP + -0x1c) = 0;
            *(undefined4 *)(unaff_EBP + -0x18) = 0;
            *(undefined1 *)(unaff_EBP + -4) = 7;
            do {
              local_58 = 0x459b1b;
              iVar3 = FUN_004bc6a2();
              if (iVar3 != 1) {
                local_58 = 0;
                pcStack_5c = (char *)0x0;
                pcStack_60 = (char *)0x0;
                iStack_64 = 0;
                *(int **)(unaff_EBP + 8) = &iStack_68;
                iStack_6c = -1;
                iStack_68 = extraout_ECX_02;
                FUN_0045f0f3(s_Not_ready_to_gift_items__Please_c_009643f8);
                iStack_6c = 0x459bb5;
                FUN_007db3ad();
                goto LAB_00459c54;
              }
              local_58 = -1;
              pcStack_5c = &DAT_00978474;
              pcStack_60 = (char *)0x459b2b;
              FUN_00414edd();
              local_58 = -1;
              pcStack_5c = &DAT_00978474;
              pcStack_60 = (char *)0x459b36;
              FUN_00414edd();
              local_58 = unaff_EBP + -0x18;
              pcStack_5c = (char *)(unaff_EBP + -0x1c);
              pcStack_60 = (char *)0x459b46;
              FUN_0069c81a();
              local_58 = *(int *)(unaff_EBP + -0x24);
              pcStack_60 = (char *)(unaff_EBP + -0x10);
              pcStack_5c = s_You_will_spend__d_Nexon_Game_Car_0096442c;
              iStack_64 = 0x459b57;
              FUN_00434e21();
              local_58 = 0;
              iStack_64 = unaff_EBP + -0x3c;
              *(char ***)(unaff_EBP + -0x30) = &pcStack_60;
              iStack_68 = 0x459b6b;
              pcStack_60 = extraout_ECX_03;
              pcStack_5c = extraout_ECX_03;
              FUN_0045e0ed();
              iStack_64 = unaff_EBP + -0x28;
              iStack_68 = 2;
              *(int **)(unaff_EBP + -0x34) = &iStack_6c;
              *(undefined1 *)(unaff_EBP + -4) = 8;
              iStack_6c = extraout_ECX_04;
              FUN_00450368(unaff_EBP + -0x10);
              *(undefined1 *)(unaff_EBP + -4) = 7;
              iVar3 = FUN_004592e2();
            } while (iVar3 != 1);
            local_58 = 0;
            pcStack_5c = (char *)0x0;
            pcStack_60 = (char *)0xc6;
            iStack_64 = 0x459bcc;
            FUN_0060142b();
            local_58 = 4;
            *(undefined1 *)(unaff_EBP + -4) = 9;
            pcStack_5c = (char *)0x459bda;
            FUN_00457cda();
            local_58 = *(int *)(unaff_EBP + -0x2c);
            pcStack_5c = (char *)0x459be5;
            FUN_00457d37();
            iVar3 = *(int *)(unaff_EBP + 8);
            pcStack_5c = (char *)0x459bf1;
            local_58 = iVar3;
            FUN_00457d37();
            pcStack_5c = (char *)(unaff_EBP + -0x1c);
            *(int **)(unaff_EBP + 8) = &local_58;
            local_58 = 0;
            pcStack_60 = (char *)0x459c02;
            FUN_00414f8b();
            pcStack_5c = (char *)0x459c0a;
            FUN_00459cb5();
            pcStack_5c = (char *)(unaff_EBP + -0x18);
            *(int **)(unaff_EBP + 8) = &local_58;
            local_58 = 0;
            pcStack_60 = (char *)0x459c1b;
            FUN_00414f8b();
            pcStack_5c = (char *)0x459c23;
            FUN_00459cb5();
            local_58 = unaff_EBP + -0x54;
            pcStack_5c = (char *)0x459c32;
            FUN_004751b2();
            *(undefined4 *)(extraout_ECX + 0x18) = 1;
            if (*(int *)(extraout_ECX + 0x500) == 9) {
              *(int *)(extraout_ECX + 0x4c4) = iVar3;
            }
            *(undefined1 *)(unaff_EBP + -4) = 7;
            local_58 = 0x459c54;
            FUN_0045ebca();
LAB_00459c54:
            *(undefined1 *)(unaff_EBP + -4) = 6;
            local_58 = 0x459c60;
            FUN_00414ebb();
            *(undefined1 *)(unaff_EBP + -4) = 5;
            local_58 = 0x459c6c;
            FUN_00414ebb();
            *(undefined1 *)(unaff_EBP + -4) = 2;
            local_58 = 0x459c78;
            FUN_0045e742();
            *(undefined1 *)(unaff_EBP + -4) = 1;
            local_58 = 0x459c84;
            FUN_00414ebb();
            *(undefined1 *)(unaff_EBP + -4) = 0;
            if (*(int *)(unaff_EBP + -0x38) != 0) {
              local_58 = 0;
              pcStack_5c = (char *)0x459c95;
              FUN_0045e794();
              *(undefined4 *)(unaff_EBP + -0x38) = 0;
            }
          }
          else {
            *(undefined1 *)(unaff_EBP + -4) = 1;
            local_58 = 0x459aac;
            FUN_00414ebb();
            *(undefined1 *)(unaff_EBP + -4) = 0;
            local_58 = 0x459ab7;
            FUN_0045e46f();
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          local_58 = 0x459ca4;
          FUN_00414ebb();
          goto LAB_00459ca4;
        }
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      local_58 = *(int *)(unaff_EBP + -0x14) + -0xc;
      pcStack_5c = (char *)0x4599f6;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    local_58 = 0x459a02;
    FUN_0045e46f();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      local_58 = *(int *)(unaff_EBP + -0x10) + -0xc;
      pcStack_5c = (char *)0x459a1a;
      FUN_00434e38();
    }
  }
LAB_00459ca4:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


