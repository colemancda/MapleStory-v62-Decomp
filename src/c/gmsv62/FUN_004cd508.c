/* FUN_004cd508 - 0x004cd508 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004cd508(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)(param_1 + 8);
  if (*(int *)(param_1 + 4) == 0) {
    piVar3 = piVar2 + *(int *)(param_1 + 0x94) * 7;
    for (; piVar2 < piVar3; piVar2 = piVar2 + 7) {
      if (((*param_2 <= piVar2[2]) && (param_2[1] <= piVar2[3])) &&
         ((*piVar2 <= param_2[2] &&
          ((piVar2[1] <= param_2[3] && (iVar1 = FUN_004cdd24(piVar2[5] + 0x10,0), iVar1 == 0)))))) {
        iVar1 = piVar2[5];
        FUN_004cdcac();
        FUN_004cd609(iVar1 + 0x10);
      }
    }
  }
  else {
    piVar3 = piVar2 + *(int *)(param_1 + 0x94) * 7;
    for (; piVar2 < piVar3; piVar2 = piVar2 + 7) {
      if ((((*param_2 <= piVar2[2]) && (param_2[1] <= piVar2[3])) && (*piVar2 <= param_2[2])) &&
         (piVar2[1] <= param_2[3])) {
        FUN_004cd508(piVar2[6],param_2,param_3);
      }
    }
  }
  return;
}


