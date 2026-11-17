/* FUN_004184ca - 0x004184ca in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004184ca(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    FUN_00419015();
  }
  else {
    if (param_2 == -1) {
      param_2 = FUN_0087a007(param_1);
    }
    iVar2 = param_2 * 2;
    uVar1 = FUN_0041903e(param_2,0);
    FUN_00879c20(uVar1,param_1,iVar2);
    FUN_004190dc(param_2);
  }
  return;
}


