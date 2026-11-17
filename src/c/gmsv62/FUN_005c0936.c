/* FUN_005c0936 - 0x005c0936 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005c0936(void)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int unaff_EBP;
  int iVar5;
  int iStack_20;
  int local_1c;
  
  FUN_00879bb8();
  local_1c = 0x5c0954;
  cVar1 = FUN_0042452b();
  local_1c = unaff_EBP + -0x10;
  iStack_20 = 0x5c0964;
  FUN_0045cdbc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  local_1c = 0x5c0970;
  uVar2 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + 8) = uVar2;
  local_1c = 0x5c0980;
  uVar3 = FUN_0045e4b8();
  if ((uVar3 & 1) != 0) {
    local_1c = 0x5c098b;
    uVar3 = FUN_0045e4b8();
    if ((uVar3 & 0x10) != 0) {
      local_1c = 4;
      iStack_20 = *(int *)(unaff_EBP + 8);
      FUN_005c0a5d();
      goto LAB_005c0a42;
    }
  }
  iVar5 = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (cVar1 == '\x03') {
    if (*(int *)(DAT_00978134 + 0x2c) != 0) {
      iStack_20 = unaff_EBP + -0x10;
      *(int **)(unaff_EBP + -0x18) = &local_1c;
      local_1c = 0;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_20 = 0x5c09d6;
      FUN_004f14ee();
      iStack_20 = 0x5c09dd;
      iVar4 = FUN_0047c5bf();
      if (iVar4 == 0) {
        local_1c = 0x110;
        iStack_20 = 0x5c09f0;
        iVar4 = FUN_004029b9();
        *(int *)(unaff_EBP + -0x18) = iVar4;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (iVar4 != 0) {
          local_1c = 0x5c0a01;
          iVar5 = FUN_004defeb();
        }
        local_1c = *(int *)(unaff_EBP + 8);
        *(int **)(unaff_EBP + 8) = &iStack_20;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_00450368(unaff_EBP + -0x10);
        FUN_004e1189();
        iStack_20 = 0x5c0a28;
        local_1c = iVar5;
        FUN_008497ad();
        goto LAB_005c0a36;
      }
    }
    local_1c = 4;
    iStack_20 = *(int *)(unaff_EBP + 8);
    FUN_005c0a5d();
  }
LAB_005c0a36:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  local_1c = 0x5c0a42;
  FUN_00414ebb();
LAB_005c0a42:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_1c = 0x5c0a4e;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


