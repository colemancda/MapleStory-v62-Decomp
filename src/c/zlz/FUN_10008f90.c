/* FUN_10008f90 - 0x10008f90 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void __cdecl FUN_10008f90(int param_1)

{
  FUN_10009000();
  *(int *)(param_1 + 0xb10) = param_1 + 0x8c;
  *(int *)(param_1 + 0xb28) = param_1 + 0xa74;
  *(undefined ***)(param_1 + 0xb18) = &PTR_DAT_100125c0;
  *(int *)(param_1 + 0xb1c) = param_1 + 0x980;
  *(undefined ***)(param_1 + 0xb24) = &PTR_DAT_100125d8;
  *(undefined **)(param_1 + 0xb30) = &DAT_100125f0;
  *(undefined2 *)(param_1 + 0x16b0) = 0;
  *(undefined4 *)(param_1 + 0x16b4) = 0;
  *(undefined4 *)(param_1 + 0x16ac) = 8;
  FUN_10009010(param_1);
  return;
}


