/* FUN_00607522 - 0x00607522 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00607522(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  uint local_34;
  
  FUN_00879bb8();
  if ((*(int *)(extraout_ECX + 4) == 0) && (*(int *)(extraout_ECX + 0x14) == 0)) {
    local_34 = 0;
    iStack_38 = 0;
    iStack_3c = 0;
    uStack_40 = 0;
    *(undefined1 **)(unaff_EBP + -0x14) = auStack_44;
    FUN_00679d22(auStack_44,0xef0);
    FUN_007db3ad();
  }
  else {
    local_34 = unaff_EBP - 0x10;
    iStack_38 = 0x607579;
    FUN_0045b90e();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if ((*(char **)(unaff_EBP + -0x10) == (char *)0x0) || (**(char **)(unaff_EBP + -0x10) == '\0'))
    {
      local_34 = 0;
      iStack_38 = 0;
      iStack_3c = 0;
      uStack_40 = 0;
      *(undefined1 **)(unaff_EBP + -0x20) = auStack_44;
      FUN_00679d22(auStack_44,0xef1);
      FUN_007db3ad();
    }
    else {
      local_34 = 0xef3;
      iStack_38 = unaff_EBP + -0x1c;
      iStack_3c = 0x6075c1;
      puVar2 = (undefined4 *)FUN_00679d22();
      uVar1 = *puVar2;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      local_34 = *(uint *)(extraout_ECX + 0x14);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_38 = 0x6075d2;
      iVar3 = FUN_00602ca9();
      local_34 = iVar3 + 5000;
      iStack_3c = unaff_EBP + -0x18;
      uStack_40 = 0x6075e3;
      iStack_38 = uVar1;
      local_34 = FUN_00434e21();
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      iStack_38 = 0x6075f2;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      local_34 = 0x6075fe;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      local_34 = 0x60760a;
      FUN_00414ebb();
      local_34 = 0;
      iStack_38 = 0;
      iStack_3c = 0;
      uStack_40 = 0;
      *(undefined1 **)(unaff_EBP + -0x20) = auStack_44;
      FUN_00450368(unaff_EBP + -0x14);
      iVar3 = FUN_007db791();
      if (iVar3 == 6) {
        local_34 = 0;
        iStack_38 = 0;
        iStack_3c = 0x3d;
        uStack_40 = 0x60763a;
        FUN_0060142b();
        local_34 = 2;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        iStack_38 = 0x607648;
        FUN_00457cda();
        local_34 = (uint)*(byte *)(extraout_ECX + 8);
        iStack_38 = 0x607656;
        FUN_00457cda();
        local_34 = (uint)*(ushort *)(extraout_ECX + 0xc);
        iStack_38 = 0x607665;
        FUN_0045d247();
        local_34 = (uint)*(ushort *)(extraout_ECX + 0x10);
        iStack_38 = 0x607674;
        FUN_0045d247();
        local_34 = *(uint *)(extraout_ECX + 0x14);
        iStack_38 = 0x60767f;
        FUN_00457d37();
        iStack_38 = unaff_EBP + -0x10;
        *(uint **)(unaff_EBP + -0x20) = &local_34;
        local_34 = 0;
        iStack_3c = 0x607690;
        FUN_00414f8b();
        iStack_38 = 0x607698;
        FUN_00459cb5();
        local_34 = 0;
        iStack_38 = 0x6076a1;
        FUN_00457cda();
        local_34 = unaff_EBP - 0x30;
        iStack_38 = 0x6076b0;
        FUN_004751b2();
        local_34 = 0;
        iStack_38 = 0x6076b9;
        FUN_00609358();
        *(undefined1 *)(unaff_EBP + -4) = 4;
        local_34 = 0x6076c5;
        FUN_0045ebca();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      local_34 = 0x6076d0;
      FUN_00414ebb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    local_34 = 0x6076dc;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


