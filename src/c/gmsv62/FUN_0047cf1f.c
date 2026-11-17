/* FUN_0047cf1f - 0x0047cf1f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * __thiscall FUN_0047cf1f(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  if (param_1 != param_2) {
    FUN_0045ebca();
    if ((*param_2 != 0) && (iVar1 = *(int *)(*param_2 + -4), iVar1 != 0)) {
      piVar5 = (int *)FUN_004029b9(iVar1 + 4);
      *param_1 = (int)(piVar5 + 1);
      *piVar5 = iVar1;
      puVar2 = (undefined1 *)*param_2;
      puVar3 = puVar2;
      puVar4 = (undefined1 *)*param_1;
      while (puVar7 = puVar4, puVar6 = puVar3, puVar6 < puVar2 + iVar1) {
        puVar3 = puVar6 + 1;
        puVar4 = puVar7 + 1;
        if (puVar7 != (undefined1 *)0x0) {
          *puVar7 = *puVar6;
        }
      }
    }
  }
  return param_1;
}


