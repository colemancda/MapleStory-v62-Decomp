/* FUN_0045ac93 - 0x0045ac93 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0045ac93(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  undefined4 uStack_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  int local_54;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x18) == 0) {
    local_54 = 0x45acb5;
    iVar1 = FUN_007ee7a2();
    *(int *)(unaff_EBP + -0x28) = iVar1;
    if (-1 < iVar1) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      local_54 = *(int *)(unaff_EBP + 8);
      iStack_58 = unaff_EBP + -0x38;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      uStack_5c = 0x45acd8;
      FUN_0084a5e4();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      local_54 = 0x45ace7;
      local_54 = FUN_0045e2eb();
      iStack_58 = unaff_EBP + -0x1c;
      uStack_5c = 0x45acf7;
      FUN_0045a1d8();
      iVar1 = *(int *)(*(int *)(unaff_EBP + -0x34) + 0x20);
      local_54 = *(int *)(extraout_ECX + 0x24);
      iStack_58 = extraout_ECX + 0x1c;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      uStack_5c = 0x45ad10;
      iVar2 = FUN_00413367();
      if (iVar1 <= iVar2) {
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 1;
      }
      local_54 = *(int *)(extraout_ECX + 0x3c);
      iStack_58 = extraout_ECX + 0x34;
      uStack_5c = 0x45ad26;
      iVar3 = FUN_00413367();
      iVar2 = local_54;
      if (iVar1 <= iVar3) {
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 4;
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        local_54 = 0;
        iStack_58 = 0;
        uStack_5c = 0;
        iStack_60 = 0;
        iStack_64 = iVar2;
        *(int **)(unaff_EBP + 8) = &iStack_64;
        uStack_68 = 0x224;
        FUN_00679d22(&iStack_64);
        uStack_68 = 0x45ad54;
        FUN_007db3ad();
      }
      else {
        local_54 = 0xac;
        iStack_58 = 0x45ad68;
        iVar2 = FUN_004029b9();
        *(int *)(unaff_EBP + -0x24) = iVar2;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          local_54 = 0x45ad7a;
          iVar2 = FUN_0069b917();
        }
        uVar4 = -(uint)(iVar2 != 0) & iVar2 + 8U;
        *(uint *)(unaff_EBP + -0x3c) = -(uint)(uVar4 != 0) & uVar4 - 8;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        local_54 = 0x45ada1;
        FUN_0045e725();
        *(undefined1 *)(unaff_EBP + -4) = 4;
        local_54 = 0x45adad;
        iVar2 = FUN_004bc6a2();
        if (iVar2 == 1) {
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          *(undefined4 *)(unaff_EBP + -0x20) = 0;
          local_54 = unaff_EBP + -0x20;
          iStack_58 = unaff_EBP + -0x18;
          *(undefined1 *)(unaff_EBP + -4) = 6;
          uStack_5c = 0x45ae16;
          FUN_0069c81a();
          local_54 = 0x20d;
          iStack_58 = unaff_EBP + -0x24;
          uStack_5c = 0x45ae29;
          puVar5 = (undefined4 *)FUN_00679d22();
          local_54 = *(int *)(unaff_EBP + -0x18);
          iStack_60 = *puVar5;
          uStack_5c = *(undefined4 *)(unaff_EBP + -0x1c);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          iStack_64 = unaff_EBP + -0x14;
          uStack_68 = 0x45ae40;
          iStack_58 = iVar1;
          FUN_00434e21();
          *(undefined1 *)(unaff_EBP + -4) = 6;
          local_54 = 0x45ae4f;
          FUN_00414ebb();
          local_54 = 0;
          iStack_60 = unaff_EBP + -0x38;
          *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_5c;
          iStack_64 = 0x45ae60;
          uStack_5c = extraout_ECX_00;
          iStack_58 = extraout_ECX_00;
          FUN_0045e0ed();
          iStack_60 = unaff_EBP + -0x10;
          iStack_64 = 2;
          *(undefined4 **)(unaff_EBP + -0x30) = &uStack_68;
          *(undefined1 *)(unaff_EBP + -4) = 8;
          FUN_00450368(unaff_EBP + -0x14);
          *(undefined1 *)(unaff_EBP + -4) = 6;
          iVar1 = FUN_004592e2();
          if (iVar1 == 1) {
            local_54 = 0;
            iStack_58 = 0;
            uStack_5c = 0xc6;
            iStack_60 = 0x45ae9f;
            FUN_0060142b();
            local_54 = 0x21;
            *(undefined1 *)(unaff_EBP + -4) = 9;
            iStack_58 = 0x45aead;
            FUN_00457cda();
            local_54 = *(int *)(unaff_EBP + -0x28);
            iStack_58 = 0x45aeb8;
            FUN_00457d37();
            local_54 = *(int *)(unaff_EBP + -0x10);
            iStack_58 = 0x45aec3;
            FUN_00457d37();
            local_54 = *(int *)(unaff_EBP + 8);
            iStack_58 = 0x45aece;
            FUN_00457d37();
            iStack_58 = unaff_EBP + -0x18;
            *(int **)(unaff_EBP + -0x30) = &local_54;
            local_54 = 0;
            uStack_5c = 0x45aedf;
            FUN_00414f8b();
            iStack_58 = 0x45aee7;
            FUN_00459cb5();
            iStack_58 = unaff_EBP + -0x20;
            *(int **)(unaff_EBP + -0x30) = &local_54;
            local_54 = 0;
            uStack_5c = 0x45aef8;
            FUN_00414f8b();
            iStack_58 = 0x45af00;
            FUN_00459cb5();
            local_54 = unaff_EBP + -0x50;
            iStack_58 = 0x45af0f;
            FUN_004751b2();
            *(undefined4 *)(extraout_ECX + 0x18) = 1;
            if (*(int *)(extraout_ECX + 0x500) == 9) {
              *(undefined4 *)(extraout_ECX + 0x4c4) = *(undefined4 *)(unaff_EBP + 8);
            }
            *(undefined1 *)(unaff_EBP + -4) = 6;
            local_54 = 0x45af30;
            FUN_0045ebca();
          }
          *(undefined1 *)(unaff_EBP + -4) = 5;
          local_54 = 0x45af3c;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 4;
          local_54 = 0x45af48;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          local_54 = 0x45af54;
          FUN_0045e742();
          *(undefined1 *)(unaff_EBP + -4) = 1;
          local_54 = 0x45af60;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (*(int *)(unaff_EBP + -0x34) != 0) {
            local_54 = 0;
            iStack_58 = 0x45af71;
            FUN_0045e794();
            *(undefined4 *)(unaff_EBP + -0x34) = 0;
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          local_54 = 0x45af80;
          FUN_00414ebb();
          goto LAB_0045af80;
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        local_54 = 0x45adbe;
        FUN_0045e742();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        local_54 = *(int *)(unaff_EBP + -0x1c) + -0xc;
        iStack_58 = 0x45add2;
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      local_54 = 0x45adde;
      FUN_0045e46f();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        local_54 = *(int *)(unaff_EBP + -0x14) + -0xc;
        iStack_58 = 0x45adf6;
        FUN_00434e38();
      }
    }
  }
LAB_0045af80:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


