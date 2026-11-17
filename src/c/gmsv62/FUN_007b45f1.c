/* FUN_007b45f1 - 0x007b45f1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * __thiscall FUN_007b45f1(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (param_1 != param_2) {
    FUN_007b4664();
    if ((*param_2 != 0) && (iVar1 = *(int *)(*param_2 + -4), iVar1 != 0)) {
      piVar5 = (int *)FUN_004029b9(iVar1 * 8 + 4);
      *param_1 = (int)(piVar5 + 1);
      *piVar5 = iVar1;
      puVar2 = (undefined4 *)*param_2;
      puVar3 = puVar2;
      puVar4 = (undefined4 *)*param_1;
      while (puVar7 = puVar4, puVar6 = puVar3, puVar6 < puVar2 + iVar1 * 2) {
        puVar3 = puVar6 + 2;
        puVar4 = puVar7 + 2;
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *puVar6;
          puVar7[1] = puVar6[1];
        }
      }
    }
  }
  return param_1;
}


