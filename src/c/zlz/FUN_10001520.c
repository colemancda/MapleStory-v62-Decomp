/* FUN_10001520 - 0x10001520 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void __cdecl FUN_10001520(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  param_1[8] = 0;
  if (param_2 != (undefined4 *)0x0) {
    iVar1 = 4;
    do {
      *param_1 = *param_2;
      param_1 = param_1 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
  }
  *param_1 = DAT_1000d06c;
  param_1[1] = DAT_1000d070;
  param_1[2] = DAT_1000d074;
  param_1[3] = DAT_1000d078;
  return;
}


