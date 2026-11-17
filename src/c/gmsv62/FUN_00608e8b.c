/* FUN_00608e8b - 0x00608e8b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_00608e8b(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if (param_2 == 0x201) {
    iVar1 = *(int *)(param_1 + 0x80);
    if (iVar1 == 0) {
      FUN_00604a05(param_4,param_5);
    }
    else if (iVar1 == 1) {
      FUN_00607387(param_4,param_5);
    }
    else if (iVar1 == 2) {
      FUN_00605abe(param_4,param_5);
    }
  }
  return;
}


