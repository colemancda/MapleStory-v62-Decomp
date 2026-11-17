/* FUN_0077292d - 0x0077292d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0077292d(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 *extraout_ECX;
  int unaff_EBP;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  
  FUN_00879bb8();
  local_20 = 0x69c;
  iStack_24 = 0x77294c;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    local_20 = 0x77295f;
    iVar1 = FUN_007e62e9();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar2 = -(uint)(iVar1 != 0) & iVar1 + 8U;
  *(uint *)(unaff_EBP + -0x18) = -(uint)(uVar2 != 0) & uVar2 - 8;
  local_20 = 0x772986;
  FUN_004c26c4();
  local_20 = 0;
  iStack_24 = 1;
  puStack_30 = (undefined1 *)&uStack_28;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_28;
  uStack_2c = 0xccf;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00679d22();
  uStack_2c = 0;
  puStack_30 = (undefined1 *)0x3;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004c2677();
  FUN_007eddac();
  local_20 = 0;
  iStack_24 = 0;
  uStack_28 = 100;
  uStack_2c = 0;
  puStack_30 = &DAT_00978474;
  FUN_007edfe1();
  local_20 = 0x7729d6;
  FUN_007e6e3c();
  local_20 = 0x7729de;
  iVar1 = FUN_004bc6a2();
  if (iVar1 == 1) {
    local_20 = unaff_EBP + -0x10;
    iStack_24 = 0x7729f2;
    FUN_00641b6c();
    local_20 = 0;
    iStack_24 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_28 = 0x772a00;
    FUN_0045ed72();
    iStack_24 = 0x772a07;
    puVar3 = (undefined4 *)FUN_0045ee27();
    if (((char *)*puVar3 != (char *)0x0) && (*(char *)*puVar3 != '\0')) {
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + -4);
      }
      if (iVar1 < 0x65) {
        local_20 = 1;
        iStack_24 = 0;
        uStack_28 = 1;
        uStack_2c = 0x400;
        puStack_30 = (undefined1 *)0x772a38;
        uStack_28 = FUN_00415015();
        uStack_2c = 0x772a3e;
        iVar1 = FUN_00471777();
        local_20 = -1;
        iStack_24 = 0x772a4d;
        FUN_004150c0();
        if (iVar1 == 0) {
          local_20 = 0;
          iStack_24 = 0;
          uStack_28 = 0;
          uStack_2c = 0;
          *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_30;
          puStack_30 = extraout_ECX;
          FUN_00679d22(&puStack_30,0x11d);
          FUN_007db3ad();
        }
        else {
          iStack_24 = unaff_EBP + -0x10;
          *(int **)(unaff_EBP + -0x14) = &local_20;
          local_20 = 0;
          uStack_28 = 0x772a83;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 3;
          iStack_24 = 0x772a8c;
          FUN_00429303();
          iStack_24 = 0x772a93;
          FUN_004eaf51();
        }
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    local_20 = 0x772a9f;
    FUN_00414ebb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_20 = 0x772aab;
  FUN_004c26e1();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


