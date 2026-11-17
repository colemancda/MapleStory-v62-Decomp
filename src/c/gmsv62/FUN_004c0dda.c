/* FUN_004c0dda - 0x004c0dda in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_004c0dda(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_00455c59(local_18);
  if (local_14 != 0) {
    FUN_0045e7c2(0);
  }
  iVar3 = FUN_00458c4f(local_18,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  iVar3 = *(int *)(iVar3 + 4);
  if (local_14 != 0) {
    FUN_00449913(0);
  }
  if (iVar3 == 0) {
    return 0;
  }
  local_8 = FUN_0045e2eb();
  if ((*(int *)(param_1 + 0x10) != 2) ||
     ((((iVar3 = local_8 / 10000, iVar3 != 200 && (iVar3 != 0xc9)) && (iVar3 != 0xca)) &&
      (((((iVar3 != 0xcd && (iVar3 != 0xdd)) &&
         ((iVar3 != 0xec && ((iVar3 != 0xee && (iVar3 != 0xd4)))))) && (iVar3 != 0xe2)) &&
       (((iVar3 != 0xe3 && (local_8 / 1000 != 0x83d)) && (local_8 != 0x200b63)))))))) {
    if (*(int *)(param_1 + 0x10) == 5) {
      if ((local_8 / 10000 == 0x20c) || (local_8 / 10000 == 0x212)) goto LAB_004c0f71;
      iVar3 = FUN_0048b8d9(local_8);
      if (iVar3 == 6) {
        local_c = 3;
        goto LAB_004c0f78;
      }
    }
    iVar3 = *(int *)(param_1 + 0x10);
    if (((iVar3 == 5) && (local_8 / 10000 == 0x1f5)) || ((iVar3 == 4 && (local_8 / 10000 == 0x1ad)))
       ) {
      local_c = 7;
      goto LAB_004c0f78;
    }
    if (iVar3 != 3) {
      return 0;
    }
    if (local_8 / 10000 != 0x12d) {
      return 0;
    }
  }
LAB_004c0f71:
  local_c = 2;
LAB_004c0f78:
  iVar3 = DAT_00979110;
  local_14 = DAT_00978360;
  if ((param_4 != 0) && (*(int *)(DAT_00978360 + 0xc78) == 0)) {
    return 0;
  }
  local_10 = 0;
  if (DAT_009791a0 != 0) {
    local_10 = DAT_009791a0;
  }
  if (param_4 == 0) {
    iVar4 = FUN_006c69a5(param_2,param_3);
  }
  else {
    iVar4 = FUN_007467b1(param_2,param_3);
  }
  iVar2 = local_8;
  if ((*(int *)(param_1 + 0x10) != 5) || (iVar5 = FUN_0048b8d9(local_8), iVar5 != 6)) {
    if ((0x3a < iVar4) && (iVar4 < 0x45)) {
      return 0;
    }
    if (iVar4 == 0x57) {
      return 0;
    }
    if (iVar4 == 0x58) {
      return 0;
    }
  }
  if (iVar4 == -1) {
    return 0;
  }
  iVar5 = 0;
  do {
    iVar6 = iVar5;
    if (iVar5 == 0x36) {
      iVar6 = 0x2a;
    }
    pcVar7 = (char *)(iVar6 * 5 + 4 + iVar3);
    cVar1 = *pcVar7;
    if ((((cVar1 == '\x02') || (cVar1 == '\x03')) || (cVar1 == '\a')) &&
       (*(int *)(pcVar7 + 1) == iVar2)) {
      *pcVar7 = '\0';
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x59);
  if (iVar4 < 0x59) {
    if (param_4 == 0) {
      if (iVar4 == 0x36) {
        iVar4 = 0x2a;
      }
      pcVar7 = (char *)(iVar4 * 5 + 4 + iVar3);
    }
    else {
      pcVar7 = (char *)FUN_0051c36a(iVar4);
    }
    if ((param_4 == 0) &&
       (((cVar1 = *pcVar7, cVar1 == '\x04' || (cVar1 == '\x05')) || (cVar1 == '\x06')))) {
      FUN_006c93de(cVar1,*(undefined4 *)(pcVar7 + 1));
    }
    *pcVar7 = (char)local_c;
    *(int *)(pcVar7 + 1) = iVar2;
    if (local_10 == 0) {
      if (param_4 != 0) {
        FUN_0051c175();
      }
    }
    else {
      FUN_008161f1(0);
    }
  }
  else {
    FUN_008161f1(0);
    if (local_10 == 0) {
      return 1;
    }
  }
  FUN_008161f1(0);
  return 1;
}


