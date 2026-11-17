/* FUN_00674606 - 0x00674606 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00674606(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char local_128 [260];
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  int local_8;
  
  if ((*(int *)(param_1 + 0x120) == 0) && (*(int *)(param_1 + 0x148) != 0)) {
    local_8 = param_1;
    iVar3 = (*DAT_0097b384)(0,local_128,0x104);
    for (pcVar5 = local_128 + iVar3 + -1;
        (((local_128 <= pcVar5 && (cVar1 = *pcVar5, cVar1 != '/')) && (cVar1 != '\\')) &&
        (cVar1 != '.')); pcVar5 = pcVar5 + -1) {
    }
    (*DAT_0097b4a8)(&local_18);
    if (pcVar5 < local_128) {
      pcVar5 = pcVar5 + 1;
    }
    (*DAT_0097b50c)(pcVar5,s__d_02d_02d_02d_02d_02d_dmp_0096a5f8,local_18,local_16,local_12,local_10
                    ,local_e,local_c);
    uVar2 = (*DAT_0097b44c)(local_128,0xc0000000,3,0,2,0,0);
    if (param_2 != 0) {
      local_24 = (*DAT_0097b3ac)();
      local_20 = param_2;
      local_1c = 1;
    }
    uVar4 = (*DAT_0097b390)(uVar2,0,-(uint)(param_2 != 0) & (uint)&local_24,0,0);
    uVar4 = (*DAT_0097b38c)(uVar4);
    (**(code **)(local_8 + 0x148))(uVar4);
    (*DAT_0097b388)(uVar2);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


