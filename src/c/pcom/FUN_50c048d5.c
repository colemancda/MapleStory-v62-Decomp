/* FUN_50c048d5 - 0x50c048d5 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int * FUN_50c048d5(int *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  piVar3 = param_1;
  if (param_1 == (int *)0x0) {
    param_1 = (int *)0x80070057;
  }
  else {
    puVar4 = (undefined4 *)param_1[4];
    param_1 = (int *)0x0;
    if (param_4 == (int *)0x0) {
      param_1 = (int *)0x80004003;
    }
    else {
      *param_4 = 0;
      piVar2 = (int *)*puVar4;
      while (piVar2 != (int *)0x0) {
        if ((((puVar4[2] != 0) && (*param_2 == *piVar2)) && (param_2[1] == piVar2[1])) &&
           ((param_2[2] == piVar2[2] && (param_2[3] == piVar2[3])))) {
          piVar2 = puVar4 + 4;
          if (puVar4[4] == 0) {
            FUN_50c026fc();
            if (*piVar2 == 0) {
              param_1 = (int *)(*(code *)puVar4[2])(puVar4[3],&DAT_50c14870,piVar2);
            }
            piVar1 = piVar3 + 0xc;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              piVar3[0xb] = 0;
            }
          }
          puVar4 = (undefined4 *)*piVar2;
          if (puVar4 != (undefined4 *)0x0) {
            param_1 = (int *)(**(code **)*puVar4)(puVar4,param_3,param_4);
          }
          break;
        }
        if (*piVar3 == 0x34) {
          puVar4 = puVar4 + 7;
        }
        else {
          puVar4 = puVar4 + 9;
        }
        piVar2 = (int *)*puVar4;
      }
      if ((*param_4 == 0) && (param_1 == (int *)0x0)) {
        param_1 = (int *)0x80040111;
      }
    }
  }
  return param_1;
}


