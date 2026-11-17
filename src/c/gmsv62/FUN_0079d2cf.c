/* FUN_0079d2cf - 0x0079d2cf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0079d2cf(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  iVar1 = (**(code **)(*param_1 + 4))();
  uVar2 = FUN_00413367(iVar1 + 0x204,*(undefined4 *)(iVar1 + 0x20c));
  uVar3 = FUN_00413367(param_1 + 0x12d,param_1[0x12f]);
  puVar4 = (undefined4 *)FUN_004c2648();
  iVar1 = FUN_00653336(uVar3,0x4e23ef,uVar2,*puVar4);
  return (*(int *)(&DAT_008f17ec + param_2 * 4) * (iVar1 + 10)) / 0x10;
}


