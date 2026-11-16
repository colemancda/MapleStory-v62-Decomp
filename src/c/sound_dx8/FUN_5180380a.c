/* FUN_5180380a - 0x5180380a in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_5180380a(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  
  if (param_1 == (int *)0x0) {
    uVar4 = 0x80070057;
  }
  else {
    piVar5 = (int *)param_1[4];
    if (piVar5 != (int *)0x0) {
      while (*piVar5 != 0) {
        piVar1 = (int *)piVar5[4];
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        piVar5[4] = 0;
        (*(code *)piVar5[8])(0);
        if (*param_1 == 0x34) {
          piVar5 = piVar5 + 7;
        }
        else {
          piVar5 = piVar5 + 9;
        }
      }
    }
    puVar3 = (undefined4 *)param_1[0x14];
    while (puVar3 != (undefined4 *)0x0) {
      (*(code *)*puVar3)(puVar3[1]);
      puVar2 = (undefined4 *)puVar3[2];
      FUN_51801ac1(&DAT_5181fdb0,puVar3);
      puVar3 = puVar2;
    }
    if ((param_1[6] != 0) && ((char)param_1[0xf] != '\0')) {
      if (param_1[0x12] != 0) {
        uVar6 = 0;
        do {
          HeapDestroy(*(HANDLE *)(param_1[0x12] + uVar6 * 4));
          uVar6 = uVar6 + 1;
        } while (uVar6 <= (uint)param_1[0x11]);
      }
      HeapDestroy((HANDLE)param_1[6]);
    }
    uVar4 = 0;
  }
  return uVar4;
}


