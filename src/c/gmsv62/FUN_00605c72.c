/* FUN_00605c72 - 0x00605c72 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00605c72(void)

{
  int iVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  uint local_38;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x10) == 0) {
    local_38 = 0x515450;
    iStack_3c = 0x605c9b;
    iVar1 = FUN_008496ef();
    *(int *)(extraout_ECX + 0x10) = iVar1;
    if (iVar1 != 0) goto LAB_00605cb3;
    *(undefined4 **)(unaff_EBP + -0x24) = &uStack_48;
    uVar3 = 0xeef;
  }
  else {
LAB_00605cb3:
    if ((*(int *)(extraout_ECX + 4) != 0) || (*(int *)(extraout_ECX + 0x18) != 0)) {
      local_38 = unaff_EBP - 0x14;
      iStack_3c = 0x605cf6;
      FUN_0045b90e();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if ((*(char **)(unaff_EBP + -0x14) == (char *)0x0) || (**(char **)(unaff_EBP + -0x14) == '\0')
         ) {
        local_38 = 0;
        iStack_3c = 0;
        iStack_40 = 0;
        uStack_44 = 0;
        *(undefined4 **)(unaff_EBP + -0x24) = &uStack_48;
        FUN_00679d22(&uStack_48,0xef1);
        FUN_007db3ad();
      }
      else {
        local_38 = unaff_EBP - 0x10;
        iStack_3c = 0x605d3d;
        FUN_00605efb();
        local_38 = 0;
        iStack_3c = 0;
        iStack_40 = 1;
        uStack_44 = 0x400;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        uStack_48 = 0x605d52;
        iStack_40 = FUN_00415015();
        uStack_44 = 0x605d58;
        iVar1 = FUN_00471777();
        local_38 = 0xffffffff;
        iStack_3c = 0x605d67;
        FUN_004150c0();
        if (iVar1 == 0) {
          local_38 = 0;
          iStack_3c = 0;
          iStack_40 = 0;
          uStack_44 = 0;
          *(undefined4 **)(unaff_EBP + -0x24) = &uStack_48;
          FUN_00679d22(&uStack_48,0x11d);
          FUN_007db3ad();
        }
        else {
          local_38 = 0xef2;
          iStack_3c = unaff_EBP + -0x20;
          iStack_40 = 0x605da5;
          puVar2 = (undefined4 *)FUN_00679d22();
          uVar3 = *puVar2;
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
          local_38 = *(uint *)(extraout_ECX + 0x18);
          *(undefined1 *)(unaff_EBP + -4) = 3;
          iStack_3c = 0x605db6;
          local_38 = FUN_00602ca9();
          iStack_40 = unaff_EBP + -0x1c;
          uStack_44 = 0x605dc2;
          iStack_3c = uVar3;
          local_38 = FUN_00434e21();
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          iStack_3c = 0x605dd1;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 6;
          local_38 = 0x605ddd;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 5;
          local_38 = 0x605de9;
          FUN_00414ebb();
          local_38 = 0;
          iStack_3c = 0;
          iStack_40 = 0;
          uStack_44 = 0;
          *(undefined4 **)(unaff_EBP + -0x24) = &uStack_48;
          FUN_00450368(unaff_EBP + -0x18);
          iVar1 = FUN_007db791();
          if (iVar1 == 6) {
            local_38 = 0;
            iStack_3c = 0;
            iStack_40 = 0x3d;
            uStack_44 = 0x605e19;
            FUN_0060142b();
            local_38 = 2;
            *(undefined1 *)(unaff_EBP + -4) = 7;
            iStack_3c = 0x605e27;
            FUN_00457cda();
            local_38 = (uint)*(byte *)(extraout_ECX + 8);
            iStack_3c = 0x605e35;
            FUN_00457cda();
            local_38 = (uint)*(ushort *)(extraout_ECX + 0xc);
            iStack_3c = 0x605e44;
            FUN_0045d247();
            local_38 = (uint)*(ushort *)(extraout_ECX + 0x14);
            iStack_3c = 0x605e53;
            FUN_0045d247();
            local_38 = *(uint *)(extraout_ECX + 0x18);
            iStack_3c = 0x605e5e;
            FUN_00457d37();
            iStack_3c = unaff_EBP + -0x14;
            *(uint **)(unaff_EBP + -0x24) = &local_38;
            local_38 = 0;
            iStack_40 = 0x605e6f;
            FUN_00414f8b();
            iStack_3c = 0x605e77;
            FUN_00459cb5();
            local_38 = 1;
            iStack_3c = 0x605e81;
            FUN_00457cda();
            iStack_3c = unaff_EBP + -0x10;
            *(uint **)(unaff_EBP + -0x24) = &local_38;
            local_38 = 0;
            iStack_40 = 0x605e92;
            FUN_00414f8b();
            iStack_3c = 0x605e9a;
            FUN_00459cb5();
            local_38 = *(uint *)(extraout_ECX + 0x10);
            iStack_3c = 0x605ea5;
            FUN_00457d37();
            local_38 = unaff_EBP - 0x34;
            iStack_3c = 0x605eb4;
            FUN_004751b2();
            local_38 = 0;
            iStack_3c = 0x605ebd;
            FUN_00609358();
            *(undefined1 *)(unaff_EBP + -4) = 5;
            local_38 = 0x605ec9;
            FUN_0045ebca();
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
          local_38 = 0x605ed5;
          FUN_00414ebb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        local_38 = 0x605ee0;
        FUN_00414ebb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      local_38 = 0x605eec;
      FUN_00414ebb();
      goto LAB_00605eec;
    }
    *(undefined4 **)(unaff_EBP + -0x24) = &uStack_48;
    uVar3 = 0xef0;
  }
  local_38 = 0;
  iStack_3c = 0;
  iStack_40 = 0;
  uStack_44 = 0;
  FUN_00679d22(&uStack_48,uVar3);
  FUN_007db3ad();
LAB_00605eec:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


