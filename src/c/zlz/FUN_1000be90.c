/* FUN_1000be90 - 0x1000be90 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


int * __cdecl FUN_1000be90(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (*DAT_10016c7c)(0,param_1 + 4);
  piVar2 = (int *)(*DAT_10016c74)(uVar1);
  *piVar2 = param_1;
  return piVar2 + 1;
}


