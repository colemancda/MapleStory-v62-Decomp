/* ZtlTaskMemReallocImp - 0x00823c95 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int ZtlTaskMemReallocImp(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
                    /* 0x423c95  3  ZtlTaskMemReallocImp */
  if (param_1 == 0) {
    param_1 = FUN_004029b9(param_2);
  }
  else {
    uVar1 = *(uint *)(param_1 + -4);
    if ((int)uVar1 < 0) {
      uVar1 = ~uVar1;
    }
    if (uVar1 < param_2) {
      iVar2 = FUN_004029b9(param_2);
      FUN_00879c20(iVar2,param_1,uVar1);
      FUN_00402b41(param_1);
      param_1 = iVar2;
    }
  }
  return param_1;
}


