/* FUN_0060f9f3 - 0x0060f9f3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0060f9f3(void)

{
  undefined4 *puVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  local_28 = *(int *)(unaff_EBP + 8);
  iStack_2c = unaff_EBP + -0x10;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_30 = 0x60fa18;
  FUN_005b1a45();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if ((*(char **)(unaff_EBP + -0x10) != (char *)0x0) && (**(char **)(unaff_EBP + -0x10) != '\0')) {
    local_28 = 0x1bb;
    iStack_2c = unaff_EBP + -0x18;
    iStack_30 = 0x60fa42;
    puVar1 = (undefined4 *)FUN_00679d22();
    local_28 = *(int *)(unaff_EBP + -0x10);
    iStack_2c = *puVar1;
    iStack_30 = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_34 = 0x60fa55;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    local_28 = 0x60fa64;
    FUN_00414ebb();
    local_28 = 0;
    iStack_2c = 0;
    iStack_30 = extraout_ECX + 0x6c;
    uStack_34 = 0;
    *(undefined1 **)(unaff_EBP + -0x18) = auStack_38;
    FUN_00450368(unaff_EBP + -0x14);
    iVar2 = FUN_007db791();
    if (iVar2 == 6) {
      local_28 = 0;
      iStack_2c = 0;
      iStack_30 = 0x6f;
      uStack_34 = 0x60fa93;
      FUN_0060142b();
      local_28 = 0x1a;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_2c = 0x60faa1;
      FUN_00457cda();
      local_28 = *(int *)(unaff_EBP + 8);
      iStack_2c = 0x60faac;
      FUN_00457cda();
      iStack_2c = unaff_EBP + -0x10;
      *(int **)(unaff_EBP + 8) = &local_28;
      local_28 = 0;
      iStack_30 = 0x60fabd;
      FUN_00414f8b();
      iStack_2c = 0x60fac5;
      FUN_00459cb5();
      local_28 = unaff_EBP + -0x28;
      iStack_2c = 0x60fad4;
      FUN_004751b2();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      local_28 = 0x60fae0;
      FUN_0045ebca();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  local_28 = 0x60faeb;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_28 = 0x60faf7;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


