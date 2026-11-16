/* FUN_5181116e - 0x5181116e in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


uint FUN_5181116e(int param_1,uint param_2,undefined2 *param_3,uint *param_4)

{
  undefined2 *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  uVar4 = 0;
  if (param_3 == (undefined2 *)0x0) {
    uVar2 = 0x80004003;
  }
  else {
    piVar3 = *(int **)(param_1 + 0x24);
    piVar5 = piVar3;
    if (param_2 != 0) {
      do {
        piVar3 = (int *)0x0;
        if (piVar5 == (int *)0x0) break;
        piVar3 = (int *)(-(uint)(piVar5[-3] != 0) & piVar5[-3] + 0x10U);
        puVar1 = param_3 + 8;
        uVar2 = FUN_5180481d(param_3,piVar5);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar3;
        param_3 = puVar1;
      } while (uVar4 < param_2);
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = uVar4;
    }
    uVar2 = (uint)(uVar4 != param_2);
    if (uVar4 < param_2) {
      iVar6 = param_2 - uVar4;
      do {
        Ordinal_8(param_3);
        iVar6 = iVar6 + -1;
        param_3 = param_3 + 8;
      } while (iVar6 != 0);
    }
    *(int **)(param_1 + 0x24) = piVar3;
  }
  return uVar2;
}


