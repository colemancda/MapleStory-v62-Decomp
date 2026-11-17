/* FUN_00844394 - 0x00844394 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00844394(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  
  FUN_00879bb8();
  local_40 = 0x8443af;
  iVar1 = FUN_007b3c5d();
  if (iVar1 != 0) goto LAB_0084472f;
  if ((*(int *)(DAT_00978358 + 0x4e0) == 0) && (*(int *)(DAT_00978358 + 0x4f4) == 0)) {
    if (DAT_00979178 == 0) {
      local_40 = 0x844414;
      iVar2 = FUN_007a5c95();
      iVar1 = 0;
      if (iVar2 == 0) goto LAB_0084472f;
      local_40 = 0x844421;
      iVar1 = FUN_00429303();
      iVar2 = 1;
      uVar3 = *(uint *)(iVar1 + 0x108) >> 7 & 1;
      *(uint *)(unaff_EBP + -0x20) = uVar3;
      if (uVar3 != 0) {
        local_40 = 0;
        iStack_44 = 0;
        iStack_48 = 0;
        iStack_4c = 0;
        *(undefined4 **)(unaff_EBP + 0xc) = &uStack_50;
        FUN_00679d22(&uStack_50,0x1c0);
        iVar1 = FUN_007db3ad();
        goto LAB_0084472f;
      }
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      iVar4 = *(int *)(unaff_EBP + 0xc) / 100;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      iVar1 = iVar4 / 10;
      iVar4 = iVar4 % 10;
      if (iVar4 == 0) {
        local_40 = 0xbc;
        iStack_44 = 0x84449e;
        iVar1 = FUN_004029b9();
        *(int *)(unaff_EBP + -0x20) = iVar1;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          local_40 = 0x8444b0;
          iVar1 = FUN_00844740();
        }
        uVar3 = -(uint)(iVar1 != 0) & iVar1 + 8U;
        *(uint *)(unaff_EBP + -0x28) = -(uint)(uVar3 != 0) & uVar3 - 8;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        local_40 = 0x8444d7;
        FUN_0084ebcc();
        *(undefined1 *)(unaff_EBP + -4) = 5;
        local_40 = 0x8444e3;
        iVar1 = FUN_004bc6a2();
        if (iVar1 != 1) {
          *(undefined1 *)(unaff_EBP + -4) = 3;
          local_40 = 0x8444f3;
          FUN_0084ebe9();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          if (*(int *)(unaff_EBP + -0x14) != 0) {
            local_40 = *(int *)(unaff_EBP + -0x14) + -0xc;
            iStack_44 = 0x844507;
            FUN_00434e38();
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          local_40 = *(int *)(unaff_EBP + -0x10);
          goto LAB_00844721;
        }
        local_40 = unaff_EBP + -0x18;
        iStack_44 = unaff_EBP + -0x14;
        iStack_48 = unaff_EBP + -0x10;
        iStack_4c = 0x844528;
        FUN_00697e41();
        local_40 = 0x844530;
        FUN_0084ebe9();
        *(undefined1 *)(unaff_EBP + -4) = 3;
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + 0xc) % 100;
        local_40 = 0x844548;
        FUN_0084ebe9();
LAB_008445e4:
        local_40 = 0;
        iStack_44 = 0;
        iStack_48 = 0x8445ee;
        FUN_0045ed72();
        iStack_44 = 0x8445f5;
        FUN_0045ee27();
        if ((*(char **)(unaff_EBP + -0x10) != (char *)0x0) &&
           (**(char **)(unaff_EBP + -0x10) != '\0')) {
          local_40 = 1;
          iStack_44 = 0;
          iStack_48 = 1;
          iStack_4c = 0x400;
          uStack_50 = 0x844618;
          iStack_48 = FUN_00415015();
          iStack_4c = 0x84461e;
          iVar1 = FUN_00471777();
          local_40 = -1;
          iStack_44 = 0x84462d;
          FUN_004150c0();
          local_40 = 0;
          iStack_44 = 0;
          if (iVar1 == 0) {
            iStack_48 = 0;
            iStack_4c = 0;
            *(undefined4 **)(unaff_EBP + 0xc) = &uStack_50;
            uStack_50 = extraout_ECX;
            FUN_00679d22(&uStack_50,0x11d);
            FUN_007db3ad();
          }
          else {
            iStack_48 = 0x6f;
            iStack_4c = 0x844662;
            FUN_0060142b();
            local_40 = 0;
            *(undefined1 *)(unaff_EBP + -4) = 8;
            iStack_44 = 0x84466f;
            FUN_00457cda();
            iStack_44 = 0x844678;
            local_40 = iVar2;
            FUN_00457cda();
            iStack_44 = unaff_EBP + -0x10;
            *(int **)(unaff_EBP + 0xc) = &local_40;
            local_40 = 0;
            iStack_48 = 0x844689;
            FUN_00414f8b();
            iStack_44 = 0x844691;
            FUN_00459cb5();
            local_40 = *(int *)(unaff_EBP + -0x18);
            iStack_44 = 0x84469c;
            FUN_00457cda();
            if (*(int *)(unaff_EBP + -0x18) != 0) {
              iStack_44 = unaff_EBP + -0x14;
              *(int **)(unaff_EBP + 0xc) = &local_40;
              local_40 = 0;
              iStack_48 = 0x8446b2;
              FUN_00414f8b();
              iStack_44 = 0x8446ba;
              FUN_00459cb5();
            }
            local_40 = *(int *)(unaff_EBP + -0x1c);
            iStack_44 = 0x8446c5;
            FUN_00457cda();
            local_40 = unaff_EBP + -0x3c;
            iStack_44 = 0x8446d4;
            FUN_004751b2();
            *(undefined1 *)(unaff_EBP + -4) = 3;
            local_40 = 0x8446e0;
            FUN_0045ebca();
          }
        }
      }
      else {
        if (iVar4 != 1) goto LAB_0084472f;
        local_40 = 0xc4;
        iStack_44 = 0x84455e;
        iVar1 = FUN_004029b9();
        *(int *)(unaff_EBP + 0xc) = iVar1;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          local_40 = 0x844570;
          iVar1 = FUN_00844925();
        }
        uVar3 = -(uint)(iVar1 != 0) & iVar1 + 8U;
        *(uint *)(unaff_EBP + -0x20) = -(uint)(uVar3 != 0) & uVar3 - 8;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        local_40 = 0x844597;
        FUN_0084ebff();
        *(undefined1 *)(unaff_EBP + -4) = 7;
        local_40 = 0x8445a3;
        iVar1 = FUN_004bc6a2();
        if (iVar1 == 1) {
          local_40 = unaff_EBP + -0x18;
          iStack_44 = unaff_EBP + -0x14;
          iStack_48 = unaff_EBP + -0x1c;
          iStack_4c = unaff_EBP + -0x10;
          uStack_50 = 0x8445d0;
          FUN_00698c3e();
          local_40 = 0x8445d8;
          FUN_0084ec1c();
          *(undefined1 *)(unaff_EBP + -4) = 3;
          local_40 = 0x8445e4;
          FUN_0084ec1c();
          iVar2 = 2;
          goto LAB_008445e4;
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
        local_40 = 0x8445b3;
        FUN_0084ec1c();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      local_40 = 0x8446ec;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      local_40 = 0x8446f8;
      iVar1 = FUN_00414ebb();
      goto LAB_0084472f;
    }
    local_40 = 0x9a;
    iStack_44 = unaff_EBP + 0xc;
    iStack_48 = 0x8443f2;
    iStack_44 = FUN_00679d22();
    local_40 = 0xc;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    iStack_48 = 0x844401;
    FUN_00471102();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    local_40 = *(int *)(unaff_EBP + 0xc);
  }
  else {
    local_40 = 0xd8b;
    iStack_44 = unaff_EBP + 0xc;
    iStack_48 = 0x84470d;
    iStack_44 = FUN_00679d22();
    local_40 = 0xc;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_48 = 0x844718;
    FUN_00471102();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    local_40 = *(int *)(unaff_EBP + 0xc);
  }
LAB_00844721:
  iVar1 = 0;
  if (local_40 != 0) {
    local_40 = local_40 + -0xc;
    iStack_44 = 0x84472e;
    iVar1 = FUN_00434e38();
  }
LAB_0084472f:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


