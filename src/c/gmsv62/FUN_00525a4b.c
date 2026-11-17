/* FUN_00525a4b - 0x00525a4b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_00525a4b(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  iVar2 = *param_1;
  do {
    piVar1 = param_1;
    *param_3 = iVar2;
    param_3 = param_3 + 1;
    param_1 = piVar1;
    do {
      param_1 = param_1 + 1;
      if (param_1 == param_2) {
        return param_3;
      }
      iVar2 = *param_1;
    } while (*piVar1 == iVar2);
  } while( true );
}


