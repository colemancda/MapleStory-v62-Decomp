/* FUN_004ebdda - 0x004ebdda in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004ebdda(void)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int unaff_EBP;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iStack_30;
  int local_2c;
  
  FUN_00879bb8();
  iVar1 = DAT_00978368;
  local_2c = 0x4ebdfa;
  cVar2 = FUN_0042452b();
  if (cVar2 == '\x04') {
    local_2c = 0x4ebefb;
    cVar2 = FUN_0042452b();
    iVar5 = 0;
    if (cVar2 != '\0') {
      local_2c = unaff_EBP + -0x1c;
      iStack_30 = 0x4ebf59;
      FUN_0045cdbc();
      *(undefined4 *)(unaff_EBP + -4) = 7;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      iVar1 = *(int *)(iVar1 + 0x2098);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (iVar1 != 0) {
        iVar5 = iVar1 + 4;
      }
      local_2c = 0x707;
      iStack_30 = unaff_EBP + -0x28;
      puVar4 = (undefined4 *)FUN_00679d22();
      local_2c = *(undefined4 *)(unaff_EBP + -0x1c);
      uVar3 = *puVar4;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_30 = iVar5;
      FUN_00434e21(unaff_EBP + -0x14,uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      local_2c = 0x4ebfaa;
      FUN_00414ebb();
      iStack_30 = unaff_EBP + -0x14;
      local_2c = 6;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      local_2c = 0x4ebfc3;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      local_2c = 0x4ebfcf;
      FUN_00414ebb();
      goto LAB_004ebfcf;
    }
    *(int **)(unaff_EBP + 8) = &iStack_30;
    local_2c = 0;
    *(undefined4 *)(unaff_EBP + -4) = 4;
    FUN_00679d22(unaff_EBP + -0x24,0xa3);
    uVar8 = 0;
    uVar7 = 0xffffffff;
    uVar6 = 0xc;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    uVar3 = FUN_00449713(0xc,0xffffffff,0);
    FUN_00449784(uVar3);
    FUN_00743a59(uVar3,uVar6,uVar7,uVar8);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    local_2c = *(int *)(unaff_EBP + -0x24);
  }
  else {
    if (cVar2 != '\x05') goto LAB_004ebfcf;
    local_2c = unaff_EBP + -0x18;
    iStack_30 = 0x4ebe18;
    FUN_0045cdbc();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    local_2c = 0x4ebe24;
    FUN_0042452b();
    local_2c = unaff_EBP + 8;
    iStack_30 = 0x4ebe2f;
    FUN_0045cdbc();
    local_2c = 1;
    iStack_30 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uVar3 = FUN_00415015(0x400,1);
    FUN_00471777(uVar3);
    local_2c = 0xffffffff;
    iStack_30 = 0x4ebe58;
    FUN_004150c0();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    local_2c = 0x707;
    iStack_30 = unaff_EBP + -0x20;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puVar4 = (undefined4 *)FUN_00679d22();
    local_2c = *(undefined4 *)(unaff_EBP + 8);
    uVar3 = *puVar4;
    iStack_30 = *(int *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00434e21(unaff_EBP + -0x10,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      local_2c = *(int *)(unaff_EBP + -0x20) + -0xc;
      iStack_30 = 0x4ebe9f;
      FUN_00434e38();
    }
    iStack_30 = unaff_EBP + -0x10;
    local_2c = 6;
    FUN_00471102();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      local_2c = *(int *)(unaff_EBP + -0x10) + -0xc;
      iStack_30 = 0x4ebec1;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + 8) != 0) {
      local_2c = *(int *)(unaff_EBP + 8) + -0xc;
      iStack_30 = 0x4ebed5;
      FUN_00434e38();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    local_2c = *(int *)(unaff_EBP + -0x18);
  }
  if (local_2c != 0) {
    local_2c = local_2c + -0xc;
    iStack_30 = 0x4ebeee;
    FUN_00434e38();
  }
LAB_004ebfcf:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


