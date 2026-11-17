/* FUN_006a2b95 - 0x006a2b95 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a2b95(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  char *pcVar4;
  int local_14;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 8);
  if (iVar1 == 2) goto LAB_006a2ca8;
  local_14 = extraout_ECX;
  if (iVar1 == 1) {
    local_14 = unaff_EBP + -0x10;
    FUN_0045b90e();
    local_14 = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_0045ed72(0);
    piVar2 = (int *)FUN_0045ee27();
    if (*piVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*piVar2 + -4);
    }
    *(bool *)(unaff_EBP + 0xb) = iVar3 < 2;
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    local_14 = 0x6a2bf7;
    FUN_00414ebb();
    local_14 = extraout_ECX_00;
    if (*(char *)(unaff_EBP + 0xb) != '\0') goto LAB_006a2ca8;
  }
  if (*(int *)(extraout_ECX + 0x68) == 0) {
    *(int *)(extraout_ECX + 100) = iVar1;
    *(undefined4 *)(extraout_ECX + 0x68) = 1;
    if (*(int *)(extraout_ECX + 0x14) != 0) {
      local_14 = 0x6a2c1b;
      FUN_00815de9();
      local_14 = extraout_ECX_01;
    }
  }
  if (iVar1 == 1) {
    if (0 < *(int *)(extraout_ECX + 0xb0)) {
      piVar2 = &local_14;
      *(int **)(unaff_EBP + 8) = &local_14;
      FUN_0048b998(&local_14);
      FUN_0045b90e(piVar2);
      goto LAB_006a2c75;
    }
  }
  else {
    if (iVar1 == 0x3e9) {
      *(int **)(unaff_EBP + 8) = &local_14;
      pcVar4 = s___GIVEUP___0096a6a0;
    }
    else {
      if (iVar1 != 0x3ea) goto LAB_006a2c7c;
      *(int **)(unaff_EBP + 8) = &local_14;
      pcVar4 = &DAT_00978474;
    }
    local_14 = 0;
    FUN_00414edd(pcVar4,0xffffffff);
LAB_006a2c75:
    FUN_006a3023();
  }
LAB_006a2c7c:
  if (DAT_0097bcf0 != 0) {
    local_14 = 0x6a2c8b;
    FUN_00815de9();
    if (DAT_0097bcf0 != 0) {
      local_14 = 1;
      (*(code *)**(undefined4 **)(DAT_0097bcf0 + 8))();
    }
  }
  *(undefined4 *)(DAT_00978368 + 0x3298) = 0;
LAB_006a2ca8:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


