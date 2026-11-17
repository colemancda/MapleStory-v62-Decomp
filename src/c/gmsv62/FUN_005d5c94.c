/* FUN_005d5c94 - 0x005d5c94 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_005d5c94(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int local_48 [10];
  undefined1 local_20 [16];
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = param_2;
  (*DAT_0097b504)(local_20,param_1 + -300,param_2 + -100,param_1 + 300,param_2 + 100);
  local_10 = FUN_005d528b(local_20,local_48,10,0,0,0,0,0);
  if (local_10 == 0) {
    iVar1 = 0;
  }
  else {
    local_c = 0;
    local_8 = 0x7fffffff;
    param_2 = 0;
    if (0 < local_10) {
      piVar4 = local_48;
      do {
        piVar2 = (int *)(**(code **)(*(int *)(*piVar4 + 4) + 0x10))();
        iVar3 = (piVar2[1] - iVar1) * (piVar2[1] - iVar1) +
                (*piVar2 - param_1) * (*piVar2 - param_1);
        if (iVar3 < local_8) {
          local_8 = iVar3;
          local_c = param_2;
        }
        param_2 = param_2 + 1;
        piVar4 = piVar4 + 1;
      } while (param_2 < local_10);
    }
    iVar1 = local_48[local_c];
  }
  return iVar1;
}


