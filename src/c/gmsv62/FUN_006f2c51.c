/* FUN_006f2c51 - 0x006f2c51 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006f2c51(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  undefined4 local_20;
  
  FUN_00879bb8();
  local_20 = *(undefined4 *)(unaff_EBP + 0xc);
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_006f2db2(unaff_EBP + 0xc);
  if ((*(char **)(unaff_EBP + 0xc) == (char *)0x0) || (**(char **)(unaff_EBP + 0xc) == '\0'))
  goto LAB_006f2d8a;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 == 0) {
    local_20 = 0xfb4;
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18);
    local_20 = *(undefined4 *)(unaff_EBP + 0xc);
    uVar2 = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00434e21(unaff_EBP + 8,uVar2,*(undefined4 *)(unaff_EBP + 0x10));
    *(undefined1 *)(unaff_EBP + -4) = 2;
LAB_006f2d45:
    local_20 = 0x6f2d4a;
    FUN_00414ebb();
    if ((*(char **)(unaff_EBP + 8) != (char *)0x0) && (**(char **)(unaff_EBP + 8) != '\0')) {
      local_20 = 7;
      FUN_00471102(unaff_EBP + 8);
    }
  }
  else {
    if (iVar1 == 1) {
      local_20 = 0xfb5;
      puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14);
      local_20 = *(undefined4 *)(unaff_EBP + 0xc);
      uVar2 = *puVar3;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00434e21(unaff_EBP + 8,uVar2,*(undefined4 *)(unaff_EBP + 0x10));
      *(undefined1 *)(unaff_EBP + -4) = 2;
      goto LAB_006f2d45;
    }
    if (iVar1 == 2) {
      local_20 = 0xfb6;
      puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10);
      local_20 = *(undefined4 *)(unaff_EBP + 0xc);
      uVar2 = *puVar3;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00434e21(unaff_EBP + 8,uVar2,*(undefined4 *)(unaff_EBP + 0x10));
      *(undefined1 *)(unaff_EBP + -4) = 2;
      goto LAB_006f2d45;
    }
  }
  if (iVar1 == 0) {
    *(undefined4 **)(unaff_EBP + -0x1c) = &local_20;
    local_20 = 0;
    FUN_00414f8b(unaff_EBP + 0xc);
    FUN_006f02fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  local_20 = 0x6f2d8a;
  FUN_00414ebb();
LAB_006f2d8a:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  local_20 = 0x6f2d95;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_20 = 0x6f2da1;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


