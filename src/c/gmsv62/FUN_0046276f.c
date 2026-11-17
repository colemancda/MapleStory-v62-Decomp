/* FUN_0046276f - 0x0046276f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0046276f(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  uint uVar4;
  undefined4 uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  
  FUN_00879bb8();
  local_3c = 0x462787;
  uVar1 = FUN_00424561();
  uVar4 = (uint)uVar1;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  local_3c = unaff_EBP - 0xd;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_44 = 0x4627a1;
  uStack_40 = uVar4;
  FUN_0046586f();
  if (uVar4 != 0) {
    local_3c = uVar4 * 0x62;
    uStack_40 = *(uint *)(unaff_EBP + -0x14);
    uStack_44 = 0x4627b4;
    FUN_004245d2();
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  for (uVar4 = 0;
      (*(int *)(unaff_EBP + -0x14) != 0 && (uVar4 < *(uint *)(*(int *)(unaff_EBP + -0x14) + -4)));
      uVar4 = uVar4 + 1) {
    local_3c = 0x94;
    uStack_40 = 0x4627dc;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x1c) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      local_3c = 0x4627ee;
      iVar2 = FUN_0069c8fe();
    }
    uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
    *(uint *)(unaff_EBP + -0x24) = -(uint)(uVar3 != 0) & uVar3 - 8;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    local_3c = 0x462814;
    FUN_0046544b();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_40 = 0x462821;
    local_3c = uVar4;
    iVar2 = FUN_004658ac();
    *(uint **)(unaff_EBP + -0x1c) = &local_3c;
    uStack_44 = iVar2 + 0x19;
    uStack_40 = 0xffffffff;
    local_3c = 0;
    uStack_48 = 0x462834;
    FUN_00414edd();
    *(uint **)(unaff_EBP + -0x20) = &uStack_40;
    uStack_44 = 0xffffffff;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_4c = 0x462849;
    uStack_48 = uVar4;
    uStack_40 = extraout_ECX;
    iVar2 = FUN_004658ac();
    uStack_48 = iVar2 + 0xc;
    uStack_4c = 0x462854;
    FUN_0045f0f3();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_48 = 0x462861;
    uStack_44 = uVar4;
    iVar2 = FUN_004658ac();
    uStack_44 = *(undefined4 *)(iVar2 + 8);
    uStack_48 = 0x46286c;
    FUN_00465438();
    uStack_48 = 0x462873;
    FUN_0069d2fa();
    local_3c = 0x46287b;
    iVar2 = FUN_004bc6a2();
    if (iVar2 == 1) {
      *(undefined4 *)(unaff_EBP + 8) = 0;
      local_3c = unaff_EBP + 8;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_40 = 0x462897;
      FUN_0069d2e7();
      if ((*(char **)(unaff_EBP + 8) != (char *)0x0) && (**(char **)(unaff_EBP + 8) != '\0')) {
        local_3c = 0;
        uStack_40 = 0;
        uStack_44 = 0x77;
        uStack_48 = 0x4628b6;
        FUN_0060142b();
        local_3c = 0;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        uStack_40 = 0x4628c3;
        FUN_00457cda();
        uStack_40 = 0x4628cc;
        local_3c = uVar4;
        iVar2 = FUN_004658ac();
        *(uint **)(unaff_EBP + -0x20) = &local_3c;
        uStack_44 = iVar2 + 0xc;
        uStack_40 = 0xffffffff;
        local_3c = 0;
        uStack_48 = 0x4628df;
        FUN_00414edd();
        uStack_40 = 0x4628e7;
        FUN_00459cb5();
        uStack_40 = unaff_EBP + 8;
        *(uint **)(unaff_EBP + -0x20) = &local_3c;
        local_3c = 0;
        uStack_44 = 0x4628f8;
        FUN_00414f8b();
        uStack_40 = 0x462900;
        FUN_00459cb5();
        local_3c = 1;
        uStack_40 = 0x46290a;
        FUN_00457cda();
        uStack_40 = 0x462913;
        local_3c = uVar4;
        FUN_00457d37();
        uStack_40 = *(int *)(unaff_EBP + -0x18) + *(int *)(unaff_EBP + -0x14);
        local_3c = 8;
        uStack_44 = 0x462926;
        FUN_00457fa0();
        local_3c = unaff_EBP - 0x38;
        uStack_40 = 0x462935;
        FUN_004751b2();
        local_3c = 0;
        uStack_40 = 0;
        uStack_44 = 0;
        uStack_48 = 0;
        *(undefined4 **)(unaff_EBP + -0x20) = &uStack_4c;
        uStack_4c = extraout_ECX_00;
        FUN_00679d22(&uStack_4c,0xa60);
        FUN_007db3ad();
        *(undefined1 *)(unaff_EBP + -4) = 5;
        local_3c = 0x462963;
        FUN_0045ebca();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      local_3c = 0x46296f;
      FUN_00414ebb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    local_3c = 0x46297a;
    FUN_00465468();
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x62;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_3c = 0x462990;
  FUN_0046584d();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


