/* FUN_006960b9 - 0x006960b9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006960b9(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int local_8;
  
  local_8 = param_1;
  if ((param_3 & 0x80000000) != 0) goto LAB_0069623e;
  if (param_2 == 0xd) {
    if (*(int *)(param_1 + 0x58) == *(int *)(param_1 + 0x84)) {
      puVar4 = (undefined4 *)FUN_0045b90e(&local_8);
      if (((char *)*puVar4 == (char *)0x0) || (*(char *)*puVar4 == '\0')) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (local_8 != 0) {
        FUN_00434e38(local_8 + -0xc);
      }
      if (bVar3) {
LAB_00696116:
        iVar6 = *(int *)(param_1 + 0x8c);
        goto LAB_00696225;
      }
    }
    if (*(int *)(param_1 + 0x58) == *(int *)(param_1 + 0x8c)) {
      puVar4 = (undefined4 *)FUN_0045b90e(&local_8);
      if (((char *)*puVar4 == (char *)0x0) || (*(char *)*puVar4 == '\0')) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (local_8 != 0) {
        FUN_00434e38(local_8 + -0xc);
      }
      if (bVar3) {
LAB_00696162:
        iVar6 = *(int *)(param_1 + 0x94);
        goto LAB_00696225;
      }
    }
    if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x94)) {
LAB_0069623e:
      FUN_004bc822(param_2,param_3);
      return;
    }
    puVar4 = (undefined4 *)FUN_0045b90e(&local_8);
    if (((char *)*puVar4 == (char *)0x0) || (*(char *)*puVar4 == '\0')) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    FUN_00414ebb();
    if (!bVar3) goto LAB_0069623e;
LAB_0069621f:
    iVar6 = *(int *)(param_1 + 0x9c);
  }
  else {
    if (param_2 != 0x26) {
      if (param_2 != 0x28) goto LAB_0069623e;
      iVar6 = *(int *)(param_1 + 0x58);
      if (iVar6 == *(int *)(param_1 + 0x84)) goto LAB_00696116;
      if (iVar6 == *(int *)(param_1 + 0x8c)) goto LAB_00696162;
      if (iVar6 != *(int *)(param_1 + 0x94)) goto LAB_0069623e;
      goto LAB_0069621f;
    }
    iVar6 = *(int *)(param_1 + 0x8c);
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 != iVar6) {
      iVar2 = *(int *)(param_1 + 0x94);
      if (iVar1 == iVar2) {
        uVar5 = -(uint)(iVar6 != 0) & iVar6 + 4U;
      }
      else {
        if (iVar1 != *(int *)(param_1 + 0x9c)) goto LAB_0069623e;
        uVar5 = -(uint)(iVar2 != 0) & iVar2 + 4U;
      }
      goto LAB_00696230;
    }
    iVar6 = *(int *)(param_1 + 0x84);
  }
LAB_00696225:
  uVar5 = -(uint)(iVar6 != 0) & iVar6 + 4U;
LAB_00696230:
  FUN_00817f6e(uVar5);
  return;
}


