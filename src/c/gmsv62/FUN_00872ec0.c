/* FUN_00872ec0 - 0x00872ec0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00872ec0(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)((int)ProcessEnvironmentBlock + 0xc) + 0x1c);
  *param_2 = piVar1[2];
  *param_1 = *(undefined4 *)(*piVar1 + 8);
  return;
}


