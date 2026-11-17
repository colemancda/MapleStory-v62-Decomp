/* FUN_0073054c - 0x0073054c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0073054c(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
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
  sVar1 = FUN_0045f084(iVar2 + 0x81,*(undefined4 *)(iVar2 + 0x85));
  iVar2 = 6;
  piVar3 = (int *)(param_1 + 0x57c);
  do {
    (**(code **)(*(int *)(*piVar3 + 4) + 0x1c))(sVar1 != 0);
    piVar3 = piVar3 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


