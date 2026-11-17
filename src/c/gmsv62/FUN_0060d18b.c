/* FUN_0060d18b - 0x0060d18b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_0060d18b(void)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int *extraout_ECX;
  int unaff_EBP;
  uint local_24;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iVar4 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  switch(iVar4) {
  case 0x3e9:
    local_24 = 0x60d1c5;
    FUN_0060f93c();
    local_24 = 0x60d1cc;
    (**(code **)(*extraout_ECX + 0x68))();
    break;
  case 0x3ea:
    iVar4 = *extraout_ECX;
    local_24 = 0x60d1d8;
    iVar2 = (**(code **)(iVar4 + 0x5c))();
    local_24 = (-(uint)(iVar2 != 0) & 6) + 2;
    (**(code **)(iVar4 + 0x34))();
    break;
  case 0x3eb:
    local_24 = extraout_ECX[0x6a];
    FUN_0060f019();
    break;
  case 0x3ec:
    local_24 = 0;
    puVar3 = (uint *)FUN_005b1a45(unaff_EBP + -0x10);
    local_24 = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar4 = FUN_007c0ccd();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      local_24 = *(int *)(unaff_EBP + -0x10) - 0xc;
      FUN_00434e38();
    }
    if (iVar4 != 0) {
      local_24 = 0;
      FUN_00849105(*(undefined4 *)(iVar4 + 0xd78),0);
    }
    break;
  case 0x3ed:
    if (extraout_ECX[0x66] == 0) {
      local_24 = 0x88;
      iVar4 = FUN_004029b9();
      *(int *)(unaff_EBP + 8) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (iVar4 == 0) {
        local_24 = 0;
      }
      else {
        local_24 = FUN_00610721();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00611578();
    }
    break;
  case 0x3ee:
    if (extraout_ECX[0x8a] != 0) {
      local_24 = unaff_EBP - 0x14;
      puVar5 = (undefined4 *)FUN_0045b90e();
      if (((char *)*puVar5 == (char *)0x0) || (*(char *)*puVar5 == '\0')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      local_24 = 0x60d2c8;
      FUN_00414ebb();
      if (!bVar1) {
        local_24 = unaff_EBP + 8;
        FUN_0045b90e();
        local_24 = 0;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_004a2fef();
        *(uint **)(unaff_EBP + -0x18) = &local_24;
        local_24 = 0;
        FUN_00414f8b(unaff_EBP + 8);
        FUN_005c149f();
        local_24 = -(uint)(extraout_ECX[0x8a] != 0) & extraout_ECX[0x8a] + 4U;
        FUN_00817f6e();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        local_24 = 0x60d32f;
        FUN_00414ebb();
      }
    }
    break;
  case 0x3ef:
    local_24 = 1;
    goto LAB_0060d333;
  case 0x3f0:
    local_24 = 2;
    goto LAB_0060d333;
  case 0x3f1:
    local_24 = 3;
LAB_0060d333:
    FUN_0060f9f3();
    break;
  case 0x3f2:
switchD_0060d1b7_caseD_3f2:
    iVar4 = *extraout_ECX;
    local_24 = 2;
    goto LAB_0060d357;
  default:
    if (iVar4 != 1) {
      if (iVar4 != 2) break;
      goto switchD_0060d1b7_caseD_3f2;
    }
    iVar4 = *extraout_ECX;
    local_24 = 1;
LAB_0060d357:
    (**(code **)(iVar4 + 0x34))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_24 = 0x60d368;
  FUN_00611656();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


