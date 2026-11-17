/* FUN_004cccd9 - 0x004cccd9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004cccd9(int param_1)

{
  int iVar1;
  int *piVar2;
  int local_c;
  int local_8;
  
  local_c = param_1;
  local_8 = param_1;
  iVar1 = FUN_004cda45(&stack0x00000004,&local_c);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x68) = 1;
    piVar2 = (int *)FUN_004cdc34();
    *piVar2 = local_c;
    piVar2[1] = local_8;
  }
  return;
}


