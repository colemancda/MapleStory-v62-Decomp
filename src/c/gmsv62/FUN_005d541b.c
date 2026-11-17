/* FUN_005d541b - 0x005d541b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall
FUN_005d541b(int param_1,int *param_2,int param_3,uint *param_4,int param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  int local_10;
  uint local_c;
  int local_8;
  
  *param_6 = 0;
  local_c = *(uint *)(param_1 + 0x28);
  local_8 = 0;
  if (local_c != 0) {
    local_10 = param_3 - (int)param_4;
    puVar3 = param_4;
    do {
      uVar4 = 0;
      if (param_5 <= local_8) {
        return local_8;
      }
      iVar2 = *(int *)(local_c + 4);
      iVar1 = *(int *)((-(uint)(local_c != 0) & local_c - 0x10) + 4);
      local_c = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
      iVar1 = FUN_004cd670(iVar2 + 0xf8,*(undefined4 *)(iVar2 + 0x100));
      if ((((iVar1 != 0) &&
           (iVar1 = FUN_004cd670(iVar2 + 0x3d0,*(undefined4 *)(iVar2 + 0x3d8)), iVar1 == 0)) &&
          (*(int *)(*(int *)(iVar2 + 0x15c) + 0x1d8) == 0)) &&
         ((iVar1 = FUN_005d04ff(), iVar1 == 0 && (*(int *)(iVar2 + 0x2f8) == 0)))) {
        param_4 = (uint *)0x0;
        FUN_005c5b12(local_20,1);
        iVar1 = (*DAT_0097b5a4)(local_20);
        if (iVar1 == 0) {
          param_3 = 0;
          while (((iVar1 = *param_2, iVar1 != 0 && (uVar4 < *(uint *)(iVar1 + -4))) &&
                 ((int)param_4 < 0xf))) {
            iVar1 = (*DAT_0097b5a0)(local_30,local_20,param_3 + iVar1);
            if (iVar1 != 0) {
              *puVar3 = *puVar3 | 1 << ((byte)uVar4 & 0x1f);
              param_4 = (uint *)((int)param_4 + 1);
              *(int *)(local_10 + (int)puVar3) = iVar2;
            }
            uVar4 = uVar4 + 1;
            param_3 = param_3 + 0x10;
          }
          iVar2 = *param_6;
          if (*param_6 < (int)param_4) {
            iVar2 = (int)param_4;
          }
          if (iVar2 < 1) {
            iVar2 = 0;
          }
          *param_6 = iVar2;
          if (param_4 != (uint *)0x0) {
            local_8 = local_8 + 1;
            puVar3 = puVar3 + 1;
          }
        }
      }
    } while (local_c != 0);
  }
  return local_8;
}


