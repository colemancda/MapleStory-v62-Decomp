/* FUN_00776650 - 0x00776650 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00776650(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 *extraout_ECX;
  int unaff_EBP;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  
  FUN_00879bb8();
  local_30 = 0x69c;
  iStack_34 = 0x77666f;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    local_30 = 0x776682;
    iVar1 = FUN_007e62e9();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar2 = -(uint)(iVar1 != 0) & iVar1 + 8U;
  *(uint *)(unaff_EBP + -0x18) = -(uint)(uVar2 != 0) & uVar2 - 8;
  local_30 = 0x7766a9;
  FUN_004c26c4();
  local_30 = 0;
  iStack_34 = 1;
  puStack_40 = (undefined1 *)&uStack_38;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_38;
  uStack_3c = 0x1124;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00679d22();
  uStack_3c = 0;
  puStack_40 = (undefined1 *)0x3;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004c2677();
  FUN_007eddac();
  local_30 = 0;
  iStack_34 = 0;
  uStack_38 = 100;
  uStack_3c = 0;
  puStack_40 = &DAT_00978474;
  FUN_007edfe1();
  local_30 = 0x7766f9;
  FUN_007e6e3c();
  local_30 = 0x776701;
  iVar1 = FUN_004bc6a2();
  if (iVar1 == 1) {
    local_30 = unaff_EBP + -0x10;
    iStack_34 = 0x776715;
    FUN_00641b6c();
    local_30 = 0;
    iStack_34 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_38 = 0x776723;
    FUN_0045ed72();
    iStack_34 = 0x77672a;
    puVar3 = (undefined4 *)FUN_0045ee27();
    if (((char *)*puVar3 != (char *)0x0) && (*(char *)*puVar3 != '\0')) {
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + -4);
      }
      if (iVar1 < 0x65) {
        local_30 = 1;
        iStack_34 = 0;
        uStack_38 = 1;
        uStack_3c = 0x400;
        puStack_40 = (undefined1 *)0x776763;
        uStack_38 = FUN_00415015();
        uStack_3c = 0x776769;
        iVar1 = FUN_00471777();
        local_30 = -1;
        iStack_34 = 0x776778;
        FUN_004150c0();
        local_30 = 0;
        iStack_34 = 0;
        if (iVar1 == 0) {
          uStack_38 = 0;
          uStack_3c = 0;
          *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_40;
          puStack_40 = extraout_ECX;
          FUN_00679d22(&puStack_40,0x11d);
          FUN_007db3ad();
        }
        else {
          uStack_38 = 0x83;
          uStack_3c = 0x7767aa;
          FUN_0060142b();
          local_30 = 10;
          *(undefined1 *)(unaff_EBP + -4) = 4;
          iStack_34 = 0x7767b8;
          FUN_00457cda();
          iStack_34 = unaff_EBP + -0x10;
          *(int **)(unaff_EBP + -0x14) = &local_30;
          local_30 = 0;
          uStack_38 = 0x7767c9;
          FUN_00414f8b();
          iStack_34 = 0x7767d1;
          FUN_00459cb5();
          local_30 = unaff_EBP + -0x2c;
          iStack_34 = 0x7767e0;
          FUN_004751b2();
          *(undefined1 *)(unaff_EBP + -4) = 3;
          local_30 = 0x7767ec;
          FUN_0045ebca();
        }
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    local_30 = 0x7767f8;
    FUN_00414ebb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_30 = 0x776804;
  FUN_004c26e1();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


