/* FUN_5040896f - 0x5040896f in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __cdecl FUN_5040896f(undefined4 *param_1,int param_2,char *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar2 = param_2;
  puVar1 = param_1;
  param_1 = (undefined4 *)0x20;
  puVar4 = puVar1;
  do {
    param_1 = (undefined4 *)((int)param_1 + -1);
    puVar5 = puVar4;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0x80008000;
      puVar5 = puVar5 + 1;
    }
    puVar4 = (undefined4 *)((int)puVar4 + param_2);
  } while (param_1 != (undefined4 *)0x0);
  param_1 = (undefined4 *)((int)puVar1 + param_2 + 2);
  iVar3 = param_2 * 6;
  param_2 = 5;
  do {
    FUN_504080d4((undefined2 *)param_1,iVar2,param_3,0xffff);
    param_1 = (undefined4 *)((int)param_1 + iVar3);
    param_3 = param_3 + 0xf;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}


