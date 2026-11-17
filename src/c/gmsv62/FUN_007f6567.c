/* FUN_007f6567 - 0x007f6567 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_007f6567(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_64 [24];
  
  if (param_1[0x5e] != 0) {
    FUN_007f200a();
  }
  if (param_1[0x44] == 0) {
    piVar2 = param_1 + 8;
    piVar3 = local_64;
    for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    }
    FUN_007f2a1c(param_2);
    iVar1 = FUN_007f3054(local_64,&param_2,1);
    if ((iVar1 != 0) && (0 < param_2)) {
      param_1[0x8e] = 1;
    }
    (**(code **)(*param_1 + 0x14))(param_2);
  }
  else {
    param_1[0x8e] = 1;
  }
  return 1;
}


