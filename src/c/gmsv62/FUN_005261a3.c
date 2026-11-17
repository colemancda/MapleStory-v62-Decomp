/* FUN_005261a3 - 0x005261a3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005261a3(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int local_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  piVar1 = param_1;
  if (param_1 != param_2) {
    while (piVar1 = piVar1 + 4, piVar1 != param_2) {
      local_24 = *piVar1;
      iStack_20 = piVar1[1];
      iStack_1c = piVar1[2];
      iStack_18 = piVar1[3];
      piVar2 = piVar1;
      if (*piVar1 < *param_1) {
        while (param_1 != piVar2) {
          *piVar2 = piVar2[-4];
          piVar2[1] = piVar2[-3];
          piVar2[2] = piVar2[-2];
          piVar2[3] = piVar2[-1];
          piVar2 = piVar2 + -4;
        }
        piVar2 = &local_24;
        piVar3 = param_1;
      }
      else {
        local_14 = *piVar1;
        iStack_10 = piVar1[1];
        iStack_c = piVar1[2];
        iStack_8 = piVar1[3];
        piVar3 = piVar1;
        while (piVar2 = piVar3 + -4, local_14 < *piVar2) {
          *piVar3 = *piVar2;
          piVar3[1] = piVar3[-3];
          piVar3[2] = piVar3[-2];
          piVar3[3] = piVar3[-1];
          piVar3 = piVar2;
        }
        piVar2 = &local_14;
      }
      *piVar3 = *piVar2;
      piVar3[1] = piVar2[1];
      piVar3[2] = piVar2[2];
      piVar3[3] = piVar2[3];
    }
  }
  return;
}


