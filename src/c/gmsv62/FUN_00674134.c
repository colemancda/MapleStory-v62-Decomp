/* FUN_00674134 - 0x00674134 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00674134(undefined4 param_1,int param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 local_114;
  undefined4 local_113;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_1;
  FUN_00674439(param_1,s_Call_stack__0096a4dc);
  FUN_00674439(local_c,s_Address_Frame_Logical_addr_Modul_0096a4b0);
  uVar5 = *(undefined4 *)(param_2 + 0xb8);
  puVar3 = *(undefined4 **)(param_2 + 0xb4);
  local_114 = DAT_00978474;
  local_8 = 0;
  param_2 = 0;
  puVar4 = &local_113;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  FUN_006740a7(uVar5,&local_114,0x104,&local_8,&param_2);
  while( true ) {
    FUN_00674439(local_c,s__08X__08X__04X__08X__s_0096a494,uVar5,puVar3,local_8,param_2,&local_114);
    local_10 = puVar3[1];
    puVar4 = (undefined4 *)*puVar3;
    if ((((uint)puVar4 & 3) != 0) || (puVar4 <= puVar3)) break;
    BVar1 = IsBadWritePtr(puVar4,8);
    if (BVar1 != 0) {
      return;
    }
    local_114 = DAT_00978474;
    local_8 = 0;
    param_2 = 0;
    puVar3 = &local_113;
    for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar3 = 0;
    *(undefined1 *)((int)puVar3 + 2) = 0;
    FUN_006740a7(local_10,&local_114,0x104,&local_8,&param_2);
    puVar3 = puVar4;
    uVar5 = local_10;
  }
  return;
}


