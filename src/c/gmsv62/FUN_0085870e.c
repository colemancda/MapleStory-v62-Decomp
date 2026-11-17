/* FUN_0085870e - 0x0085870e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * __thiscall FUN_0085870e(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  if (param_1 != param_2) {
    FUN_004b8e73();
    if ((*param_2 != 0) && (iVar1 = *(int *)(*param_2 + -4), iVar1 != 0)) {
      piVar7 = (int *)FUN_004029b9(iVar1 * 0x25 + 4);
      *param_1 = (int)(piVar7 + 1);
      *piVar7 = iVar1;
      puVar2 = (undefined4 *)*param_2;
      puVar5 = puVar2;
      puVar6 = (undefined4 *)*param_1;
      while (puVar4 = puVar6, puVar3 = puVar5, puVar3 < (undefined4 *)(iVar1 * 0x25 + (int)puVar2))
      {
        puVar5 = (undefined4 *)((int)puVar3 + 0x25);
        puVar6 = (undefined4 *)((int)puVar4 + 0x25);
        if (puVar4 != (undefined4 *)0x0) {
          puVar9 = puVar3;
          puVar10 = puVar4;
          for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
        }
      }
    }
  }
  return param_1;
}


