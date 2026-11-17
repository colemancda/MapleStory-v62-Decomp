/* FUN_0068d9c1 - 0x0068d9c1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0068d9c1(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *extraout_ECX;
  int unaff_EBP;
  uint uVar3;
  uint local_14;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 8);
  if (iVar1 == 0x3ea) {
    local_14 = 0x68dab3;
    FUN_0068e8ee();
  }
  else if (iVar1 == 0x3eb) {
    local_14 = 0x68daaa;
    FUN_0068e71a();
  }
  else if (iVar1 == 0x3ec) {
    if (extraout_ECX[0x67] != 0) {
      local_14 = unaff_EBP - 0x10;
      puVar2 = (undefined4 *)FUN_0045b90e();
      if (((char *)*puVar2 == (char *)0x0) || (*(char *)*puVar2 == '\0')) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
      local_14 = 0x68da3e;
      FUN_00414ebb();
      if (uVar3 == 0) {
        local_14 = unaff_EBP + 8;
        FUN_0045b90e();
        *(undefined4 *)(unaff_EBP + -4) = 0;
        local_14 = uVar3;
        FUN_004a2fef();
        local_14 = 0;
        *(uint **)(unaff_EBP + -0x14) = &local_14;
        FUN_00414f8b(unaff_EBP + 8);
        FUN_005c149f();
        local_14 = -(uint)(extraout_ECX[0x67] != 0) & extraout_ECX[0x67] + 4U;
        FUN_00817f6e();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        local_14 = 0x68daa1;
        FUN_00414ebb();
      }
    }
  }
  else {
    if (*(int *)(unaff_EBP + 8) == 1) {
      iVar1 = *extraout_ECX;
      local_14 = 1;
    }
    else {
      if (*(int *)(unaff_EBP + 8) != 2) goto LAB_0068dab3;
      iVar1 = *extraout_ECX;
      local_14 = 2;
    }
    (**(code **)(iVar1 + 0x34))();
  }
LAB_0068dab3:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


