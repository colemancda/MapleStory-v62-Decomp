/* FUN_005f1010 - 0x005f1010 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_005f1010(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_8 = 0;
  local_14 = __ftol();
  local_c = __ftol();
  iVar1 = *(int *)(param_1 + 0x28);
  while (iVar4 = iVar1, iVar4 != 0) {
    iVar1 = *(int *)(iVar4 + 4);
    local_18 = iVar4;
    iVar2 = FUN_005f3a71(**(undefined4 **)(*(int *)(iVar4 + 0x10) + 0x98));
    if (((iVar2 != 0) && (*(int *)(iVar2 + 0x44) == 0)) &&
       ((*(int *)(iVar2 + 0x9c) == 0 || (*(int *)(*(int *)(iVar4 + 0x10) + 0x7c) != 0)))) {
      piVar3 = (int *)FUN_005ec7d6();
      local_28 = *piVar3;
      local_24 = piVar3[1];
      iVar4 = piVar3[2];
      iVar2 = piVar3[3];
      local_20 = iVar4;
      local_1c = iVar2;
      (*DAT_0097b504)(local_38,local_28 - param_3,local_24 - local_c,iVar4 + param_3,iVar2 + local_c
                     );
      (*DAT_0097b504)(local_48,local_28 - local_c,local_24 - param_3,iVar4 + local_c,iVar2 + param_3
                     );
      (*DAT_0097b504)(local_58,local_28 - local_14,local_24 - local_14,iVar4 + local_14,
                      iVar2 + local_14);
      iVar4 = (*DAT_0097b57c)(local_38,*param_2,param_2[1]);
      if (((iVar4 != 0) || (iVar4 = (*DAT_0097b57c)(local_48,*param_2,param_2[1]), iVar4 != 0)) ||
         (iVar4 = (*DAT_0097b57c)(local_58,*param_2,param_2[1]), iVar4 != 0)) {
        iVar4 = local_18;
        piVar3 = (int *)(**(code **)(*(int *)(*(int *)(local_18 + 0x10) + 4) + 0x10))();
        iVar2 = (param_2[1] - piVar3[1]) * (param_2[1] - piVar3[1]) +
                (*param_2 - *piVar3) * (*param_2 - *piVar3);
        if ((local_8 == 0) || (iVar2 < local_10)) {
          local_8 = *(int *)(iVar4 + 0x10);
          local_10 = iVar2;
        }
      }
    }
  }
  return local_8;
}


