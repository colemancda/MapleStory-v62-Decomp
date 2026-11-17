/* FUN_00748897 - 0x00748897 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * __thiscall FUN_00748897(int *param_1,wchar_t *param_2)

{
  short *psVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  
  if (param_2 == (wchar_t *)0x0) {
    param_2 = u__0096470c;
  }
  psVar1 = (short *)*param_1;
  if (((psVar1 != (short *)0x0) && (*psVar1 != 0)) &&
     (iVar2 = FUN_0087b57c(param_2,*(undefined2 *)
                                    ((int)psVar1 + ((*(uint *)(psVar1 + -2) & 0xfffffffe) - 2))),
     iVar2 != 0)) {
    puVar3 = (undefined2 *)FUN_0041903e(0,1);
    if (*param_1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(*param_1 + -4) >> 1;
    }
    puVar5 = puVar3 + (uVar4 - 2);
    if (puVar3 <= puVar5) {
      do {
        iVar2 = FUN_0087b57c(param_2,*puVar5);
        if (iVar2 == 0) break;
        puVar5 = puVar5 + -1;
      } while (puVar3 <= puVar5);
      if (puVar3 <= puVar5) {
        puVar5[1] = 0;
        FUN_004190dc((int)(puVar5 + 1) - (int)puVar3 >> 1);
        return param_1;
      }
    }
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + -0xc) = 1;
    *(undefined2 *)*param_1 = 0;
    *(undefined4 *)(iVar2 + -4) = 0;
    FUN_00419015();
  }
  return param_1;
}


