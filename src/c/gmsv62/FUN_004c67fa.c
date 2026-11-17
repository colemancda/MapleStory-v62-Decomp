/* FUN_004c67fa - 0x004c67fa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_004c67fa(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  iVar2 = DAT_00979110;
  if ((param_4 != 0) && (*(int *)(DAT_00978360 + 0xc78) == 0)) {
    return 0;
  }
  local_8 = 0;
  if (DAT_009791a0 != 0) {
    local_8 = DAT_009791a0;
  }
  if (param_4 == 0) {
    iVar3 = FUN_006c69a5(param_2,param_3);
  }
  else {
    iVar3 = FUN_007467b1(param_2,param_3);
  }
  if (iVar3 < 0) {
    return 0;
  }
  if ((0x3a < iVar3) && (iVar3 < 0x45)) {
    return 0;
  }
  if (iVar3 == 0x57) {
    return 0;
  }
  if (iVar3 != 0x58) {
    iVar6 = 0;
    do {
      iVar5 = iVar6;
      if (iVar6 == 0x36) {
        iVar5 = 0x2a;
      }
      pcVar4 = (char *)(iVar5 * 5 + 4 + iVar2);
      if ((((*pcVar4 == '\x01') && (*(int *)(pcVar4 + 1) == *(int *)(param_1 + 0x10))) &&
          (*(int *)(param_1 + 0x14) == 0)) ||
         (((*pcVar4 == '\b' && (*(int *)(pcVar4 + 1) == *(int *)(param_1 + 0x10))) &&
          (*(int *)(param_1 + 0x14) != 0)))) {
        *pcVar4 = '\0';
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x59);
    if (iVar3 < 0x59) {
      if (param_4 == 0) {
        if (iVar3 == 0x36) {
          iVar3 = 0x2a;
        }
        pcVar4 = (char *)(iVar3 * 5 + 4 + iVar2);
      }
      else {
        pcVar4 = (char *)FUN_0051c36a(iVar3);
      }
      if ((param_4 == 0) && ((cVar1 = *pcVar4, cVar1 == '\x04' || (cVar1 == '\x05')))) {
        FUN_006c93de(cVar1,*(undefined4 *)(pcVar4 + 1));
      }
      *pcVar4 = ((*(int *)(param_1 + 0x14) == 0) - 1U & 7) + 1;
      *(undefined4 *)(pcVar4 + 1) = *(undefined4 *)(param_1 + 0x10);
      FUN_008161f1(0);
      if (local_8 == 0) {
        if (param_4 == 0) {
          return 1;
        }
        FUN_0051c175();
        return 1;
      }
    }
    else {
      FUN_008161f1(0);
      if (local_8 == 0) {
        return 1;
      }
    }
    FUN_008161f1(0);
    return 1;
  }
  return 0;
}


