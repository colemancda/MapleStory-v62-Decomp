/* FUN_0083a768 - 0x0083a768 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0083a768(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar4;
  undefined1 *puStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_34;
  
  FUN_00879bb8();
  local_34 = unaff_EBP + -0x18;
  uStack_38 = 0x83a783;
  iVar1 = FUN_00455c59();
  iVar1 = *(int *)(iVar1 + 4);
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    local_34 = 0;
    uStack_38 = 0x83a796;
    FUN_0045e7c2();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  local_34 = 4;
  uStack_38 = 0x83a7a2;
  iVar2 = FUN_004c10d7();
  if (iVar2 < 1) {
    *(undefined1 ***)(unaff_EBP + 0xc) = &puStack_44;
    uVar4 = 0x1050;
  }
  else {
    if (*(int *)(extraout_ECX + 0x202c) != 0) goto LAB_0083a96d;
    if (*(int *)(iVar1 + 0x4a7) == 0) {
      if (DAT_00979178 == 0) {
        local_34 = 0x69c;
        uStack_38 = 0x83a826;
        iVar1 = FUN_004029b9();
        *(int *)(unaff_EBP + -0x10) = iVar1;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          local_34 = 0x83a837;
          iVar1 = FUN_007e62e9();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        uVar3 = -(uint)(iVar1 != 0) & iVar1 + 8U;
        *(uint *)(unaff_EBP + -0x1c) = -(uint)(uVar3 != 0) & uVar3 - 8;
        local_34 = 0x83a85e;
        FUN_004c26c4();
        local_34 = 0;
        uStack_38 = 1;
        puStack_44 = (undefined1 *)&uStack_3c;
        *(undefined4 **)(unaff_EBP + -0x10) = &uStack_3c;
        uStack_40 = 0x1051;
        *(undefined4 *)(unaff_EBP + -4) = 1;
        FUN_00679d22();
        uStack_40 = 0;
        puStack_44 = (undefined1 *)0x3;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_004c2677();
        FUN_007eddac();
        local_34 = 0;
        uStack_38 = 0;
        uStack_3c = 0xc;
        uStack_40 = 4;
        puStack_44 = &DAT_00978474;
        FUN_007edfe1();
        local_34 = 0x83a8ac;
        FUN_007e6e3c();
        local_34 = 0x83a8b4;
        iVar1 = FUN_004bc6a2();
        if (iVar1 == 1) {
          local_34 = 0;
          uStack_38 = 0;
          uStack_3c = 0x7d;
          uStack_40 = 0x83a8c8;
          FUN_0060142b();
          local_34 = 0;
          *(undefined1 *)(unaff_EBP + -4) = 3;
          uStack_38 = 0x83a8d5;
          FUN_00457cda();
          local_34 = unaff_EBP + -0x10;
          uStack_38 = 0x83a8e1;
          FUN_004c2677();
          uStack_38 = 0x83a8e8;
          FUN_00641b6c();
          local_34 = 0;
          *(undefined1 *)(unaff_EBP + -4) = 4;
          uStack_38 = 0x83a8f4;
          uStack_38 = FUN_004f136e();
          *(int **)(unaff_EBP + -0x14) = &local_34;
          local_34 = 0;
          uStack_3c = 0x83a902;
          FUN_00414f8b();
          uStack_38 = 0x83a90a;
          FUN_00459cb5();
          *(undefined1 *)(unaff_EBP + -4) = 3;
          local_34 = 0x83a916;
          FUN_00414ebb();
          local_34 = *(int *)(unaff_EBP + 0xc);
          uStack_38 = 0x83a921;
          FUN_00457d37();
          local_34 = unaff_EBP + -0x30;
          uStack_38 = 0x83a930;
          FUN_004751b2();
          local_34 = 0x83a938;
          FUN_004c26e1();
          local_34 = 0x90;
          uStack_38 = 0x83a944;
          iVar1 = FUN_004029b9();
          *(int *)(unaff_EBP + 0xc) = iVar1;
          *(undefined1 *)(unaff_EBP + -4) = 5;
          if (iVar1 != 0) {
            local_34 = 0x83a956;
            FUN_004d89f6();
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
          local_34 = 0x83a961;
          FUN_0045ebca();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        local_34 = 0x83a96d;
        FUN_004c26e1();
      }
      goto LAB_0083a96d;
    }
    if (*(short *)(*(int *)(iVar1 + 0x4ab) + 0xc) == 3) {
      *(undefined1 ***)(unaff_EBP + 0xc) = &puStack_44;
      uVar4 = 0x1046;
    }
    else {
      *(undefined1 ***)(unaff_EBP + 0xc) = &puStack_44;
      uVar4 = 0x1045;
    }
  }
  local_34 = 0;
  uStack_38 = 0;
  uStack_3c = 0;
  uStack_40 = 0;
  FUN_00679d22(&puStack_44,uVar4);
  FUN_007db3ad();
LAB_0083a96d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


