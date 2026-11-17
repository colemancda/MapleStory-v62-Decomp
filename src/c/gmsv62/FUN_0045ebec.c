/* FUN_0045ebec - 0x0045ebec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0045ebec(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint local_8;
  
  if (*param_1 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(uint *)(*param_1 + -4);
  }
  if ((local_8 < param_2) && (uVar1 = FUN_0046072f(), uVar1 < param_2)) {
    iVar2 = FUN_004029b9(param_2 + 4);
    if (*param_1 != 0) {
      if ((param_3 & 1) == 0) {
        FUN_00879c20(iVar2 + 4,*param_1,local_8);
      }
      FUN_00402b41(*param_1 + -4);
    }
    *param_1 = iVar2 + 4;
  }
  if (*param_1 != 0) {
    *(uint *)(*param_1 + -4) = param_2;
  }
  return *param_1;
}


