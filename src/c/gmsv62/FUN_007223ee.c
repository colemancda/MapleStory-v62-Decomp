/* FUN_007223ee - 0x007223ee in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007223ee(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  int local_8;
  
  local_c = param_1;
  local_8 = param_1;
  iVar2 = FUN_00455c59(&local_c);
  iVar2 = *(int *)(iVar2 + 4);
  if (local_8 != 0) {
    FUN_0045e7c2(0);
    local_8 = 0;
  }
  FUN_00445a30();
  sVar1 = FUN_0045f084(iVar2 + 0x39,*(undefined4 *)(iVar2 + 0x3d));
  FUN_00483379((int)sVar1,param_1 + 0x578);
  puVar3 = (undefined4 *)FUN_0045f1e3(0);
  *puVar3 = 0;
  return;
}


