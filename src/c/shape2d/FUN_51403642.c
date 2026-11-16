/* FUN_51403642 - 0x51403642 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void __thiscall FUN_51403642(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x20) == 0) {
    FUN_5140ac47(0x80004003);
  }
  piVar1 = *(int **)((int)this + 0x20);
  iVar2 = (**(code **)(*piVar1 + 0x34))(piVar1,param_1);
  if (iVar2 < 0) {
    FUN_5140ac55(iVar2,piVar1,&DAT_51410398);
  }
  return;
}


