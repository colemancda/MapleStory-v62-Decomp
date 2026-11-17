/* FUN_0042e348 - 0x0042e348 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0042e348(int *param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int **ppiVar2;
  undefined8 *puVar3;
  int *apiStack_20 [3];
  int iStack_14;
  
  iStack_14 = 0x42e368;
  FUN_0087a1b0();
  ppiVar2 = apiStack_20 + param_2 * 0x18;
  if (param_3 < param_3 + param_2 * 6) {
    puVar3 = param_3 + 2;
    do {
      *(undefined2 *)ppiVar2 = 0xd;
      ppiVar2[2] = *(int **)(puVar3 + -2);
      *(undefined2 *)(ppiVar2 + -4) = 5;
      *(undefined8 *)(ppiVar2 + -2) = puVar3[-1];
      *(undefined2 *)(ppiVar2 + -8) = 5;
      *(undefined8 *)(ppiVar2 + -6) = *puVar3;
      *(undefined2 *)(ppiVar2 + -0xc) = 5;
      *(undefined8 *)(ppiVar2 + -10) = puVar3[1];
      *(undefined2 *)(ppiVar2 + -0x10) = 5;
      *(undefined8 *)(ppiVar2 + -0xe) = puVar3[2];
      *(undefined2 *)(ppiVar2 + -0x14) = 3;
      ppiVar2[-0x12] = *(int **)(puVar3 + 3);
      puVar1 = puVar3 + 4;
      ppiVar2 = ppiVar2 + -0x18;
      puVar3 = puVar3 + 6;
    } while (puVar1 < param_3 + param_2 * 6);
  }
  apiStack_20[1] = param_1;
  apiStack_20[0] = (int *)0x42e3e8;
  apiStack_20[2] = (int *)&stack0xfffffff0;
  iStack_14 = param_2 * 6;
  (**(code **)(*param_1 + 0xac))();
  return;
}


