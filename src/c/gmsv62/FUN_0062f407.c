/* FUN_0062f407 - 0x0062f407 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * __thiscall FUN_0062f407(int *param_1,int *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int *piVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  
  if (param_1 != param_2) {
    FUN_005ee767();
    if ((*param_2 != 0) && (iVar1 = *(int *)(*param_2 + -4), iVar1 != 0)) {
      piVar5 = (int *)FUN_004029b9(iVar1 * 2 + 4);
      *param_1 = (int)(piVar5 + 1);
      *piVar5 = iVar1;
      puVar2 = (undefined2 *)*param_2;
      puVar3 = puVar2;
      puVar4 = (undefined2 *)*param_1;
      while (puVar7 = puVar4, puVar6 = puVar3, puVar6 < puVar2 + iVar1) {
        puVar3 = puVar6 + 1;
        puVar4 = puVar7 + 1;
        if (puVar7 != (undefined2 *)0x0) {
          *puVar7 = *puVar6;
        }
      }
    }
  }
  return param_1;
}


