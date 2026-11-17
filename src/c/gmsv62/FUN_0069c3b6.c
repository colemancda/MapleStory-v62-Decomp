/* FUN_0069c3b6 - 0x0069c3b6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0069c3b6(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_8;
  
  local_8 = param_1;
  if (((param_3 & 0x80000000) == 0) && (param_2 == 0xd)) {
    if (*(int *)(param_1 + 0x58) == *(int *)(param_1 + 0x84)) {
      puVar2 = (undefined4 *)FUN_0045b90e(&local_8);
      if (((char *)*puVar2 == (char *)0x0) || (*(char *)*puVar2 == '\0')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      FUN_00414ebb();
      if (bVar1) {
        iVar3 = *(int *)(param_1 + 0x8c);
        goto LAB_0069c450;
      }
    }
    if (*(int *)(param_1 + 0x58) == *(int *)(param_1 + 0x8c)) {
      puVar2 = (undefined4 *)FUN_0045b90e(&local_8);
      if (((char *)*puVar2 == (char *)0x0) || (*(char *)*puVar2 == '\0')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      FUN_00414ebb();
      if (bVar1) {
        iVar3 = *(int *)(param_1 + 0x94);
LAB_0069c450:
        FUN_00817f6e(-(uint)(iVar3 != 0) & iVar3 + 4U);
        return;
      }
    }
  }
  FUN_004bc822(param_2,param_3);
  return;
}


