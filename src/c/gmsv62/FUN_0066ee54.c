/* FUN_0066ee54 - 0x0066ee54 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0066ee54(int param_1,undefined4 param_2,int param_3,int param_4,int *param_5,uint param_6,
                int *param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint local_38 [7];
  double local_1c;
  undefined4 local_14;
  uint local_10;
  undefined4 uStack_c;
  int local_8;
  
  puVar6 = param_7;
  iVar1 = param_3;
  local_8 = 0;
  local_14 = FUN_00650dae(param_1,0x40413e,&DAT_0097b154);
  FUN_00413367(param_3 + 0x5dc,*(undefined4 *)(param_3 + 0x5e4));
  FUN_00413367(param_3 + 0x5dc,*(undefined4 *)(param_3 + 0x5e4));
  param_1 = 0;
  puVar5 = local_38;
  iVar7 = 7;
  do {
    uVar2 = FUN_004133f0();
    *puVar5 = uVar2;
    puVar5 = puVar5 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  param_3 = 0;
  param_7 = param_5;
  do {
    if ((param_6 & 1 << ((byte)param_3 & 0x1f)) != 0) {
      if (*(int *)(param_4 + 0x1a0) == 0) {
        uVar2 = local_38[param_1 % 7];
        iVar7 = param_1 + 1;
        if (*(int *)(param_4 + 0x120) != 0) {
          iVar3 = FUN_00413367(iVar1 + 0x84c,*(undefined4 *)(iVar1 + 0x854));
          if (iVar3 < (int)(uVar2 % 100)) {
            *puVar6 = 1;
            param_1 = iVar7;
            goto LAB_0066efd5;
          }
        }
        iVar3 = *param_7;
        if (iVar3 < 0x3e9) {
          local_1c = ((double)iVar3 * _DAT_008ed7e8 + _DAT_008ebc78) * _DAT_008ed7e0;
        }
        else {
          local_1c = (double)iVar3 / (double)(iVar3 + 0x1482);
        }
        iVar3 = FUN_006509a1(local_14);
        FUN_00413367(iVar3 + 0x13c,*(undefined4 *)(iVar3 + 0x144));
        uStack_c = 0;
        param_1 = param_1 + 2;
        local_10 = local_38[iVar7 % 7] % 10000000;
        uVar4 = __ftol();
        *puVar6 = uVar4;
      }
      else {
        *puVar6 = 0;
      }
LAB_0066efd5:
      local_8 = local_8 + 1;
      puVar6 = puVar6 + 1;
    }
    param_3 = param_3 + 1;
    param_7 = param_7 + 1;
    if (0xe < param_3) {
      return local_8;
    }
  } while( true );
}


