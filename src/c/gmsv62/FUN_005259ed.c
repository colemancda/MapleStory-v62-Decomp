/* FUN_005259ed - 0x005259ed in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005259ed(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if ((int)((int)param_2 - param_1 & 0xfffffffcU) < 0x41) {
    FUN_0052614d();
  }
  else {
    FUN_00525fb5(param_1,param_2,0);
    piVar3 = (int *)(param_1 + 0x40);
    FUN_0052614d(param_1,piVar3,0);
    for (; piVar3 != param_2; piVar3 = piVar3 + 1) {
      iVar1 = *piVar3;
      piVar4 = piVar3;
      while( true ) {
        iVar2 = piVar4[-1];
        if (iVar2 <= iVar1) break;
        *piVar4 = iVar2;
        piVar4 = piVar4 + -1;
      }
      *piVar4 = iVar1;
    }
  }
  return;
}


