/* FUN_00834506 - 0x00834506 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00834506(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_18 [4];
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = 0;
  iVar2 = FUN_00455c59(local_18);
  local_10 = *(undefined4 *)(iVar2 + 4);
  if (local_14 != 0) {
    FUN_0045e7c2(0);
  }
  local_14 = DAT_0097926c;
  local_8 = FUN_0083cbf6();
  if ((DAT_00978358 != (int *)0x0) && (*(int *)(param_1 + 0x3304) == 0)) {
    (**(code **)(*DAT_00978358 + 4))();
    local_c = FUN_004bf0d4();
    iVar2 = FUN_006fc790(0x26fd);
    uVar1 = *(undefined4 *)(iVar2 + 0x18);
    iVar2 = FUN_0062d669(0x26fd,uVar1,local_10,local_c,*(undefined4 *)(param_1 + 0x3308),local_8);
    if (iVar2 != 0) {
      FUN_0084b9c7(0x26fd,uVar1,1);
      *(undefined4 *)(param_1 + 0x3304) = 1;
    }
  }
  return;
}


