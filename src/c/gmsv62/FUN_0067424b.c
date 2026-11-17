/* FUN_0067424b - 0x0067424b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0067424b(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined4 local_3e0 [4];
  undefined4 local_3d0;
  undefined1 local_3cc [516];
  undefined1 local_1c8;
  undefined4 local_1c7;
  undefined4 local_c4;
  undefined4 local_c0 [5];
  int local_ac;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined1 *local_c;
  int local_8;
  
  FUN_00674439(param_1,s_Call_stack__0096a4dc);
  FUN_00674439(param_1,s_Address_Frame_0096a538);
  iVar1 = param_2;
  puVar4 = local_c0;
  for (iVar3 = 0x28; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_c4 = *(undefined4 *)(param_2 + 0xb8);
  local_a0 = *(undefined4 *)(param_2 + 0xc4);
  local_ac = *(int *)(param_2 + 0xb4);
  local_c0[1] = 3;
  local_98 = 3;
  local_a4 = 3;
  while( true ) {
    uVar2 = (*DAT_0097b3a8)(&local_c4,iVar1,0,*(undefined4 *)(param_1 + 0x138),
                            *(undefined4 *)(param_1 + 0x13c),0);
    uVar2 = (*DAT_0097b38c)(uVar2);
    iVar3 = (**(code **)(param_1 + 0x134))(0x14c,uVar2);
    if ((iVar3 == 0) || (local_ac == 0)) break;
    FUN_00674439(param_1,s__08X__08X_0096a528,local_c4,local_ac);
    local_1c8 = DAT_00978474;
    puVar4 = &local_1c7;
    for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0;
    *(undefined1 *)((int)puVar4 + 2) = 0;
    param_2 = 0;
    local_c = (undefined1 *)0x0;
    local_8 = 0;
    local_20 = 0x14;
    local_1c = 0;
    local_14 = 0;
    uStack_10 = 0;
    local_18 = -1;
    local_3e0[0] = 0x18;
    local_3d0 = 0x200;
    iVar3 = (**(code **)(param_1 + 0x140))
                      (*(undefined4 *)(param_1 + 0x128),local_c4,&param_2,local_3e0);
    if ((iVar3 != 0) && (*(code **)(param_1 + 0x144) != (code *)0x0)) {
      (**(code **)(param_1 + 0x144))(*(undefined4 *)(param_1 + 0x128),local_c4,&param_2,&local_20);
    }
    FUN_006740a7(local_c4,&local_1c8,0x104,&local_c,&local_8);
    if (local_18 == -1) {
      if (iVar3 == 0) {
        pcVar5 = s__04X__08X___s__0096a4ec;
        puVar6 = local_c;
        iVar3 = local_8;
      }
      else {
        pcVar5 = s__hs____X___s__0096a500;
        puVar6 = local_3cc;
        iVar3 = param_2;
      }
      FUN_00674439(param_1,pcVar5,puVar6,iVar3,&local_1c8);
    }
    else {
      FUN_00674439(param_1,s__hs____hs__lu____s__0096a510,local_3cc,local_14,local_18,&local_1c8);
    }
  }
  return;
}


